# Install script for directory: /Users/yanglihua/Downloads/percona-server-5.6.43/sql-bench

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench/Data" TYPE DIRECTORY FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/sql-bench/Data/ATIS")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench/Data" TYPE DIRECTORY FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/sql-bench/Data/Wisconsin")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE DIRECTORY FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/sql-bench/limits")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE FILE FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/README")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/bench-count-distinct")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/bench-init.pl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/compare-results")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/copy-db")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/crash-me")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/graph-compare-results")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/innotest1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/innotest1a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/innotest1b")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/innotest2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/innotest2a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/innotest2b")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/run-all-tests")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/server-cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-ATIS")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-alter-table")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-big-tables")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-connect")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-create")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-insert")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-select")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-transactions")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xSqlBenchx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sql-bench" TYPE PROGRAM FILES "/Users/yanglihua/Downloads/percona-server-5.6.43/build2019/sql-bench/test-wisconsin")
endif()

