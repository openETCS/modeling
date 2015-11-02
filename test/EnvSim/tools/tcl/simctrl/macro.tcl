#     Project: openETCS / EnvSim
#      Module: simctrl / macro.tcl
# Description: Provides functions for defining/running macros
# 
# History:
# - 01.11.15, J. Kastner: initial version

namespace eval ::macro {
}

proc macro::initView {path} {

  ttk::frame $path -padding 5
  grid [ttk::button $path.b1 -text "Send UES (MSG 16)"] -sticky w
  grid [ttk::button $path.b2 -text "Revoke UES (MSG 16)"] -sticky w
}

