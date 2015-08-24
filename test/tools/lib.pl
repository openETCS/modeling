# This Perl library provides common utility functions
# for the internal test tools of openETCS/WP3.
#-----------------------------------------------------------------------------
# History:
# - 22.08.15, J. Kastner: inital version
use strict;
use warnings;

# Iff true, error messages have been pushed to @messages
my $hasErrors;

my @messages;

sub clearMessages {
  undef $hasErrors;
  undef @messages;
}

sub hasErrors { return $hasErrors }

sub messages { return @messages }

# Prints the specified error message, appends the message to the global
# array @messages, and sets the global variable $hasErrors to 1.
sub error {
  $hasErrors = 1;
  push @messages, {type=>"E", msg=>$_[0]};
  printred("$_[0]\n");
}

# Prints the specified warning and stores the message in the global array @messages
sub warning {
  push @messages, {type=>"W", msg=>$_[0]};
  printyellow("$_[0]\n");
}

# Appends the specified message to the array @messages
sub info {
  push @messages, {type=>"I",msg=>$_[0]};
}


# Prints the specified string to STDOUT using a bold green font
sub printgreen {
  print "\e[1;32;40m$_[0]\e[0m";
}

# Prints the specified string to STDOUT using a bold yellow font
sub printyellow {
  print "\e[1;33;40m$_[0]\e[0m";
}

# Prints the specified string to STDOUT using a bold red font
sub printred {
  print "\e[1;31;40m$_[0]\e[0m";
}

# Returns the current timestamp as string
sub timestamp {
  my ($DAY,$MONTH,$YEAR,$HOUR,$MIN) = (localtime)[3,4,5,2,1];
  return sprintf "%02d.%02d.%02d %02d:%02d", $DAY, $MONTH+1, $YEAR-100, $HOUR, $MIN;
}
1;
