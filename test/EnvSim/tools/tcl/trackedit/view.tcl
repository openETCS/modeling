#     Project: openETCS / EnvSim
#      Module: trackedit / view.tcl
# Description: Main UI view for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version
package require Tk

namespace eval ::view {
  set idValue ""
  set posValue ""
}

proc view::addLabelField {path label var col row} {
  grid [ttk::label ${path}_l -text $label] -column $col -row $row
  grid [ttk::entry ${path}_v -textvariable $var] -column [expr $col + 1] -row $row
}


proc view::init {} {
  option add *tearOff 0

  wm title . "openETCS TrackEditor"

  grid [ttk::frame .c -padding 10] -sticky nwes


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

  . configure -menu .menubar

  ### TREE VIEW ###
  grid [ttk::frame .c.nav -padding "0 0 5 0"] -column 0 -row 0 -sticky ns 
  grid [ttk::treeview .c.nav.tree -columns Position -height 20] -column 0 -row 0 -sticky ns
  set tree .c.nav.tree
  grid [ttk::scrollbar .c.nav.sb -command "$tree yview"] -column 1 -row 0 -sticky ns
  $tree configure -yscrollcommand ".c.nav.sb set"
  $tree column  #0 -width 100
  $tree heading #0 -text ID
  $tree column  #1 -width 100
  $tree heading #1 -text Position
  bind $tree <<TreeviewSelect>> ctrl::onTreeSelect


  ### DATA PANEL ###
  grid [ttk::frame .c.d] -column 1 -row 0 -sticky nwes
  grid columnconfigure .c.d 2 -minsize 20
  # message ID
  addLabelField .c.d.id ID: view::idValue 0 0
  # position
  addLabelField .c.d.pos Position: view::posValue 3 0
  # notebook with "Header" and "Packets"
  grid [ttk::notebook .c.d.n] -column 0 -columnspan 5 -row 1
  set notebook .c.d.n 
  # tab "Header"
  set tabHeaders $notebook.headers
  ttk::frame $tabHeaders
  $notebook add $tabHeaders -text Header
  grid [ttk::treeview $tabHeaders.tree -columns Value]
  set headers $tabHeaders.tree
  $headers heading #0 -text Header
  $headers heading #1 -text Value
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
