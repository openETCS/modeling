#!/usr/bin/perl -w
# creation of text report
#-----------------------------------------------------------------------------
# History:
# - 09.10.15, D. Nikolic: initial version
#-----------------------------------------------------------------------------
use strict;
use warnings FATAL => 'all';
use File::Basename;
use IO::File;
use IO::Dir;
use Cwd;
use Getopt::Std;
use Path::Class;
use autodie;
use IO::Pipe;


write_report();
print "done";




sub write_report {
	my $filename = 'report.md';
	
	
	open(my $fh, '>', $filename) or die "Could not open file '$filename' $!";
	print $fh "These are the weekly results of the **issue tracker**\n";
	print $fh "============\n";
	print $fh "\n";
	print $fh "The following issues are open for the current week:\n";
	print $fh "\n";
	
	my $textfile="Week_1.txt";
	$fh=appened_reports($fh, $textfile);
	
	print $fh "\n";
	print $fh "\n";
	
	print $fh "\n";
	print $fh "\n";
	print $fh "\n";
	print $fh "\n";
	print $fh "\n";
	print $fh "Open issues of the second week:\n";
	print $fh "\n";
	
	$textfile="Week_2.txt";
	$fh=appened_reports($fh, $textfile);
	
	
	print $fh "\n";
	print $fh "\n";
	print $fh "Open issues of the third week:\n";
	print $fh "\n";
	
	$textfile="Week_3.txt";
	$fh=appened_reports($fh, $textfile);
	
	
	print $fh "\n";
	print $fh "\n";
	print $fh "The results of the test report are:\n";
	print $fh "============";
	
	
	$textfile="../test/TestReport_Text.txt";
	$fh=appened_reports($fh, $textfile);
	
	close $fh;
	
	
	#remove old reports
	unlink 'Week_1.txt';
	unlink 'Week_2.txt';
	unlink 'Week_3.txt';
	unlink '../test/TestReport_Text.txt';
}


sub appened_reports {
	my @list=@_;
	my $fh=$list[0];
	my $filename=$list[1];
	
	my $dir_1 = dir(".");
	my $file_1 = $dir_1->file($filename);
	my $content_1= $file_1->slurp();
	my $file_handle_1 = $file_1->openr();
	
	while( my $line = $file_handle_1->getline() ) {
        print $fh $line;
        }
	
	return $fh;
}