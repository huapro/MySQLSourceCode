# Install script for directory: /Users/yanglihua/Downloads/percona-server-5.6.43

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/yanglihua/Downloads/percona-server-5.6.43/work")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xInfox" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/docs" TYPE FILE OPTIONAL FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/Docs/mysql.info")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xReadmex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE OPTIONAL FILES
    "/Users/yanglihua/Downloads/percona-server-5.6.43/COPYING"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/LICENSE.mysql"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xReadmex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/README.MySQL")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/docs" TYPE FILE FILES
    "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/Docs/INFO_SRC"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/Docs/INFO_BIN"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDocumentationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/docs" TYPE DIRECTORY FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/Docs/" REGEX "/makefile\\.[^/]*$" EXCLUDE REGEX "/glibc[^/]*$" EXCLUDE REGEX "/linuxthreads\\.txt$" EXCLUDE REGEX "/myisam\\.txt$" EXCLUDE REGEX "/mysql\\.info$" EXCLUDE REGEX "/sp\\-imp\\-spec\\.txt$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/extra/yassl/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/extra/yassl/taocrypt/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/libevent/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/perfschema/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/archive/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/blackhole/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/csv/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/example/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/federated/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/heap/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/innobase/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/myisam/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/myisammrg/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/ndb/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/rocksdb/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/storage/tokudb/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/HandlerSocket-Plugin-for-MySQL/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/audit_log/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/audit_null/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/auth/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/connection_control/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/daemon_example/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/fulltext/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/innodb_memcached/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/password_validation/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/percona-pam-for-mysql/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/percona-udf/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/query_response_time/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/scalability_metrics/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/semisync/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/tokudb-backup-plugin/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/plugin/udf_services/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/include/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/dbug/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/strings/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/vio/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/regex/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/mysys/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/mysys_ssl/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/libmysql/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/unittest/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/unittest/examples/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/unittest/mytap/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/unittest/mytap/t/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/extra/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/client/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql/share/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/libservices/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/man/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/tests/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/libmysqld/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/libmysqld/examples/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/scripts/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/mysql-test/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/mysql-test/lib/My/SafeProcess/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/support-files/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/packaging/rpm-oel/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/packaging/rpm-fedora/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/packaging/rpm-sles/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/packaging/rpm-docker/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/packaging/deb-in/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/packaging/WiX/cmake_install.cmake")
  include("/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/packaging/solaris/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
