#     Project: openETCS / EnvSim
#      Module: simctrl / ctrl.tcl
# Description: Main UI controller for simctrl
# 
# History:
# - 28.10.15, J. Kastner: initial version

namespace eval ::ctrl {
}

# reset UI controls / indicators
proc ctrl::reset {} {
  model::reset
}



proc ctrl::handleRemoteConfig {data} {
  ctrl::log remote "config: $data"
  foreach {k v} $data {
    switch $k {
      track {
        if {$v eq ""} {
          set model::loadedTrack "No track loaded"
        } else {
          set model::loadedTrack $v
        }
      }
      sendevts {  }
      scripttrack { showTrack $v }
    }
  }
}

# Called when state of menu item "Remote->Send Events" changes
proc ctrl::remoteSendEvents {args} {
  comm::sendSENDEVTS $cfg::remoteSendEvents
}

# Called for menu item "Remote->Load Track File"
proc ctrl::loadRemoteTrackFile {} {
  set types {
    {"Track Files" .trk}
  }

  set file [tk_getOpenFile -filetypes $types]

  if {$file != ""} {
    cfg::loadRemoteTrackFile "$file"
  }

}

proc ctrl::log {id msg {type info}} {
  .c.n.syslog.area configure -state normal
  .c.n.syslog.area insert end "\[$id\] $msg\n" $type
  .c.n.syslog.area configure -state disabled
  .c.n.syslog.area see end
}

proc ctrl::error {id msg} {
  log "$id" "$msg" error
}

proc ctrl::clearLog {} {
  .c.n.syslog.area configure -state normal
  .c.n.syslog.area delete 1.0 end
  .c.n.syslog.area configure -state disabled
}

# show or hide Messages tab
proc ctrl::showMsgLog {} {
  if $evts::showMsgTab {
    .c.n add .c.n.msgs
  } else {
    .c.n hide .c.n.msgs
  }
}

# show or hide SDM tab
proc ctrl::showSDM {} {
  if $sdm::active {
    .c.n add .c.n.sdm
  } else {
    .c.n hide .c.n.sdm
  }
}

# show or hide Event Log tab
proc ctrl::showEventLog {} {
  if $evts::showLogTab {
    .c.n add .c.n.evtlog
  } else {
    .c.n hide .c.n.evtlog
  }
}

# show or hide Commands tab
proc ctrl::showCommands {} {
  if $macro::active {
    .c.n add .c.n.macros
  } else {
    .c.n hide .c.n.macros
  }
}

# show or hide Syslog tab
proc ctrl::showLog {} {
  if $view::logactive {
    .c.n add .c.n.syslog
  } else {
    .c.n hide .c.n.syslog
  }
}

# show or hide track info
proc ctrl::showTrack {visible} {
  if $visible {
    grid .c.track
  } else {
    grid remove .c.track
  }
}

# show or hide plots
proc ctrl::showPlots {} {
  if $plot::active {
    .c.n add .c.n.plot
  } else {
    .c.n hide .c.n.plot
  }
}
