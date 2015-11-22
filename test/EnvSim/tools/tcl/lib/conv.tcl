#     Project: openETCS / EnvSim
#      Module: tcl / lib / conv.tcl
# Description: Conversion functions for ETCS variables (except enums)
# 
# History:
# - 21.11.15, J. Kastner: initial version

namespace eval ::conv {}

proc conv::lengthInM {q_scale val {precision 1}} {
  switch $q_scale {
    0 { set l [expr 0.1*$val] }
    1 { set l $val }
    2 { set l [expr 10*$val] }
    default { error "invalid q_scale=$q_scale" }
  }
  return [format "%.${precision}f" $l]
}

proc conv::velocityInKmH {val} {
  return [expr 5*$val]
}
