#     Project: openETCS / EnvSim
#      Module: trackedit / view.tcl
# Description: Main UI view for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version
# - 30.09.15, J. Kastner: implement display of packet information
# - 25.11.15, J. Kastner: switch to msgview
package require Tk

namespace eval ::view {
}


proc view::init {} {
  option add *tearOff 0

  wm title . "openETCS TrackViewer"

  grid [ttk::frame .c -padding 10] -sticky nwes
  grid rowconfigure .c 1 -minsize 5 -weight 0


  ### MENU ###
  menu .menubar
  set m .menubar
#  if $view::isOSX {
#    .menubar add cascade -menu [menu .menubar.apple] -label TrackEdit
#    .menubar.apple add command -label "About My Application"
#  }
  # File
  menu $m.file
  $m add cascade -menu $m.file -label File
  $m.file add command -label "Open Track" -command "view::openTrackDialog"
  $m.file add command -label "Save Track" -command "view::saveTrackDialog"
  $m.file add command -label "Run Script" -command "view::runScriptDialog"

  # Edit
  menu $m.edit
  $m add cascade -menu $m.edit -label Edit
  $m.edit add checkbutton -label "Editable" -variable edit::active -onvalue 1 -offvalue 0

  # View
  menu $m.view
  $m add cascade -menu $m.view -label View
  $m.view add command -label "Console" -command ctrl::showConsole

  # Tools
  #menu $m.tools
  #$m add cascade -menu $m.tools -label Tools
  #$m.tools add command -label "Check linking" -command "link::check"

  . configure -menu .menubar

  ### HEAD FRAME ###
  grid [ttk::frame .c.head] -column 0 -columnspan 2 -sticky we
  ui::addLabelField .c.head.title Track: model::title 0 0 true 40


  ### TREE VIEW ###
  grid [ttk::frame .c.nav -padding "0 0 5 0"] -column 0 -row 2 -sticky ns 
  grid rowconfigure .c.nav 0 -weight 1
  grid [ttk::treeview .c.nav.tree -columns Position -height 20] -column 0 -row 0 -sticky ns
  set tree .c.nav.tree
  grid [ttk::scrollbar .c.nav.sb -command "$tree yview"] -column 1 -row 0 -sticky ns
  $tree configure -yscrollcommand ".c.nav.sb set"
  $tree column  #0 -width 110
  $tree heading #0 -text ID
  $tree column  #1 -width 110
  $tree heading #1 -text Position
  bind $tree <<TreeviewSelect>> ctrl::onTreeSelect


  ### DATA PANEL ###
  grid [msgview::init .c.d] -column 1 -row 2 -sticky nwes

}


proc view::openTrackDialog {} {
  set types {
    {{openETCS Track Files} {.trk}}
  }
  set filename [tk_getOpenFile -filetypes $types]

  if {$filename != ""} {
    ctrl::openTrack "$filename"
  }
}


proc view::saveTrackDialog {} {
  set types {
    {{openETCS Track Files} {.trk}}
  }
  set filename [tk_getSaveFile -filetypes $types]

  if {$filename != ""} {
    model::saveTrack "$filename"
  }
}


proc view::runScriptDialog {} {
  set types {
    {{Tcl scripts} {.tcl}}
  }
  set filename [tk_getOpenFile -filetypes $types]

  if {$filename != ""} {
    ctrl::runScript "$filename"
  }
}

