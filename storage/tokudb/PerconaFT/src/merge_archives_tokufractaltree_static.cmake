# Copyright (c) 2009 Sun Microsystems, Inc.
# Use is subject to license terms.
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA 

# This script merges many static libraries into
# one big library on Unix.
SET(TARGET "tokufractaltree_static")
SET(CMAKE_CURRENT_BINARY_DIR "/mnt/workspace/percona-server-5.6-source-tarballs-new/test/percona-server/storage/tokudb/PerconaFT/src")
SET(CMAKE_AR "/usr/bin/gcc-ar")
SET(CMAKE_RANLIB "/usr/bin/gcc-ranlib")


SET(TEMP_DIR ${CMAKE_CURRENT_BINARY_DIR}/merge_archives_${TARGET})
MAKE_DIRECTORY(${TEMP_DIR})
# Extract each archive to its own subdirectory(avoid object filename
# clashes) Since the lib may contain objects with the same name, we first
# list the archive contents, then uniquify the object names as we extract
# them.
FOREACH(LIB ${STATIC_LIB_FILES})
  GET_FILENAME_COMPONENT(NAME_NO_EXT ${LIB} NAME_WE)
  SET(TEMP_SUBDIR ${TEMP_DIR}/${NAME_NO_EXT})
  MAKE_DIRECTORY(${TEMP_SUBDIR})
  EXECUTE_PROCESS(
    COMMAND ${CMAKE_AR} -t ${LIB}
    OUTPUT_VARIABLE LIB_OBJS
    )
  STRING(REGEX REPLACE "\n" ";" LIB_OBJ_LIST "${LIB_OBJS}")
  STRING(REGEX REPLACE ";$" "" LIB_OBJ_LIST "${LIB_OBJ_LIST}")

  LIST(LENGTH LIB_OBJ_LIST LENGTH_WITH_DUPS)
  SET(LIB_OBJ_LIST_NO_DUPS ${LIB_OBJ_LIST})
  IF (LENGTH_WITH_DUPS GREATER 0)
    LIST(REMOVE_DUPLICATES LIB_OBJ_LIST_NO_DUPS)
  ENDIF ()
  LIST(LENGTH LIB_OBJ_LIST_NO_DUPS LENGTH_WITHOUT_DUPS)

  IF(LENGTH_WITH_DUPS EQUAL LENGTH_WITHOUT_DUPS)
    # Optimization for when lib doesn't actually have duplicate object
    # names, we can just extract everything.
    EXECUTE_PROCESS(
      COMMAND ${CMAKE_AR} -x ${LIB}
      WORKING_DIRECTORY ${TEMP_SUBDIR}
      )
  ELSE()
    LIST(SORT LIB_OBJ_LIST)
    SET(SAME_OBJ_COUNT 1)
    SET(LAST_OBJ_NAME)
    FOREACH(OBJ ${LIB_OBJ_LIST})
      IF(OBJ STREQUAL LAST_OBJ_NAME)
        GET_FILENAME_COMPONENT(OBJ_NO_EXT ${OBJ} NAME_WE)
        FILE(RENAME "${TEMP_SUBDIR}/${OBJ}" "${TEMP_SUBDIR}/${OBJ_NO_EXT}.${SAME_OBJ_COUNT}.o")
        MATH(EXPR SAME_OBJ_COUNT "${SAME_OBJ_COUNT}+1")
      ELSE()
        SET(SAME_OBJ_COUNT 1)
      ENDIF()
      SET(LAST_OBJ_NAME "${OBJ}")
      EXECUTE_PROCESS(
        COMMAND ${CMAKE_AR} -xN ${SAME_OBJ_COUNT} ${LIB} ${OBJ}
        WORKING_DIRECTORY ${TEMP_SUBDIR}
        )
    ENDFOREACH()
  ENDIF()

  FILE(GLOB_RECURSE LIB_OBJECTS "${TEMP_SUBDIR}/*.o")
  SET(OBJECTS ${OBJECTS} ${LIB_OBJECTS})
ENDFOREACH()

# Use relative paths, makes command line shorter.
GET_FILENAME_COMPONENT(ABS_TEMP_DIR ${TEMP_DIR} ABSOLUTE)
FOREACH(OBJ ${OBJECTS})
  FILE(RELATIVE_PATH OBJ ${ABS_TEMP_DIR} ${OBJ})
  FILE(TO_NATIVE_PATH ${OBJ} OBJ)
  SET(ALL_OBJECTS ${ALL_OBJECTS} ${OBJ})
ENDFOREACH()

FILE(TO_NATIVE_PATH ${TARGET_FILE} TARGET_FILE)
# Now pack the objects into library with ar.
EXECUTE_PROCESS(
  COMMAND ${CMAKE_AR} rcs ${TARGET_FILE} ${ALL_OBJECTS}
  WORKING_DIRECTORY ${TEMP_DIR}
)

# Cleanup
FILE(REMOVE_RECURSE ${TEMP_DIR})
