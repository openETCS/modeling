#     Project: openETCS / EnvSim
#      Module: simctrl / view.tcl
# Description: Main UI view for simctrl
# 
# History:
# - 25.10.15, J. Kastner: initial version
package require Tk

namespace eval ::view {
}

proc view::addLabelField {path label var col row {rdly false} {width 10}} {
  grid [ttk::label ${path}_l -text $label] -column $col -row $row -sticky e
  if {$rdly} {
    grid [ttk::label ${path}_v -textvariable $var -width $width] -column [expr $col + 1] -row $row -sticky w
  } else {
    grid [ttk::entry ${path}_v -textvariable $var] -column [expr $col + 1] -row $row -sticky w
  }
}


proc view::init {} {
  option add *tearOff 0

  if $::isWin {
    ttk::style theme use winnative
  }

  wm title . "openETCS SimCtrl"

  grid [ttk::frame .c -padding 10] -sticky nwes
  grid columnconfigure .c 1 -minsize 10 -weight 0
  grid columnconfigure .c 3 -minsize 10 -weight 0
  grid rowconfigure .c 1 -minsize 10 -weight 0


  ### MENU ###
  menu .menubar
  set m .menubar
  # File
  menu $m.file
  $m add cascade -menu $m.file -label File
  $m.file add command -label "Load Config" -command "cfg::loadDialog"

  # Remote
  menu $m.remote
  $m add cascade -menu $m.remote -label Remote
  $m.remote add command -label "Load Track File" -command "ctrl::loadRemoteTrackFile"
  $m.remote add checkbutton -label "Send Events" -variable cfg::remoteSendEvents -command ctrl::remoteSendEvents -onvalue 1 -offvalue 0

  . configure -menu .menubar

  
  ### TRACKINFO ###
  grid [ttk::frame .c.track] -column 0 -row 0 -columnspan 5 -sticky we
  addLabelField .c.track.loaded "Track:" model::loadedTrack 0 0 true 30
  #grid [trackview::init .c.track.view] -column 0 -row 1 -columnspan 2 -sticky we
  #grid columnconfigure .c.track 0 -weight 0
  #grid columnconfigure .c.track 1 -weight 1
  

  ### SIMULATION CONTROLS ###
  grid [ttk::frame .c.ctrl] -column 0 -row 2 -sticky n 
  grid [ttk::checkbutton .c.ctrl.openDesk -text "Open Desk" -variable model::openDesk -command model::ctrlsChanged] -row 0 -column 0
  grid [ttk::checkbutton .c.ctrl.afb -text "AFB" -variable model::afb -command model::ctrlsChanged] -row 0 -column 1 
  grid [ttk::frame .c.ctrl.s -padding 5] -row 1 -column 0 -columnspan 2
  # Traction
  grid [ttk::frame .c.ctrl.s.traction] -column 0 -row 0
  grid [ttk::scale .c.ctrl.s.traction.scale -from 100 -to 0 -orient vertical -variable model::traction -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.s.traction.name -text Traction]
  # Brake
  grid [ttk::frame .c.ctrl.s.brake] -column 1 -row 0
  grid [ttk::scale .c.ctrl.s.brake.scale -from 300 -to 0 -orient vertical -variable model::brake -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.s.brake.name -text Brake]
  # Target Speed
  grid [ttk::frame .c.ctrl.s.target] -column 2 -row 0
  grid [ttk::scale .c.ctrl.s.target.scale -from 300 -to 0 -orient vertical -variable model::target -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.s.target.name -text "Target Speed"]



  ### SIMULATION STATUS ###
  # LEDs
  grid [ttk::frame .c.state] -column 2 -row 2 -sticky n
  grid [ui::led .c.state.conn Connected green model::connected] -sticky w
  grid [ui::led .c.state.eb "Emergency Brake" red model::ebActive] -sticky w
  grid [ui::led .c.state.sb "Service Brake" red model::sbActive] -sticky w
  grid [ui::led .c.state.tco "Traction Cut Off" red model::tcoActive] -sticky w
  # velocity & position
  grid [ttk::frame .c.info] -column 4 -row 2 -sticky n
  addLabelField .c.info.pos "Position (m):" model::currentPos 0 0 true 6
  addLabelField .c.info.vel "Velocity (km/h):" model::currentVel 0 1 true 4


  ### TABS ###
  grid [ttk::notebook .c.n] -column 0 -row 4 -columnspan 5 -sticky we
  # Messages
  evts::initView .c.n.evts
  .c.n add .c.n.evts -text " Messages "
  # SDM
  sdm::initView .c.n.sdm
  .c.n add .c.n.sdm -text " SDM "
  # Macros
  macro::initView .c.n.macros
  .c.n add .c.n.macros -text " Commands "
  # Log
  ttk::frame .c.n.log
  grid [ttk::frame .c.n.log.btns -padding 3] -column 0 -row 0 -columnspan 2 -sticky w
  grid [ttk::button .c.n.log.btns.clear -text Clear -command ctrl::clearLog] -column 0 -row 0 -sticky w
  grid rowconfigure .c.n.log 0 -weight 0
  grid [tk::text .c.n.log.area -state disabled -height 10] -column 0 -row 1 -sticky ns
  grid [ttk::scrollbar .c.n.log.sb -command ".c.n.log.area yview"] -column 1 -row 1 -sticky ns
  .c.n.log.area configure -yscrollcommand ".c.n.log.sb set"
  grid rowconfigure .c.n.log 1 -weight 1 
  .c.n add .c.n.log -text " Log " -sticky nwes
}

