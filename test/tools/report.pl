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
  writeTestReportFooter();

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

  my $hdr = <<"END_HDR";
<!DOCTYPE html>
<html>
  <head>
    <title>openETCS/WP3 Test Report ($tstamp)</title>
    <style>
    $css
    </style>
    <script>
    $zepto
    $js
    </script>
  </head>
  <body>
  <h1>Test Report</h1>
  <table class="lv-table" style="margin-bottom:20px">
    <tr><th>Date:</th><td>$tstamp</td></tr>
  </table>
END_HDR

  print $hdr;
}


sub writeTestReportTable {
  my (%resultGroups) = %{$_[0]};

  my $thead = <<"END_THEAD";
  <table class="results">
    <thead><tr><th>ID</th><th style="min-width:500px">Title</th><th>Result</th></tr></thead>
    <tbody>
END_THEAD
  print $thead;

  while(my ($group,$results) = each(%resultGroups)) {
    my $grp = <<"END_GRP";
      <tr><td colspan="3" class="results-group">$group</td></tr>
END_GRP
    print $grp;

    for (@$results) {
      writeTestReportRow($_);
    }
  }
  my $tfoot = <<"END_TFOOT";
    </tbody>
  </table>
END_TFOOT
  print $tfoot;
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

  my $details = <<"END_DETAILS";
  <div class="details-hidden">
    <div class="title">$res{id}<span>X</span></div>
    <div class="details-body">
    <table class="lv-table">
      <tr><th>Status:</th><td class="$resstring">$resstring</td></tr>
      <tr><th>Title:</th><td>$res{title}</td></tr>
      <tr><th>Node:</th><td>$res{node}</td></tr>
      <tr><th>Script:</th><td>$res{script}</td></tr>
      <tr><th>Node:</th><td>$res{node}</td></tr>
      <tr><th>Project:</th><td>$res{project}</td></tr>
    </table>
    <div class="log">
    <h4>Log:</h4>
      $messages
    </div>
    </div>
  </div>
END_DETAILS

  my $row = <<"END_ROW";
      <tr><td>$res{id}</td><td>$res{title}</td><td class="$resstring"><a href="#" class="details">$resstring</a>$details</td></tr>
END_ROW
  print $row;
}


sub writeTestReportFooter {
  my $ftr = <<"END_FTR";
  </body>
</html>
END_FTR

  print $ftr;
}


1;
