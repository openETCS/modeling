#     Project: openETCS / EnvSim
#      Module: simctrl / macro.tcl
# Description: Provides functions for defining/running macros
# 
# History:
# - 01.11.15, J. Kastner: initial version

namespace eval ::macro {
  set active 1
}

proc macro::initView {path} {

  ttk::frame $path -padding 5
  grid [ttk::button $path.b1 -text "Send UES (MSG 16)" -command macro::sendUES] -sticky w
  grid [ttk::button $path.b2 -text "Revoke UES (MSG 16)"] -sticky w
}

proc macro::sendUES {} {
  track::radio clear
  track::radio set header "nid_message 1 d_emergencystop 2 d_ref 3 d_sr 4"
  puts [track::radio get header]
}
