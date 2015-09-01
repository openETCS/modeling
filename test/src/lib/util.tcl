# Provides common utility procedures for openETCS/WP3 SCADE .sss test scripts
#
# History:
# - 24.08.15, J. Kastner: initial version
# - 01.09.15, J. Kastner: add logOutputs

namespace eval ::util {

  # prints a log message to STDOUT
  proc log {msg} {
    puts "> $msg"
  }

  proc logOutputs {prefix args} {
    log "values for $prefix: " 
    foreach arg $args {
      log "- $arg=[SSM::get $prefix$arg]"
    }
  }
    
  proc error {msg} {
    ::error $msg
  }

  # Assigns values to a SCADE input (structure) using path as prefix.
  #
  # Example:
  # Provided we have a SCADE node foo::bar with two inputs x and y, then
  #
  #   util::assign "foo::bar/" x=true y=30
  #
  # is equal to these two commands:
  #   SSM::set "foo::bar/x" true
  #   SSM::set "foo::bar/y" 30
  proc assign {path args} {
    set lst [list]
    foreach val $args {
      set t [split $val =]
      #log "[lindex $t 0]: [lindex $t 1]"
      SSM::set "$path[lindex $t 0]" [lindex $t 1]
    }
  }

  # Sets the specified list of checks for the current simulation cycle using path as prefix.
  #
  # Example:
  # Provided we have a SCADE node foo::bar with two outputs x and y, then
  #
  #   util::check "foo::bar/" x=true y=30
  #
  # is equal to these two commands:
  #   SSM::check "foo::bar/x" true
  #   SSM::check "foo::bar/y" 30
  proc check {path args} {
    set lst [list]
    foreach arg $args {
      set t [split $arg =]
      SSM::check "$path[lindex $t 0]" [lindex $t 1]
    }
  }

  # Tcl 8.4 polyfill for Tcl 8.5 command lrepeat
  proc lrepeat {iter elem} {
    split [string repeat $elem $iter] ""
  }
}


