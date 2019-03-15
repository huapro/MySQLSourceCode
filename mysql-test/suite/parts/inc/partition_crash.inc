# Include file to decrease test code duplication

--eval $create_statement
--eval $insert_statement
--echo # State before crash
--source include/table_files_replace_pattern.inc
--list_files $DATADIR/test
SHOW CREATE TABLE t1;
--sorted_result
SELECT * FROM t1;
--exec echo "wait" > $MYSQLTEST_VARDIR/tmp/mysqld.1.expect
--disable_reconnect
# CR_SERVER_LOST
--error 2013
--eval $crash_statement
--echo # State after crash (before recovery)
--source include/table_files_replace_pattern.inc
--list_files $DATADIR/test
--exec echo "restart" > $MYSQLTEST_VARDIR/tmp/mysqld.1.expect
--enable_reconnect
let $WAIT_COUNT=6000;
--source include/wait_time_until_connected_again.inc
--echo # State after crash recovery
--source include/table_files_replace_pattern.inc
--list_files $DATADIR/test
SHOW CREATE TABLE t1;
--sorted_result
SELECT * FROM t1;
DROP TABLE t1;