#     Project: openETCS / EnvSim
#      Module: trackedit / view.tcl
# Description: Main UI view for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version
# - 30.09.15, J. Kastner: implement display of packet information
package require Tk

namespace eval ::view {
  set idValue ""
  set posValue ""
  variable packetFrame
  variable tabPackets
  # dict with data entries of the currently selected packet
  variable packetData
}


proc view::init {} {
  variable tabPackets
  variable packetFrame
  variable packetdata
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
  grid [ttk::frame .c.d] -column 1 -row 2 -sticky nwes
  grid columnconfigure .c.d 2 -minsize 20
  # message ID
  ui::addLabelField .c.d.id ID: view::idValue 0 0 true
  # position
  ui::addLabelField .c.d.pos Position: view::posValue 3 0 true
  # notebook with "Header" and "Packets"
  grid [ttk::notebook .c.d.n] -column 0 -columnspan 5 -row 1 -sticky wens
  grid rowconfigure .c.d 1 -weight 1
  set notebook .c.d.n 

  # Tab "Header"
  set tabHeaders $notebook.headers
  ttk::frame $tabHeaders
  $notebook add $tabHeaders -text Header
  grid [ttk::treeview $tabHeaders.tree -columns Value] -sticky ns
  set headers $tabHeaders.tree
  grid rowconfigure $tabHeaders 0 -weight 1
  $headers heading #0 -text Header
  $headers heading #1 -text Value

  # Tab "Packets"
  set tabPackets $notebook.packets
  ttk::frame $tabPackets
  $notebook add $tabPackets -text Packets
  grid [ttk::treeview $tabPackets.tree -columns {nid_packet q_dir m_version name}] -column 0 -row 0 -sticky we
  grid columnconfigure $tabPackets 0 -weight 1
  set packetinfo $tabPackets.tree
  $packetinfo heading #0 -text #
  $packetinfo column #0 -width 30 -stretch false
  $packetinfo heading #1 -text Id
  $packetinfo column #1 -width 30 -stretch false
  $packetinfo heading #2 -text Dir.
  $packetinfo column #2 -width 30 -stretch false
  $packetinfo heading #3 -text Ver.
  $packetinfo column #3 -width 30 -stretch false
  $packetinfo heading #4 -text Name
  #$packetinfo column #3
  bind $packetinfo <<TreeviewSelect>> ctrl::onPacketTreeSelect
  grid [ttk::scrollbar $tabPackets.tree_sb -command "$packetinfo yview"] -column 1 -row 0 -sticky ns
  $packetinfo configure -yscrollcommand "$tabPackets.tree_sb set"
  
  grid [ttk::label $tabPackets.l -text "No packet selected" -font TkCaptionFont] -column 0 -row 1 -sticky w

  grid [ttk::treeview $tabPackets.data -columns value] -column 0 -row 2 -sticky we
  set dataTree $tabPackets.data
  $dataTree heading #0 -text Variable
  $dataTree heading #1 -text Value
  grid [ttk::scrollbar $tabPackets.data_sb -command "$dataTree yview"] -column 1 -row 2 -sticky ns
  $dataTree configure -yscrollcommand "$tabPackets.data_sb set"
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


