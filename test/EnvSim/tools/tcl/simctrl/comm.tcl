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
}

proc comm::onConnect {channel addr port} {
  variable conn
  fconfigure $channel -translation binary -buffering none
  fileevent $channel readable "comm::readMsg $channel"
  set conn $channel
  set model::connected 1
}


proc comm::onDisconnect {channel} {
  variable conn
  puts closing
  close $channel
  unset conn
  set model::connected 0
}


proc comm::readMsg {channel} {
  variable sent
  set data [read $channel 8]
  if {$data != ""} {
    binary scan $data ii id len
    if {$id != 1003 || $len != 64} {
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
    }
  } else {
    onDisconnect $channel
  }
}


proc comm::sendCtrlMsg {openDesk traction} {
  variable conn
  if {[info exists conn]} {
    puts -nonewline $conn [binary format iix16dx36i 2002 64 $traction $openDesk]
  } else {
  }
}

proc comm::listen {} {
  variable server
  set server [socket -server comm::onConnect 20003]
}
