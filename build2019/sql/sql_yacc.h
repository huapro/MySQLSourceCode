/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_MYSQL_MNT_WORKSPACE_PERCONA_SERVER_5_6_SOURCE_TARBALLS_NEW_TEST_PERCONA_SERVER_SQL_SQL_YACC_H_INCLUDED
# define YY_MYSQL_MNT_WORKSPACE_PERCONA_SERVER_5_6_SOURCE_TARBALLS_NEW_TEST_PERCONA_SERVER_SQL_SQL_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int MYSQLdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_SYM = 258,
    ACCESSIBLE_SYM = 259,
    ACTION = 260,
    ADD = 261,
    ADDDATE_SYM = 262,
    AFTER_SYM = 263,
    AGAINST = 264,
    AGGREGATE_SYM = 265,
    ALGORITHM_SYM = 266,
    ALL = 267,
    ALTER = 268,
    ANALYSE_SYM = 269,
    ANALYZE_SYM = 270,
    AND_AND_SYM = 271,
    AND_SYM = 272,
    ANY_SYM = 273,
    ARCHIVED_SYM = 274,
    AS = 275,
    ASC = 276,
    ASCII_SYM = 277,
    ASENSITIVE_SYM = 278,
    AT_SYM = 279,
    AUTOEXTEND_SIZE_SYM = 280,
    AUTO_INC = 281,
    AVG_ROW_LENGTH = 282,
    AVG_SYM = 283,
    BACKUP_SYM = 284,
    BEFORE_SYM = 285,
    BEGIN_SYM = 286,
    BETWEEN_SYM = 287,
    BIGINT = 288,
    BINARY = 289,
    BINLOG_SYM = 290,
    BIN_NUM = 291,
    BIT_AND = 292,
    BIT_OR = 293,
    BIT_SYM = 294,
    BIT_XOR = 295,
    BLOB_SYM = 296,
    BLOCK_SYM = 297,
    BOOLEAN_SYM = 298,
    BOOL_SYM = 299,
    BOTH = 300,
    BTREE_SYM = 301,
    BY = 302,
    BYTE_SYM = 303,
    CACHE_SYM = 304,
    CALL_SYM = 305,
    CASCADE = 306,
    CASCADED = 307,
    CASE_SYM = 308,
    CAST_SYM = 309,
    CATALOG_NAME_SYM = 310,
    CHAIN_SYM = 311,
    CHANGE = 312,
    CHANGED = 313,
    CHANGED_PAGE_BITMAPS_SYM = 314,
    CHARSET = 315,
    CHAR_SYM = 316,
    CHECKSUM_SYM = 317,
    CHECK_SYM = 318,
    CIPHER_SYM = 319,
    CLASS_ORIGIN_SYM = 320,
    CLIENT_SYM = 321,
    CLIENT_STATS_SYM = 322,
    CLOSE_SYM = 323,
    CLUSTERING_SYM = 324,
    COALESCE = 325,
    CODE_SYM = 326,
    COLLATE_SYM = 327,
    COLLATION_SYM = 328,
    COLUMNS = 329,
    COLUMN_SYM = 330,
    COLUMN_FORMAT_SYM = 331,
    COLUMN_NAME_SYM = 332,
    COMMENT_SYM = 333,
    COMMITTED_SYM = 334,
    COMMIT_SYM = 335,
    COMPACT_SYM = 336,
    COMPLETION_SYM = 337,
    COMPRESSED_SYM = 338,
    COMPRESSION_DICTIONARY_SYM = 339,
    CONCURRENT = 340,
    CONDITION_SYM = 341,
    CONNECTION_SYM = 342,
    CONSISTENT_SYM = 343,
    CONSTRAINT = 344,
    CONSTRAINT_CATALOG_SYM = 345,
    CONSTRAINT_NAME_SYM = 346,
    CONSTRAINT_SCHEMA_SYM = 347,
    CONTAINS_SYM = 348,
    CONTEXT_SYM = 349,
    CONTINUE_SYM = 350,
    CONVERT_SYM = 351,
    COUNT_SYM = 352,
    CPU_SYM = 353,
    CREATE = 354,
    CROSS = 355,
    CUBE_SYM = 356,
    CURDATE = 357,
    CURRENT_SYM = 358,
    CURRENT_USER = 359,
    CURSOR_SYM = 360,
    CURSOR_NAME_SYM = 361,
    CURTIME = 362,
    DATABASE = 363,
    DATABASES = 364,
    DATAFILE_SYM = 365,
    DATA_SYM = 366,
    DATETIME = 367,
    DATE_ADD_INTERVAL = 368,
    DATE_SUB_INTERVAL = 369,
    DATE_SYM = 370,
    DAY_HOUR_SYM = 371,
    DAY_MICROSECOND_SYM = 372,
    DAY_MINUTE_SYM = 373,
    DAY_SECOND_SYM = 374,
    DAY_SYM = 375,
    DEALLOCATE_SYM = 376,
    DECIMAL_NUM = 377,
    DECIMAL_SYM = 378,
    DECLARE_SYM = 379,
    DEFAULT = 380,
    DEFAULT_AUTH_SYM = 381,
    DEFINER_SYM = 382,
    DELAYED_SYM = 383,
    DELAY_KEY_WRITE_SYM = 384,
    DELETE_SYM = 385,
    DESC = 386,
    DESCRIBE = 387,
    DES_KEY_FILE = 388,
    DETERMINISTIC_SYM = 389,
    DIAGNOSTICS_SYM = 390,
    DIRECTORY_SYM = 391,
    DISABLE_SYM = 392,
    DISCARD = 393,
    DISK_SYM = 394,
    DISTINCT = 395,
    DIV_SYM = 396,
    DOUBLE_SYM = 397,
    DO_SYM = 398,
    DROP = 399,
    DUAL_SYM = 400,
    DUMPFILE = 401,
    DUPLICATE_SYM = 402,
    DYNAMIC_SYM = 403,
    EACH_SYM = 404,
    ELSE = 405,
    ELSEIF_SYM = 406,
    ENABLE_SYM = 407,
    ENCLOSED = 408,
    END = 409,
    ENDS_SYM = 410,
    END_OF_INPUT = 411,
    ENGINES_SYM = 412,
    ENGINE_SYM = 413,
    ENUM = 414,
    EQ = 415,
    EQUAL_SYM = 416,
    ERROR_SYM = 417,
    ERRORS = 418,
    ESCAPED = 419,
    ESCAPE_SYM = 420,
    EVENTS_SYM = 421,
    EVENT_SYM = 422,
    EVERY_SYM = 423,
    EXCHANGE_SYM = 424,
    EXECUTE_SYM = 425,
    EXISTS = 426,
    EXIT_SYM = 427,
    EXPANSION_SYM = 428,
    EXPIRE_SYM = 429,
    EXPORT_SYM = 430,
    EXTENDED_SYM = 431,
    EXTENT_SIZE_SYM = 432,
    EXTRACT_SYM = 433,
    FALSE_SYM = 434,
    FAST_SYM = 435,
    FAULTS_SYM = 436,
    FETCH_SYM = 437,
    FILE_SYM = 438,
    FIRST_SYM = 439,
    FIXED_SYM = 440,
    FLOAT_NUM = 441,
    FLOAT_SYM = 442,
    FLUSH_SYM = 443,
    FORCE_SYM = 444,
    FOREIGN = 445,
    FOR_SYM = 446,
    FORMAT_SYM = 447,
    FOUND_SYM = 448,
    FROM = 449,
    FULL = 450,
    FULLTEXT_SYM = 451,
    FUNCTION_SYM = 452,
    GE = 453,
    GENERAL = 454,
    GEOMETRYCOLLECTION = 455,
    GEOMETRY_SYM = 456,
    GET_FORMAT = 457,
    GET_SYM = 458,
    GLOBAL_SYM = 459,
    GRANT = 460,
    GRANTS = 461,
    GROUP_SYM = 462,
    GROUP_CONCAT_SYM = 463,
    GT_SYM = 464,
    HANDLER_SYM = 465,
    HASH_SYM = 466,
    HAVING = 467,
    HELP_SYM = 468,
    HEX_NUM = 469,
    HIGH_PRIORITY = 470,
    HOST_SYM = 471,
    HOSTS_SYM = 472,
    HOUR_MICROSECOND_SYM = 473,
    HOUR_MINUTE_SYM = 474,
    HOUR_SECOND_SYM = 475,
    HOUR_SYM = 476,
    IDENT = 477,
    IDENTIFIED_SYM = 478,
    IDENT_QUOTED = 479,
    IF = 480,
    IGNORE_SYM = 481,
    IGNORE_SERVER_IDS_SYM = 482,
    IMPORT = 483,
    INDEXES = 484,
    INDEX_SYM = 485,
    INDEX_STATS_SYM = 486,
    INFILE = 487,
    INITIAL_SIZE_SYM = 488,
    INNER_SYM = 489,
    INOUT_SYM = 490,
    INSENSITIVE_SYM = 491,
    INSERT = 492,
    INSERT_METHOD = 493,
    INSTALL_SYM = 494,
    INTERVAL_SYM = 495,
    INTO = 496,
    INT_SYM = 497,
    INVOKER_SYM = 498,
    IN_SYM = 499,
    IO_AFTER_GTIDS = 500,
    IO_BEFORE_GTIDS = 501,
    IO_SYM = 502,
    IPC_SYM = 503,
    IS = 504,
    ISOLATION = 505,
    ISSUER_SYM = 506,
    ITERATE_SYM = 507,
    JOIN_SYM = 508,
    KEYS = 509,
    KEY_BLOCK_SIZE = 510,
    KEY_SYM = 511,
    KILL_SYM = 512,
    LANGUAGE_SYM = 513,
    LAST_SYM = 514,
    LE = 515,
    LEADING = 516,
    LEAVES = 517,
    LEAVE_SYM = 518,
    LEFT = 519,
    LESS_SYM = 520,
    LEVEL_SYM = 521,
    LEX_HOSTNAME = 522,
    LIKE = 523,
    LIMIT = 524,
    LINEAR_SYM = 525,
    LINES = 526,
    LINESTRING = 527,
    LIST_SYM = 528,
    LOAD = 529,
    LOCAL_SYM = 530,
    LOCATOR_SYM = 531,
    LOCKS_SYM = 532,
    LOCK_SYM = 533,
    LOGFILE_SYM = 534,
    LOGS_SYM = 535,
    LONGBLOB = 536,
    LONGTEXT = 537,
    LONG_NUM = 538,
    LONG_SYM = 539,
    LOOP_SYM = 540,
    LOW_PRIORITY = 541,
    LT = 542,
    MASTER_AUTO_POSITION_SYM = 543,
    MASTER_BIND_SYM = 544,
    MASTER_CONNECT_RETRY_SYM = 545,
    MASTER_DELAY_SYM = 546,
    MASTER_HOST_SYM = 547,
    MASTER_LOG_FILE_SYM = 548,
    MASTER_LOG_POS_SYM = 549,
    MASTER_PASSWORD_SYM = 550,
    MASTER_PORT_SYM = 551,
    MASTER_RETRY_COUNT_SYM = 552,
    MASTER_SERVER_ID_SYM = 553,
    MASTER_SSL_CAPATH_SYM = 554,
    MASTER_SSL_CA_SYM = 555,
    MASTER_SSL_CERT_SYM = 556,
    MASTER_SSL_CIPHER_SYM = 557,
    MASTER_SSL_CRL_SYM = 558,
    MASTER_SSL_CRLPATH_SYM = 559,
    MASTER_SSL_KEY_SYM = 560,
    MASTER_SSL_SYM = 561,
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 562,
    MASTER_SYM = 563,
    MASTER_USER_SYM = 564,
    MASTER_HEARTBEAT_PERIOD_SYM = 565,
    MATCH = 566,
    MAX_CONNECTIONS_PER_HOUR = 567,
    MAX_QUERIES_PER_HOUR = 568,
    MAX_ROWS = 569,
    MAX_SIZE_SYM = 570,
    MAX_SYM = 571,
    MAX_UPDATES_PER_HOUR = 572,
    MAX_USER_CONNECTIONS_SYM = 573,
    MAX_VALUE_SYM = 574,
    MEDIUMBLOB = 575,
    MEDIUMINT = 576,
    MEDIUMTEXT = 577,
    MEDIUM_SYM = 578,
    MEMORY_SYM = 579,
    MERGE_SYM = 580,
    MESSAGE_TEXT_SYM = 581,
    MICROSECOND_SYM = 582,
    MIGRATE_SYM = 583,
    MINUTE_MICROSECOND_SYM = 584,
    MINUTE_SECOND_SYM = 585,
    MINUTE_SYM = 586,
    MIN_ROWS = 587,
    MIN_SYM = 588,
    MODE_SYM = 589,
    MODIFIES_SYM = 590,
    MODIFY_SYM = 591,
    MOD_SYM = 592,
    MONTH_SYM = 593,
    MULTILINESTRING = 594,
    MULTIPOINT = 595,
    MULTIPOLYGON = 596,
    MUTEX_SYM = 597,
    MYSQL_ERRNO_SYM = 598,
    NAMES_SYM = 599,
    NAME_SYM = 600,
    NATIONAL_SYM = 601,
    NATURAL = 602,
    NCHAR_STRING = 603,
    NCHAR_SYM = 604,
    NDBCLUSTER_SYM = 605,
    NE = 606,
    NEG = 607,
    NEW_SYM = 608,
    NEXT_SYM = 609,
    NODEGROUP_SYM = 610,
    NONE_SYM = 611,
    NOT2_SYM = 612,
    NOT_SYM = 613,
    NOW_SYM = 614,
    NO_SYM = 615,
    NO_WAIT_SYM = 616,
    NO_WRITE_TO_BINLOG = 617,
    NULL_SYM = 618,
    NUM = 619,
    NUMBER_SYM = 620,
    NUMERIC_SYM = 621,
    NVARCHAR_SYM = 622,
    OFFSET_SYM = 623,
    OLD_PASSWORD = 624,
    ON = 625,
    ONE_SYM = 626,
    ONLY_SYM = 627,
    OPEN_SYM = 628,
    OPTIMIZE = 629,
    OPTIONS_SYM = 630,
    OPTION = 631,
    OPTIONALLY = 632,
    OR2_SYM = 633,
    ORDER_SYM = 634,
    OR_OR_SYM = 635,
    OR_SYM = 636,
    OUTER = 637,
    OUTFILE = 638,
    OUT_SYM = 639,
    OWNER_SYM = 640,
    PACK_KEYS_SYM = 641,
    PAGE_SYM = 642,
    PARAM_MARKER = 643,
    PARSER_SYM = 644,
    PARTIAL = 645,
    PARTITION_SYM = 646,
    PARTITIONS_SYM = 647,
    PARTITIONING_SYM = 648,
    PASSWORD = 649,
    PHASE_SYM = 650,
    PLUGIN_DIR_SYM = 651,
    PLUGIN_SYM = 652,
    PLUGINS_SYM = 653,
    POINT_SYM = 654,
    POLYGON = 655,
    PORT_SYM = 656,
    POSITION_SYM = 657,
    PRECISION = 658,
    PREPARE_SYM = 659,
    PRESERVE_SYM = 660,
    PREV_SYM = 661,
    PRIMARY_SYM = 662,
    PRIVILEGES = 663,
    PROCEDURE_SYM = 664,
    PROCESS = 665,
    PROCESSLIST_SYM = 666,
    PROFILE_SYM = 667,
    PROFILES_SYM = 668,
    PROXY_SYM = 669,
    PURGE = 670,
    QUARTER_SYM = 671,
    QUERY_SYM = 672,
    QUICK = 673,
    RANGE_SYM = 674,
    READS_SYM = 675,
    READ_ONLY_SYM = 676,
    READ_SYM = 677,
    READ_WRITE_SYM = 678,
    REAL = 679,
    REBUILD_SYM = 680,
    RECOVER_SYM = 681,
    REDOFILE_SYM = 682,
    REDO_BUFFER_SIZE_SYM = 683,
    REDUNDANT_SYM = 684,
    REFERENCES = 685,
    REGEXP = 686,
    RELAY = 687,
    RELAYLOG_SYM = 688,
    RELAY_LOG_FILE_SYM = 689,
    RELAY_LOG_POS_SYM = 690,
    RELAY_THREAD = 691,
    RELEASE_SYM = 692,
    RELOAD = 693,
    REMOVE_SYM = 694,
    RENAME = 695,
    REORGANIZE_SYM = 696,
    REPAIR = 697,
    REPEATABLE_SYM = 698,
    REPEAT_SYM = 699,
    REPLACE = 700,
    REPLICATION = 701,
    REQUIRE_SYM = 702,
    RESET_SYM = 703,
    RESIGNAL_SYM = 704,
    RESOURCES = 705,
    RESTORE_SYM = 706,
    RESTRICT = 707,
    RESUME_SYM = 708,
    RETURNED_SQLSTATE_SYM = 709,
    RETURNS_SYM = 710,
    RETURN_SYM = 711,
    REVERSE_SYM = 712,
    REVOKE = 713,
    RIGHT = 714,
    ROLLBACK_SYM = 715,
    ROLLUP_SYM = 716,
    ROUTINE_SYM = 717,
    ROWS_SYM = 718,
    ROW_FORMAT_SYM = 719,
    ROW_SYM = 720,
    ROW_COUNT_SYM = 721,
    RTREE_SYM = 722,
    SAVEPOINT_SYM = 723,
    SCHEDULE_SYM = 724,
    SCHEMA_NAME_SYM = 725,
    SECOND_MICROSECOND_SYM = 726,
    SECOND_SYM = 727,
    SECURITY_SYM = 728,
    SELECT_SYM = 729,
    SENSITIVE_SYM = 730,
    SEPARATOR_SYM = 731,
    SERIALIZABLE_SYM = 732,
    SERIAL_SYM = 733,
    SESSION_SYM = 734,
    SERVER_SYM = 735,
    SERVER_OPTIONS = 736,
    SET = 737,
    SET_VAR = 738,
    SHARE_SYM = 739,
    SHIFT_LEFT = 740,
    SHIFT_RIGHT = 741,
    SHOW = 742,
    SHUTDOWN = 743,
    SIGNAL_SYM = 744,
    SIGNED_SYM = 745,
    SIMPLE_SYM = 746,
    SLAVE = 747,
    SLOW = 748,
    SMALLINT = 749,
    SNAPSHOT_SYM = 750,
    SOCKET_SYM = 751,
    SONAME_SYM = 752,
    SOUNDS_SYM = 753,
    SOURCE_SYM = 754,
    SPATIAL_SYM = 755,
    SPECIFIC_SYM = 756,
    SQLEXCEPTION_SYM = 757,
    SQLSTATE_SYM = 758,
    SQLWARNING_SYM = 759,
    SQL_AFTER_GTIDS = 760,
    SQL_AFTER_MTS_GAPS = 761,
    SQL_BEFORE_GTIDS = 762,
    SQL_BIG_RESULT = 763,
    SQL_BUFFER_RESULT = 764,
    SQL_CACHE_SYM = 765,
    SQL_CALC_FOUND_ROWS = 766,
    SQL_NO_CACHE_SYM = 767,
    SQL_SMALL_RESULT = 768,
    SQL_SYM = 769,
    SQL_THREAD = 770,
    SSL_SYM = 771,
    STARTING = 772,
    STARTS_SYM = 773,
    START_SYM = 774,
    STATEMENT_SYM = 775,
    STATS_AUTO_RECALC_SYM = 776,
    STATS_PERSISTENT_SYM = 777,
    STATS_SAMPLE_PAGES_SYM = 778,
    STATUS_SYM = 779,
    NOLOCK_SYM = 780,
    NONBLOCKING_SYM = 781,
    STDDEV_SAMP_SYM = 782,
    STD_SYM = 783,
    STOP_SYM = 784,
    STORAGE_SYM = 785,
    STRAIGHT_JOIN = 786,
    STRING_SYM = 787,
    SUBCLASS_ORIGIN_SYM = 788,
    SUBDATE_SYM = 789,
    SUBJECT_SYM = 790,
    SUBPARTITIONS_SYM = 791,
    SUBPARTITION_SYM = 792,
    SUBSTRING = 793,
    SUM_SYM = 794,
    SUPER_SYM = 795,
    SUSPEND_SYM = 796,
    SWAPS_SYM = 797,
    SWITCHES_SYM = 798,
    SYSDATE = 799,
    TABLES = 800,
    TABLESPACE = 801,
    TABLE_REF_PRIORITY = 802,
    TABLE_SYM = 803,
    TABLE_STATS_SYM = 804,
    TABLE_CHECKSUM_SYM = 805,
    TABLE_NAME_SYM = 806,
    TEMPORARY = 807,
    TEMPTABLE_SYM = 808,
    TERMINATED = 809,
    TEXT_STRING = 810,
    TEXT_SYM = 811,
    THAN_SYM = 812,
    THEN_SYM = 813,
    THREAD_STATS_SYM = 814,
    TIMESTAMP = 815,
    TIMESTAMP_ADD = 816,
    TIMESTAMP_DIFF = 817,
    TIME_SYM = 818,
    TINYBLOB = 819,
    TINYINT = 820,
    TINYTEXT = 821,
    TO_SYM = 822,
    TOKU_UNCOMPRESSED_SYM = 823,
    TOKU_ZLIB_SYM = 824,
    TOKU_SNAPPY_SYM = 825,
    TOKU_QUICKLZ_SYM = 826,
    TOKU_LZMA_SYM = 827,
    TOKU_FAST_SYM = 828,
    TOKU_SMALL_SYM = 829,
    TOKU_DEFAULT_SYM = 830,
    TRAILING = 831,
    TRANSACTION_SYM = 832,
    TRIGGERS_SYM = 833,
    TRIGGER_SYM = 834,
    TRIM = 835,
    TRUE_SYM = 836,
    TRUNCATE_SYM = 837,
    TYPES_SYM = 838,
    TYPE_SYM = 839,
    UDF_RETURNS_SYM = 840,
    ULONGLONG_NUM = 841,
    UNCOMMITTED_SYM = 842,
    UNDEFINED_SYM = 843,
    UNDERSCORE_CHARSET = 844,
    UNDOFILE_SYM = 845,
    UNDO_BUFFER_SIZE_SYM = 846,
    UNDO_SYM = 847,
    UNICODE_SYM = 848,
    UNINSTALL_SYM = 849,
    UNION_SYM = 850,
    UNIQUE_SYM = 851,
    UNKNOWN_SYM = 852,
    UNLOCK_SYM = 853,
    UNSIGNED = 854,
    UNTIL_SYM = 855,
    UPDATE_SYM = 856,
    UPGRADE_SYM = 857,
    USAGE = 858,
    USER = 859,
    USER_STATS_SYM = 860,
    USE_FRM = 861,
    USE_SYM = 862,
    USING = 863,
    UTC_DATE_SYM = 864,
    UTC_TIMESTAMP_SYM = 865,
    UTC_TIME_SYM = 866,
    VALUES = 867,
    VALUE_SYM = 868,
    VARBINARY = 869,
    VARCHAR = 870,
    VARIABLES = 871,
    VARIANCE_SYM = 872,
    VARYING = 873,
    VAR_SAMP_SYM = 874,
    VIEW_SYM = 875,
    WAIT_SYM = 876,
    WARNINGS = 877,
    WEEK_SYM = 878,
    WEIGHT_STRING_SYM = 879,
    WHEN_SYM = 880,
    WHERE = 881,
    WHILE_SYM = 882,
    WITH = 883,
    WITH_CUBE_SYM = 884,
    WITH_ROLLUP_SYM = 885,
    WORK_SYM = 886,
    WRAPPER_SYM = 887,
    WRITE_SYM = 888,
    X509_SYM = 889,
    XA_SYM = 890,
    XML_SYM = 891,
    XOR = 892,
    YEAR_MONTH_SYM = 893,
    YEAR_SYM = 894,
    ZEROFILL = 895
  };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ANALYSE_SYM 269
#define ANALYZE_SYM 270
#define AND_AND_SYM 271
#define AND_SYM 272
#define ANY_SYM 273
#define ARCHIVED_SYM 274
#define AS 275
#define ASC 276
#define ASCII_SYM 277
#define ASENSITIVE_SYM 278
#define AT_SYM 279
#define AUTOEXTEND_SIZE_SYM 280
#define AUTO_INC 281
#define AVG_ROW_LENGTH 282
#define AVG_SYM 283
#define BACKUP_SYM 284
#define BEFORE_SYM 285
#define BEGIN_SYM 286
#define BETWEEN_SYM 287
#define BIGINT 288
#define BINARY 289
#define BINLOG_SYM 290
#define BIN_NUM 291
#define BIT_AND 292
#define BIT_OR 293
#define BIT_SYM 294
#define BIT_XOR 295
#define BLOB_SYM 296
#define BLOCK_SYM 297
#define BOOLEAN_SYM 298
#define BOOL_SYM 299
#define BOTH 300
#define BTREE_SYM 301
#define BY 302
#define BYTE_SYM 303
#define CACHE_SYM 304
#define CALL_SYM 305
#define CASCADE 306
#define CASCADED 307
#define CASE_SYM 308
#define CAST_SYM 309
#define CATALOG_NAME_SYM 310
#define CHAIN_SYM 311
#define CHANGE 312
#define CHANGED 313
#define CHANGED_PAGE_BITMAPS_SYM 314
#define CHARSET 315
#define CHAR_SYM 316
#define CHECKSUM_SYM 317
#define CHECK_SYM 318
#define CIPHER_SYM 319
#define CLASS_ORIGIN_SYM 320
#define CLIENT_SYM 321
#define CLIENT_STATS_SYM 322
#define CLOSE_SYM 323
#define CLUSTERING_SYM 324
#define COALESCE 325
#define CODE_SYM 326
#define COLLATE_SYM 327
#define COLLATION_SYM 328
#define COLUMNS 329
#define COLUMN_SYM 330
#define COLUMN_FORMAT_SYM 331
#define COLUMN_NAME_SYM 332
#define COMMENT_SYM 333
#define COMMITTED_SYM 334
#define COMMIT_SYM 335
#define COMPACT_SYM 336
#define COMPLETION_SYM 337
#define COMPRESSED_SYM 338
#define COMPRESSION_DICTIONARY_SYM 339
#define CONCURRENT 340
#define CONDITION_SYM 341
#define CONNECTION_SYM 342
#define CONSISTENT_SYM 343
#define CONSTRAINT 344
#define CONSTRAINT_CATALOG_SYM 345
#define CONSTRAINT_NAME_SYM 346
#define CONSTRAINT_SCHEMA_SYM 347
#define CONTAINS_SYM 348
#define CONTEXT_SYM 349
#define CONTINUE_SYM 350
#define CONVERT_SYM 351
#define COUNT_SYM 352
#define CPU_SYM 353
#define CREATE 354
#define CROSS 355
#define CUBE_SYM 356
#define CURDATE 357
#define CURRENT_SYM 358
#define CURRENT_USER 359
#define CURSOR_SYM 360
#define CURSOR_NAME_SYM 361
#define CURTIME 362
#define DATABASE 363
#define DATABASES 364
#define DATAFILE_SYM 365
#define DATA_SYM 366
#define DATETIME 367
#define DATE_ADD_INTERVAL 368
#define DATE_SUB_INTERVAL 369
#define DATE_SYM 370
#define DAY_HOUR_SYM 371
#define DAY_MICROSECOND_SYM 372
#define DAY_MINUTE_SYM 373
#define DAY_SECOND_SYM 374
#define DAY_SYM 375
#define DEALLOCATE_SYM 376
#define DECIMAL_NUM 377
#define DECIMAL_SYM 378
#define DECLARE_SYM 379
#define DEFAULT 380
#define DEFAULT_AUTH_SYM 381
#define DEFINER_SYM 382
#define DELAYED_SYM 383
#define DELAY_KEY_WRITE_SYM 384
#define DELETE_SYM 385
#define DESC 386
#define DESCRIBE 387
#define DES_KEY_FILE 388
#define DETERMINISTIC_SYM 389
#define DIAGNOSTICS_SYM 390
#define DIRECTORY_SYM 391
#define DISABLE_SYM 392
#define DISCARD 393
#define DISK_SYM 394
#define DISTINCT 395
#define DIV_SYM 396
#define DOUBLE_SYM 397
#define DO_SYM 398
#define DROP 399
#define DUAL_SYM 400
#define DUMPFILE 401
#define DUPLICATE_SYM 402
#define DYNAMIC_SYM 403
#define EACH_SYM 404
#define ELSE 405
#define ELSEIF_SYM 406
#define ENABLE_SYM 407
#define ENCLOSED 408
#define END 409
#define ENDS_SYM 410
#define END_OF_INPUT 411
#define ENGINES_SYM 412
#define ENGINE_SYM 413
#define ENUM 414
#define EQ 415
#define EQUAL_SYM 416
#define ERROR_SYM 417
#define ERRORS 418
#define ESCAPED 419
#define ESCAPE_SYM 420
#define EVENTS_SYM 421
#define EVENT_SYM 422
#define EVERY_SYM 423
#define EXCHANGE_SYM 424
#define EXECUTE_SYM 425
#define EXISTS 426
#define EXIT_SYM 427
#define EXPANSION_SYM 428
#define EXPIRE_SYM 429
#define EXPORT_SYM 430
#define EXTENDED_SYM 431
#define EXTENT_SIZE_SYM 432
#define EXTRACT_SYM 433
#define FALSE_SYM 434
#define FAST_SYM 435
#define FAULTS_SYM 436
#define FETCH_SYM 437
#define FILE_SYM 438
#define FIRST_SYM 439
#define FIXED_SYM 440
#define FLOAT_NUM 441
#define FLOAT_SYM 442
#define FLUSH_SYM 443
#define FORCE_SYM 444
#define FOREIGN 445
#define FOR_SYM 446
#define FORMAT_SYM 447
#define FOUND_SYM 448
#define FROM 449
#define FULL 450
#define FULLTEXT_SYM 451
#define FUNCTION_SYM 452
#define GE 453
#define GENERAL 454
#define GEOMETRYCOLLECTION 455
#define GEOMETRY_SYM 456
#define GET_FORMAT 457
#define GET_SYM 458
#define GLOBAL_SYM 459
#define GRANT 460
#define GRANTS 461
#define GROUP_SYM 462
#define GROUP_CONCAT_SYM 463
#define GT_SYM 464
#define HANDLER_SYM 465
#define HASH_SYM 466
#define HAVING 467
#define HELP_SYM 468
#define HEX_NUM 469
#define HIGH_PRIORITY 470
#define HOST_SYM 471
#define HOSTS_SYM 472
#define HOUR_MICROSECOND_SYM 473
#define HOUR_MINUTE_SYM 474
#define HOUR_SECOND_SYM 475
#define HOUR_SYM 476
#define IDENT 477
#define IDENTIFIED_SYM 478
#define IDENT_QUOTED 479
#define IF 480
#define IGNORE_SYM 481
#define IGNORE_SERVER_IDS_SYM 482
#define IMPORT 483
#define INDEXES 484
#define INDEX_SYM 485
#define INDEX_STATS_SYM 486
#define INFILE 487
#define INITIAL_SIZE_SYM 488
#define INNER_SYM 489
#define INOUT_SYM 490
#define INSENSITIVE_SYM 491
#define INSERT 492
#define INSERT_METHOD 493
#define INSTALL_SYM 494
#define INTERVAL_SYM 495
#define INTO 496
#define INT_SYM 497
#define INVOKER_SYM 498
#define IN_SYM 499
#define IO_AFTER_GTIDS 500
#define IO_BEFORE_GTIDS 501
#define IO_SYM 502
#define IPC_SYM 503
#define IS 504
#define ISOLATION 505
#define ISSUER_SYM 506
#define ITERATE_SYM 507
#define JOIN_SYM 508
#define KEYS 509
#define KEY_BLOCK_SIZE 510
#define KEY_SYM 511
#define KILL_SYM 512
#define LANGUAGE_SYM 513
#define LAST_SYM 514
#define LE 515
#define LEADING 516
#define LEAVES 517
#define LEAVE_SYM 518
#define LEFT 519
#define LESS_SYM 520
#define LEVEL_SYM 521
#define LEX_HOSTNAME 522
#define LIKE 523
#define LIMIT 524
#define LINEAR_SYM 525
#define LINES 526
#define LINESTRING 527
#define LIST_SYM 528
#define LOAD 529
#define LOCAL_SYM 530
#define LOCATOR_SYM 531
#define LOCKS_SYM 532
#define LOCK_SYM 533
#define LOGFILE_SYM 534
#define LOGS_SYM 535
#define LONGBLOB 536
#define LONGTEXT 537
#define LONG_NUM 538
#define LONG_SYM 539
#define LOOP_SYM 540
#define LOW_PRIORITY 541
#define LT 542
#define MASTER_AUTO_POSITION_SYM 543
#define MASTER_BIND_SYM 544
#define MASTER_CONNECT_RETRY_SYM 545
#define MASTER_DELAY_SYM 546
#define MASTER_HOST_SYM 547
#define MASTER_LOG_FILE_SYM 548
#define MASTER_LOG_POS_SYM 549
#define MASTER_PASSWORD_SYM 550
#define MASTER_PORT_SYM 551
#define MASTER_RETRY_COUNT_SYM 552
#define MASTER_SERVER_ID_SYM 553
#define MASTER_SSL_CAPATH_SYM 554
#define MASTER_SSL_CA_SYM 555
#define MASTER_SSL_CERT_SYM 556
#define MASTER_SSL_CIPHER_SYM 557
#define MASTER_SSL_CRL_SYM 558
#define MASTER_SSL_CRLPATH_SYM 559
#define MASTER_SSL_KEY_SYM 560
#define MASTER_SSL_SYM 561
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 562
#define MASTER_SYM 563
#define MASTER_USER_SYM 564
#define MASTER_HEARTBEAT_PERIOD_SYM 565
#define MATCH 566
#define MAX_CONNECTIONS_PER_HOUR 567
#define MAX_QUERIES_PER_HOUR 568
#define MAX_ROWS 569
#define MAX_SIZE_SYM 570
#define MAX_SYM 571
#define MAX_UPDATES_PER_HOUR 572
#define MAX_USER_CONNECTIONS_SYM 573
#define MAX_VALUE_SYM 574
#define MEDIUMBLOB 575
#define MEDIUMINT 576
#define MEDIUMTEXT 577
#define MEDIUM_SYM 578
#define MEMORY_SYM 579
#define MERGE_SYM 580
#define MESSAGE_TEXT_SYM 581
#define MICROSECOND_SYM 582
#define MIGRATE_SYM 583
#define MINUTE_MICROSECOND_SYM 584
#define MINUTE_SECOND_SYM 585
#define MINUTE_SYM 586
#define MIN_ROWS 587
#define MIN_SYM 588
#define MODE_SYM 589
#define MODIFIES_SYM 590
#define MODIFY_SYM 591
#define MOD_SYM 592
#define MONTH_SYM 593
#define MULTILINESTRING 594
#define MULTIPOINT 595
#define MULTIPOLYGON 596
#define MUTEX_SYM 597
#define MYSQL_ERRNO_SYM 598
#define NAMES_SYM 599
#define NAME_SYM 600
#define NATIONAL_SYM 601
#define NATURAL 602
#define NCHAR_STRING 603
#define NCHAR_SYM 604
#define NDBCLUSTER_SYM 605
#define NE 606
#define NEG 607
#define NEW_SYM 608
#define NEXT_SYM 609
#define NODEGROUP_SYM 610
#define NONE_SYM 611
#define NOT2_SYM 612
#define NOT_SYM 613
#define NOW_SYM 614
#define NO_SYM 615
#define NO_WAIT_SYM 616
#define NO_WRITE_TO_BINLOG 617
#define NULL_SYM 618
#define NUM 619
#define NUMBER_SYM 620
#define NUMERIC_SYM 621
#define NVARCHAR_SYM 622
#define OFFSET_SYM 623
#define OLD_PASSWORD 624
#define ON 625
#define ONE_SYM 626
#define ONLY_SYM 627
#define OPEN_SYM 628
#define OPTIMIZE 629
#define OPTIONS_SYM 630
#define OPTION 631
#define OPTIONALLY 632
#define OR2_SYM 633
#define ORDER_SYM 634
#define OR_OR_SYM 635
#define OR_SYM 636
#define OUTER 637
#define OUTFILE 638
#define OUT_SYM 639
#define OWNER_SYM 640
#define PACK_KEYS_SYM 641
#define PAGE_SYM 642
#define PARAM_MARKER 643
#define PARSER_SYM 644
#define PARTIAL 645
#define PARTITION_SYM 646
#define PARTITIONS_SYM 647
#define PARTITIONING_SYM 648
#define PASSWORD 649
#define PHASE_SYM 650
#define PLUGIN_DIR_SYM 651
#define PLUGIN_SYM 652
#define PLUGINS_SYM 653
#define POINT_SYM 654
#define POLYGON 655
#define PORT_SYM 656
#define POSITION_SYM 657
#define PRECISION 658
#define PREPARE_SYM 659
#define PRESERVE_SYM 660
#define PREV_SYM 661
#define PRIMARY_SYM 662
#define PRIVILEGES 663
#define PROCEDURE_SYM 664
#define PROCESS 665
#define PROCESSLIST_SYM 666
#define PROFILE_SYM 667
#define PROFILES_SYM 668
#define PROXY_SYM 669
#define PURGE 670
#define QUARTER_SYM 671
#define QUERY_SYM 672
#define QUICK 673
#define RANGE_SYM 674
#define READS_SYM 675
#define READ_ONLY_SYM 676
#define READ_SYM 677
#define READ_WRITE_SYM 678
#define REAL 679
#define REBUILD_SYM 680
#define RECOVER_SYM 681
#define REDOFILE_SYM 682
#define REDO_BUFFER_SIZE_SYM 683
#define REDUNDANT_SYM 684
#define REFERENCES 685
#define REGEXP 686
#define RELAY 687
#define RELAYLOG_SYM 688
#define RELAY_LOG_FILE_SYM 689
#define RELAY_LOG_POS_SYM 690
#define RELAY_THREAD 691
#define RELEASE_SYM 692
#define RELOAD 693
#define REMOVE_SYM 694
#define RENAME 695
#define REORGANIZE_SYM 696
#define REPAIR 697
#define REPEATABLE_SYM 698
#define REPEAT_SYM 699
#define REPLACE 700
#define REPLICATION 701
#define REQUIRE_SYM 702
#define RESET_SYM 703
#define RESIGNAL_SYM 704
#define RESOURCES 705
#define RESTORE_SYM 706
#define RESTRICT 707
#define RESUME_SYM 708
#define RETURNED_SQLSTATE_SYM 709
#define RETURNS_SYM 710
#define RETURN_SYM 711
#define REVERSE_SYM 712
#define REVOKE 713
#define RIGHT 714
#define ROLLBACK_SYM 715
#define ROLLUP_SYM 716
#define ROUTINE_SYM 717
#define ROWS_SYM 718
#define ROW_FORMAT_SYM 719
#define ROW_SYM 720
#define ROW_COUNT_SYM 721
#define RTREE_SYM 722
#define SAVEPOINT_SYM 723
#define SCHEDULE_SYM 724
#define SCHEMA_NAME_SYM 725
#define SECOND_MICROSECOND_SYM 726
#define SECOND_SYM 727
#define SECURITY_SYM 728
#define SELECT_SYM 729
#define SENSITIVE_SYM 730
#define SEPARATOR_SYM 731
#define SERIALIZABLE_SYM 732
#define SERIAL_SYM 733
#define SESSION_SYM 734
#define SERVER_SYM 735
#define SERVER_OPTIONS 736
#define SET 737
#define SET_VAR 738
#define SHARE_SYM 739
#define SHIFT_LEFT 740
#define SHIFT_RIGHT 741
#define SHOW 742
#define SHUTDOWN 743
#define SIGNAL_SYM 744
#define SIGNED_SYM 745
#define SIMPLE_SYM 746
#define SLAVE 747
#define SLOW 748
#define SMALLINT 749
#define SNAPSHOT_SYM 750
#define SOCKET_SYM 751
#define SONAME_SYM 752
#define SOUNDS_SYM 753
#define SOURCE_SYM 754
#define SPATIAL_SYM 755
#define SPECIFIC_SYM 756
#define SQLEXCEPTION_SYM 757
#define SQLSTATE_SYM 758
#define SQLWARNING_SYM 759
#define SQL_AFTER_GTIDS 760
#define SQL_AFTER_MTS_GAPS 761
#define SQL_BEFORE_GTIDS 762
#define SQL_BIG_RESULT 763
#define SQL_BUFFER_RESULT 764
#define SQL_CACHE_SYM 765
#define SQL_CALC_FOUND_ROWS 766
#define SQL_NO_CACHE_SYM 767
#define SQL_SMALL_RESULT 768
#define SQL_SYM 769
#define SQL_THREAD 770
#define SSL_SYM 771
#define STARTING 772
#define STARTS_SYM 773
#define START_SYM 774
#define STATEMENT_SYM 775
#define STATS_AUTO_RECALC_SYM 776
#define STATS_PERSISTENT_SYM 777
#define STATS_SAMPLE_PAGES_SYM 778
#define STATUS_SYM 779
#define NOLOCK_SYM 780
#define NONBLOCKING_SYM 781
#define STDDEV_SAMP_SYM 782
#define STD_SYM 783
#define STOP_SYM 784
#define STORAGE_SYM 785
#define STRAIGHT_JOIN 786
#define STRING_SYM 787
#define SUBCLASS_ORIGIN_SYM 788
#define SUBDATE_SYM 789
#define SUBJECT_SYM 790
#define SUBPARTITIONS_SYM 791
#define SUBPARTITION_SYM 792
#define SUBSTRING 793
#define SUM_SYM 794
#define SUPER_SYM 795
#define SUSPEND_SYM 796
#define SWAPS_SYM 797
#define SWITCHES_SYM 798
#define SYSDATE 799
#define TABLES 800
#define TABLESPACE 801
#define TABLE_REF_PRIORITY 802
#define TABLE_SYM 803
#define TABLE_STATS_SYM 804
#define TABLE_CHECKSUM_SYM 805
#define TABLE_NAME_SYM 806
#define TEMPORARY 807
#define TEMPTABLE_SYM 808
#define TERMINATED 809
#define TEXT_STRING 810
#define TEXT_SYM 811
#define THAN_SYM 812
#define THEN_SYM 813
#define THREAD_STATS_SYM 814
#define TIMESTAMP 815
#define TIMESTAMP_ADD 816
#define TIMESTAMP_DIFF 817
#define TIME_SYM 818
#define TINYBLOB 819
#define TINYINT 820
#define TINYTEXT 821
#define TO_SYM 822
#define TOKU_UNCOMPRESSED_SYM 823
#define TOKU_ZLIB_SYM 824
#define TOKU_SNAPPY_SYM 825
#define TOKU_QUICKLZ_SYM 826
#define TOKU_LZMA_SYM 827
#define TOKU_FAST_SYM 828
#define TOKU_SMALL_SYM 829
#define TOKU_DEFAULT_SYM 830
#define TRAILING 831
#define TRANSACTION_SYM 832
#define TRIGGERS_SYM 833
#define TRIGGER_SYM 834
#define TRIM 835
#define TRUE_SYM 836
#define TRUNCATE_SYM 837
#define TYPES_SYM 838
#define TYPE_SYM 839
#define UDF_RETURNS_SYM 840
#define ULONGLONG_NUM 841
#define UNCOMMITTED_SYM 842
#define UNDEFINED_SYM 843
#define UNDERSCORE_CHARSET 844
#define UNDOFILE_SYM 845
#define UNDO_BUFFER_SIZE_SYM 846
#define UNDO_SYM 847
#define UNICODE_SYM 848
#define UNINSTALL_SYM 849
#define UNION_SYM 850
#define UNIQUE_SYM 851
#define UNKNOWN_SYM 852
#define UNLOCK_SYM 853
#define UNSIGNED 854
#define UNTIL_SYM 855
#define UPDATE_SYM 856
#define UPGRADE_SYM 857
#define USAGE 858
#define USER 859
#define USER_STATS_SYM 860
#define USE_FRM 861
#define USE_SYM 862
#define USING 863
#define UTC_DATE_SYM 864
#define UTC_TIMESTAMP_SYM 865
#define UTC_TIME_SYM 866
#define VALUES 867
#define VALUE_SYM 868
#define VARBINARY 869
#define VARCHAR 870
#define VARIABLES 871
#define VARIANCE_SYM 872
#define VARYING 873
#define VAR_SAMP_SYM 874
#define VIEW_SYM 875
#define WAIT_SYM 876
#define WARNINGS 877
#define WEEK_SYM 878
#define WEIGHT_STRING_SYM 879
#define WHEN_SYM 880
#define WHERE 881
#define WHILE_SYM 882
#define WITH 883
#define WITH_CUBE_SYM 884
#define WITH_ROLLUP_SYM 885
#define WORK_SYM 886
#define WRAPPER_SYM 887
#define WRITE_SYM 888
#define X509_SYM 889
#define XA_SYM 890
#define XML_SYM 891
#define XOR 892
#define YEAR_MONTH_SYM 893
#define YEAR_SYM 894
#define ZEROFILL 895

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 968 "/mnt/workspace/percona-server-5.6-source-tarballs-new/test/percona-server/sql/sql_yacc.yy" /* yacc.c:1909  */

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_CSTRING lex_cstr;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_ha_read_modes ha_read_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  const CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  class sp_condition_value *spcondvalue;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  Diagnostics_information::Which_area diag_area;
  Diagnostics_information *diag_info;
  Statement_information_item *stmt_info_item;
  Statement_information_item::Name stmt_info_item_name;
  List<Statement_information_item> *stmt_info_list;
  Condition_information_item *cond_info_item;
  Condition_information_item::Name cond_info_item_name;
  List<Condition_information_item> *cond_info_list;
  bool is_not_empty;

#line 1393 "/mnt/workspace/percona-server-5.6-source-tarballs-new/test/percona-server/sql/sql_yacc.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int MYSQLparse (class THD *YYTHD);

#endif /* !YY_MYSQL_MNT_WORKSPACE_PERCONA_SERVER_5_6_SOURCE_TARBALLS_NEW_TEST_PERCONA_SERVER_SQL_SQL_YACC_H_INCLUDED  */
