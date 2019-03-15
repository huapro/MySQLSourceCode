# Install script for directory: /Users/yanglihua/Downloads/percona-server-5.6.43/man

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xManPagesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man1" TYPE FILE FILES
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/comp_err.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/innochecksum.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/msql2mysql.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/my_print_defaults.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/myisam_ftdump.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/myisamchk.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/myisamlog.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/myisampack.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql.server.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_config.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_config_editor.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_convert_table_format.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_find_rows.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_fix_extensions.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_install_db.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_plugin.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_secure_installation.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_setpermission.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_tzinfo_to_sql.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_upgrade.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_waitpid.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysql_zap.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlaccess.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqladmin.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlbinlog.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlbug.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlcheck.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqld_multi.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqld_safe.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqldump.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqldumpslow.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlhotcopy.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlimport.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlman.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlshow.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqlslap.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/perror.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/replace.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/resolve_stack_dump.1"
    "/Users/yanglihua/Downloads/percona-server-5.6.43/man/resolveip.1"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xManPagesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man8" TYPE FILE FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/man/mysqld.8")
endif()

