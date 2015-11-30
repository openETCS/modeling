#     Project: openETCS / EnvSim
#      Module: simctrl / cfg.tcl
# Description: Provides functions for loading/evaluation of SimCtrl configuration scripts (.cfg)
# 
# History:
# - 30.10.15, J. Kastner: initial version

namespace eval ::cfg {
  variable connectScript
  variable commandScript

  # value of menu checkbox "Remote -> Send Events"
  # If true, the remote is requested to send events (track&train) messages
  set remoteSendEvents 1
}

proc cfg::load {file} {
  ctrl::log simctrl "Loading configuration '$file'"
  source "$file"
}

proc cfg::loadDialog {} {
  set types {
    {"SimCtrl Configuration" .cfg}
  }

  set file [tk_getOpenFile -filetypes $types]

  if {$file != ""} {
    cfg::load "$file"
  }
}

proc cfg::onConnect {script} {
  variable connectScript
  set connectScript "$script"
}

proc cfg::execOnConnect {} {
  variable connectScript
  if [info exists connectScript] {
    eval "$connectScript"
  }
}


proc cfg::commands {script} {
  macro::defineCommands "$script"
}


proc cfg::loadRemoteTrackFile {path} {
  ctrl::log simctrl "Loading remote track file '$path'"
  comm::sendRUNTCL "$path"
  comm::sendGETCONF
  comm::sendGETBINF
}

