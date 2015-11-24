#     Project: openETCS / EnvSim
#      Module: simctrl / view.tcl
# Description: Main UI view for simctrl
# 
# History:
# - 25.10.15, J. Kastner: initial version
# - 19.11.15, J. Kastner: rename Log -> Syslog; add tab "EVC Log"; correct resize handling
# - 21.11.15, J. Kastner: improve layout
package require Tk

namespace eval ::view {
  set logactive 1
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
  #wm minsize . 700 550

  grid [ttk::frame .c -padding 10] -sticky nwes
  grid columnconfigure . 0 -weight 1
  grid rowconfigure . 0 -weight 1
  grid columnconfigure .c 0 -weight 1
  grid columnconfigure .c 1 -minsize 10 -weight 0
  grid columnconfigure .c 2 -weight 1
  grid columnconfigure .c 3 -minsize 10 -weight 0
  grid columnconfigure .c 4 -weight 1
  grid rowconfigure .c 1 -minsize 10 -weight 0
  grid rowconfigure .c 4 -weight 1


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

  # View
  menu $m.view
  $m add cascade -menu $m.view -label View
  $m.view add checkbutton -label "Messages" -variable evts::showMsgTab -command ctrl::showMsgLog -onvalue 1 -offvalue 0
  $m.view add checkbutton -label "Event Log" -variable evts::showLogTab -command ctrl::showEventLog -onvalue 1 -offvalue 0
  $m.view add checkbutton -label "SDM" -variable sdm::active -command ctrl::showSDM -onvalue 1 -offvalue 0
  $m.view add checkbutton -label "Plots" -variable plot::active -command ctrl::showPlots -onvalue 1 -offvalue 0
  $m.view add checkbutton -label "Commands" -variable macro::active -command ctrl::showCommands -onvalue 1 -offvalue 0
  $m.view add checkbutton -label "Syslog" -variable view::logactive -command ctrl::showLog -onvalue 1 -offvalue 0

  . configure -menu .menubar

  
  ### TRACKINFO ###
  grid [ttk::frame .c.track] -column 0 -row 0 -columnspan 5 -sticky we
  addLabelField .c.track.loaded "Track:" model::loadedTrack 0 0 true 30
  #grid [trackview::init .c.track.view] -column 0 -row 1 -columnspan 2 -sticky we
  grid columnconfigure .c.track 0 -weight 0
  grid columnconfigure .c.track 1 -weight 1
  

  ### SIMULATION CONTROLS ###
  grid [ttk::frame .c.ctrl] -column 0 -row 2 -sticky n 
  grid [ttk::checkbutton .c.ctrl.openDesk -text "Open Desk" -variable model::openDesk -command model::ctrlsChanged] -row 0 -column 0
  grid [ui::led .c.ctrl.afb AFB green model::afb] -row 0 -column 1
  grid [ttk::frame .c.ctrl.s -padding 5] -row 1 -column 0 -columnspan 2
  # Traction
  grid [ttk::frame .c.ctrl.s.traction] -column 0 -row 0
  grid [ui::slider .c.ctrl.s.traction.scale -from 100 -to 0 -orient vertical -variable model::traction -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.s.traction.name -text Traction] 
  # Brake
  grid [ttk::frame .c.ctrl.s.brake -padding 5] -column 1 -row 0
  grid [ui::slider .c.ctrl.s.brake.scale -from 300 -to 0 -orient vertical -variable model::brake -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.s.brake.name -text Brake] -sticky e
  # Target Speed
  grid [ttk::frame .c.ctrl.s.target -padding 5] -column 2 -row 0
  grid [ui::slider .c.ctrl.s.target.scale -from 300 -to 0 -orient vertical -variable model::target -command model::ctrlsChanged]
  grid [ttk::label .c.ctrl.s.target.name -text "Target Speed" -anchor center]



  ### SIMULATION STATUS ###
  # LEDs
  grid [ttk::frame .c.state] -column 2 -row 2 -sticky n
  grid [ui::led .c.state.conn Connected green model::connected] -sticky w
  grid [ui::led .c.state.eb "Emergency Brake" red model::ebActive] -sticky w
  grid [ui::led .c.state.sb "Service Brake" red model::sbActive] -sticky w
  grid [ui::led .c.state.tco "Traction Cut Off" red model::tcoActive] -sticky w
  # velocity, position, and position report data
  grid [ttk::frame .c.info] -column 4 -row 2 -sticky n
  addLabelField .c.info.pos "Position (m):" model::currentPos 0 0 true 6
  addLabelField .c.info.vel "Velocity (km/h):" model::currentVel 0 1 true 4
  addLabelField .c.info.lrbg "LRBG:" model::lrbg 0 2 true 4
  addLabelField .c.info.mode "Mode:" model::mode 0 3 true 4
  addLabelField .c.info.level "Level:" model::level 0 4 true 4


  ### TABS ###
  grid [ttk::notebook .c.n] -column 0 -row 4 -columnspan 5 -sticky wesn
  # Messages
  evts::initMsgView .c.n.msgs
  .c.n add .c.n.msgs -text " Messages "
  # Event Log
  evts::initLogView .c.n.evtlog
  .c.n add .c.n.evtlog -text " Event Log "
  # SDM
  sdm::initView .c.n.sdm
  .c.n add .c.n.sdm -text " SDM "
  # Plots
  plot::initView .c.n.plot
  .c.n add .c.n.plot -text " Plots "
  # Macros
  macro::initView .c.n.macros
  .c.n add .c.n.macros -text " Commands "
  # Syslog
  ttk::frame .c.n.syslog
  grid [ttk::frame .c.n.syslog.btns -padding 3] -column 0 -row 0 -columnspan 2 -sticky w
  grid [ttk::button .c.n.syslog.btns.clear -text Clear -command ctrl::clearLog] -column 0 -row 0 -sticky w
  grid rowconfigure .c.n.syslog 0 -weight 0
  grid [tk::text .c.n.syslog.area -state disabled -wrap none -height 10] -column 0 -row 1 -sticky wesn
  grid [ttk::scrollbar .c.n.syslog.ysb -command ".c.n.syslog.area yview"] -column 1 -row 1 -sticky ns
  .c.n.syslog.area configure -yscrollcommand ".c.n.syslog.ysb set"
  grid [ttk::scrollbar .c.n.syslog.xsb -command ".c.n.syslog.area xview" -orient horizontal] -column 0 -row 2 -sticky we
  .c.n.syslog.area configure -xscrollcommand ".c.n.syslog.xsb set"
  grid rowconfigure .c.n.syslog 1 -weight 1 
  .c.n add .c.n.syslog -text " Syslog " -sticky nwes
  grid columnconfigure .c.n.syslog 0 -weight 1
}

