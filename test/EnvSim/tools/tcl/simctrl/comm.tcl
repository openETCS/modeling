#     Project: openETCS / EnvSim
#      Module: simctrl / comm.tcl
# Description: Provides the communication interface to the simulation
# 
# History:
# - 23.10.15, J. Kastner: initial version

namespace eval ::comm {
  variable server
  variable conn
  variable sent false

  set SERVERPORT         20003

  set TCPMSG_OK          1
  set TCPMSG_ERROR       2

  set TCPMSG_EVC2GUI     1003
  set TCPMSG_GUI2EVC     2003
  set TCPMSG_ES_GETCONF  4000
  set TCPMSG_ES_RUNTCL   4001
  set TCPMSG_ES_SENDEVTS 4002
}

proc comm::handleConnect {channel addr port} {
  variable conn
  fconfigure $channel -translation binary -buffering none
  fileevent $channel readable "comm::readMsg $channel"
  set conn $channel
  set model::connected 1
  ctrl::log simctrl "Connected to EnvSim/EVC @$addr:$port"
  sendSENDEVTS 1
  cfg::execOnConnect
  #sendRUNTCL "S:/modeling/test/EnvSim/track/AmsterdamUtrecht.trk"
  #sendSENDEVTS 1
  #sendGETCONF
}


proc comm::handleDisconnect {channel} {
  variable conn
  puts closing
  close $channel
  unset conn
  set model::connected 0
  ctrl::log simctrl "Disconnected from EnvSim/EVC"
}

proc comm::readMsg {channel} {
  variable sent
  set data [read $channel 8]
  if {$data != ""} {
    binary scan $data ii id len
    switch $id {
      1    { read $channel $len }
      2    { handleErrorMsg $channel $len }
      1003 { readMsgEVC2GUI $channel $len }
      3000 { ctrl::displayRemoteConfig [read $channel $len] }
      3001 { evts::handleBaliseMessage [read $channel $len] }
      3002 { evts::handleRadioMessage [read $channel $len] }
      default { error "ERROR: received invalid message id=$id, len=$len" }
    }
  } else {
    handleDisconnect $channel
  }
}


proc comm::handleErrorMsg {channel len} {
  ctrl::error [read $channel $len]
}

proc comm::readMsgEVC2GUI {channel len} {
  if {$len != 64} {
    error "ERROR: invalid message: id=$id  len=$len"
  } else {
    set data [read $channel 64]
    binary scan "$data" cccx5ddcx7dddi eb sb tco curpos curvel afb dmax nom dmin tstamp
    #puts "$eb $sb $tco $curpos $curvel $afb $tstamp"
    if {$eb != $model::ebActive} {
    set model::ebActive $eb
    }
    if {$sb != $model::sbActive} {
      set model::sbActive $sb
    }
    if {$tco != $model::tcoActive} {
      set model::tcoActive $tco
    }
    set curpos [expr {round($curpos)}]
    if {$curpos != $model::currentPos} {
      set model::currentPos $curpos
    }
    set curvel [expr {round($curvel)}]
    if {$curvel != $model::currentVel} {
      set model::currentVel $curvel
    }
  }
}


proc comm::sendCtrlMsg {openDesk traction brake} {
  variable conn
  if {[info exists conn]} {
    puts -nonewline $conn [binary format iix16ddx28i $comm::TCPMSG_GUI2EVC 64 $traction $brake $openDesk]
  } else {
  }
}

proc comm::sendRUNTCL {path} {
  sendStringMsg $comm::TCPMSG_ES_RUNTCL $path
}

proc comm::sendGETCONF {} {
  sendStringMsg $comm::TCPMSG_ES_GETCONF {}
}

proc comm::sendSENDEVTS {flag} {
  sendStringMsg $comm::TCPMSG_ES_SENDEVTS [binary format b1 $flag]
}

proc comm::sendStringMsg {msgid msg} {
  variable conn
  puts -nonewline $conn [binary format iia* $msgid [string bytelength $msg] $msg]
}

proc comm::listen {} {
  variable server

  ctrl::log simctrl "Listening for EnvSim/EVC on port $comm::SERVERPORT"
  set server [socket -server comm::handleConnect $comm::SERVERPORT]
}
