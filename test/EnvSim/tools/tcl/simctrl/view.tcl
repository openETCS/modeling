#     Project: openETCS / EnvSim
#      Module: simctrl / view.tcl
# Description: Main UI view for simctrl
# 
# History:
# - 25.10.15, J. Kastner: initial version
package require Tk

namespace eval ::view {
}

proc view::addLabelField {path label var col row {value ""}} {
  grid [ttk::label ${path}_l -text $label] -column $col -row $row -sticky e
  if {$value != ""} {
    grid [ttk::entry ${path}_v -text "$value"] -column [expr $col + 1] -row $row
  } else {
    grid [ttk::entry ${path}_v -textvariable $var] -column [expr $col + 1] -row $row
  }
}


proc view::init {} {
  option add *tearOff 0

  wm title . "openETCS SimCtrl"

  grid [ttk::frame .c -padding 10] -sticky nwes


  ### MENU ###
  menu .menubar
  set m .menubar
  # File
  #menu $m.file
  #$m add cascade -menu $m.file -label File
  #$m.file add command -label "Open Track" -command "view::openTrackDialog"

  #. configure -menu .menubar

  ### SIMULATION CONTROLS ###
  grid [ttk::frame .c.ctrl] -column 0 -row 0 -sticky n 
  grid [ttk::checkbutton .c.ctrl.openDesk -text "Open Desk" -variable model::openDesk -command model::ctrlsChanged]
  grid [ttk::scale .c.ctrl.traction -from 100 -to 0 -orient vertical -variable model::traction -command model::ctrlsChanged]


  ### SIMULATION STATE ###
  grid [ttk::frame .c.state] -column 1 -row 0
  grid [ui::led .c.state.conn Connected green model::connected] -sticky w
  grid [ui::led .c.state.eb "Emergency Brake" red model::ebActive] -sticky w
  grid [ui::led .c.state.sb "Service Brake" red model::sbActive] -sticky w
  grid [ui::led .c.state.tco "Traction Cut Off" red model::tcoActive] -sticky w

}

