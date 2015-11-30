#     Project: openETCS / EnvSim
#      Module: tcl / lib / utils.tcl
# Description: Common utility functions for the EnvSim Tcl tools
# 
# History:
# - 28.09.15, J. Kastner: initial version

namespace eval ::util {
}

proc util::bytes2hex {data {offset 0}} {
  binary scan "$data" x${offset}H* list
  return [string toupper $list]
}

proc util::intlist2hex {data} {
  set hex ""
  foreach i $data {
    for {set k 0} {$k<4} {incr k} {
      set b [expr $i % 256]
      set h [expr $b / 16]
      append hex [format "%X" $h]
      set l [expr $b % 16]
      append hex [format "%X" $l]
      set i [expr $i >> 8]
    }
  }
  return $hex
}
