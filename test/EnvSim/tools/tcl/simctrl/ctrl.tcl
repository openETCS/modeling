#     Project: openETCS / EnvSim
#      Module: simctrl / ctrl.tcl
# Description: Main UI controller for simctrl
# 
# History:
# - 28.10.15, J. Kastner: initial version

namespace eval ::ctrl {
}

proc ctrl::error {msg} {
}

proc ctrl::displayRemoteConfig {data} {
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
  .c.n.log.area configure -state normal
  .c.n.log.area insert end "\[$id\] $msg\n" $type
  .c.n.log.area configure -state disabled
  .c.n.log.area see end
}

proc ctrl::clearLog {} {
  .c.n.log.area configure -state normal
  .c.n.log.area delete 1.0 end
  .c.n.log.area configure -state disabled
}

# show or hide SDM tab
proc ctrl::showSDM {} {
  if $sdm::active {
    .c.n add .c.n.sdm
  } else {
    .c.n hide .c.n.sdm
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

# show or hide Log tab
proc ctrl::showLog {} {
  if $view::logactive {
    .c.n add .c.n.log
  } else {
    .c.n hide .c.n.log
  }
}
