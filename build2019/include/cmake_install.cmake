# Install script for directory: /Users/yanglihua/Downloads/percona-server-5.6.43/include

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql_com.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql_time.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_list.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_alloc.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/typelib.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql/plugin.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql/plugin_audit.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql/plugin_ftparser.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql/plugin_validate_password.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_dbug.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/m_string.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_sys.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_xml.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql_embed.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_pthread.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/decimal.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/errmsg.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_global.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_net.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_getopt.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/sslopt-longopts.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_dir.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/sslopt-vars.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/sslopt-case.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/sql_common.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/keycache.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/m_ctype.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_attribute.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_compiler.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql_com_server.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/my_byteorder.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/byte_order_generic.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/byte_order_generic_x86.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/byte_order_generic_x86_64.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/little_endian.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/include/big_endian.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/include/mysql_version.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/include/my_config.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/include/mysqld_ername.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/include/mysqld_error.h"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/include/sql_state.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mysql" TYPE DIRECTORY FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/include/mysql/" REGEX "/[^/]*\\.h$" REGEX "/psi\\_abi[^/]*$" EXCLUDE)
endif()

