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
  grid [ttk::button $path.b2 -text "Revoke UES (MSG 16)" -command macro::revokeUES] -sticky w
  #grid [ttk::button $path.b3 -text "Abort" -command comm::sendABORT] -sticky w
}

proc macro::sendUES {} {
  track::radio clear
  track::radio set header {nid_message 16 nid_em 1234}
  comm::sendRMSG "[track::radio get raw]"
}

proc macro::revokeUES {} {
  track::radio clear
  track::radio set header {nid_message 18 nid_em 1234}
  comm::sendRMSG "[track::radio get raw]"
}
