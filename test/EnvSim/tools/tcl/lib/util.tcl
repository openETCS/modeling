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
