# Provides functions for generating HTML reports
#-----------------------------------------------------------------------------
# History:
# - 25.08.15, J. Kastner: initial version
#-----------------------------------------------------------------------------
use strict;
use warnings FATAL => 'all';

my $SCRIPTDIR = dirname($0);
require "$SCRIPTDIR/lib.pl";

sub writeTestReport {
  my ($results,$out) = @_;

  my $lastfh;

  if($out) {
    $lastfh = select;
    select $out;
  }
  else {
    $lastfh = select;
  }

  my %resultGroups = groupTestResultsByNode($results);

  writeTestReportHeader();
  writeTestReportTable(\%resultGroups);

  select $lastfh;
}

# Returns a hash of arrays, where each key is a SCADE node for which test results exist,
# and the corresponding value is an aray with all test results for this node.
# Every test result is a hash as returned by extractTestResult().
#
# Params:
# - reference to an array with raw test results
sub groupTestResultsByNode {
  my (@results) = @{$_[0]};
  my %resultGroups;

  # group results by node name
  for (@results) {
    my $res = extractTestResult($_);
    my $node = $res->{node};
    if(exists($resultGroups{$node})) {
      my $a = $resultGroups{$node};
      push @$a, $res;
    }
    else {
      my @a = ($res);
      $resultGroups{$node} = \@a;
    }
  }

  return %resultGroups;
}


sub extractTestResult {
  my %r = %{$_[0]};
  my %res;

  $res{id} = $r{spec}->{id};
  $res{node} = $r{spec}->{node};
  $res{title} = $r{spec}->{titl};
  if($r{hasErrors}) { $res{success} = 0 } else { $res{success} = 1 };
  $res{script} = $r{spec}->{sfile};
  $res{project} = $r{spec}->{proj};
  $res{messages} = $r{messages};

  return \%res;
}


sub writeTestReportHeader {
  my $tstamp = timestamp();

  open CSS, "<$SCRIPTDIR/html/report.css";
  my $css = do { local $/; <CSS> };

  open ZEPTO, "<$SCRIPTDIR/html/zepto.min.js";
  my $zepto = do { local $/; <ZEPTO> };

  open JS, "<$SCRIPTDIR/html/report.js";
  my $js = do { local $/; <JS> };

  


}


sub writeTestReportTable {
  my (%resultGroups) = %{$_[0]};


  while(my ($group,$results) = each(%resultGroups)) {
    my $grp = "TESTCASE **$group**";
    
    print "\n";
    print $grp;
    print "\n";
    print "\n";

    for (@$results) {
      writeTestReportRow($_);
    }
  }

}


sub writeTestReportRow {
  my (%res) = %{$_[0]};

  my $resstring;
  if($res{success}) {
    $resstring = "success";
  }
  else {
    $resstring = "failure";
  }

  my $messages;
  for (@{$res{messages}}) {
    my %msg = %{$_};
    $messages = $messages . "<pre class=\"$msg{type}\">$msg{msg}</pre>\n";
  }



  my $row = <<"END_ROW";
      SUBNAME_ID= $res{id}, SUBNAME= $res{title}, RESULT=$resstring
END_ROW
  print $row;
}



