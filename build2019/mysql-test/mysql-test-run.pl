#!/usr/bin/perl
# Call mtr in out-of-source build
$ENV{MTR_BINDIR} = '/Users/yanglihua/Downloads/percona-server-5.6.43/build2019';
chdir('/Users/yanglihua/Downloads/percona-server-5.6.43/mysql-test');
exit(system($^X, '/Users/yanglihua/Downloads/percona-server-5.6.43/mysql-test/mysql-test-run.pl', @ARGV) >> 8);
