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
  #menu $m.file
  #$m add cascade -menu $m.file -label File
  #$m.file add command -label "Open Track" -command "view::openTrackDialog"

  #. configure -menu .menubar
  
  ### TRACKINFO ###
  grid [ttk::frame .c.track] -column 0 -row 0 -columnspan 5 -sticky w
  addLabelField .c.track.loaded "Track:" model::loadedTrack 0 0 true 30
  

  ### SIMULATION CONTROLS ###
  grid [ttk::frame .c.ctrl] -column 0 -row 2 -sticky n 
  grid [ttk::checkbutton .c.ctrl.openDesk -text "Open Desk" -variable model::openDesk -command model::ctrlsChanged] -columnspan 2
  # Traction
  grid [ttk::frame .c.ctrl.traction] -column 0 -row 1
  grid [ttk::scale .c.ctrl.traction.scale -from 100 -to 0 -orient vertical -variable model::traction -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.traction.name -text Traction]
  # Brake
  grid [ttk::frame .c.ctrl.brake] -column 1 -row 1
  grid [ttk::scale .c.ctrl.brake.scale -from 300 -to 0 -orient vertical -variable model::brake -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.brake.name -text Brake]



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

}

