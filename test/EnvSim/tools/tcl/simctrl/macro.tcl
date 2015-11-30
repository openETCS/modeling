#     Project: openETCS / EnvSim
#      Module: simctrl / macro.tcl
# Description: Provides functions for defining/running macros
# 
# History:
# - 01.11.15, J. Kastner: initial version

namespace eval ::macro {
  variable nextId  0
  variable frame
  variable next_t_train 0

  set active 1
}

proc macro::initView {path} {
  variable frame

  ttk::frame $path -padding 5
  set frame $path
}


proc macro::defineCommands {script} {
  eval "$script"
}

proc macro::execute {comment script} {
  evts::logCMD "$comment"
  eval "$script"
}

proc macro::addCmdBtn {label col row script} {
  variable nextId
  variable frame

  set path $frame.b$nextId
  grid [ttk::button $path -text "$label" -command [list macro::execute "$label" "$script"]] -column $col -row $row -sticky w

  incr nextId
  return $path
}

proc macro::getTTrain {} {
  variable next_t_train
  
  return $model::t_train
}

proc macro::getLRBG {} {
  return $model::lrbg
}

proc macro::sendMsg16 {nid_em} {
  track::radio clear
  track::radio set header "nid_message 16 nid_em $nid_em m_ack 1 nid_lrbg [getLRBG]"
  comm::sendRMSG "[track::radio get raw]"
}

proc macro::sendMsg18 {nid_em} {
  track::radio clear
  track::radio set header "nid_message 18 nid_em $nid_em m_ack 1 t_train [getTTrain] nid_lrbg [getLRBG]"
  comm::sendRMSG "[track::radio get raw]"
}

