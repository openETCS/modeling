#     Project: openETCS / EnvSim
#      Module: simctrl / evts.tcl
# Description: Logs/visualizes events sent by the EnvSim (track&train messages)
# 
# History:
# - 29.10.15, J. Kastner: initial version
package require Tk

namespace eval ::evts {
  variable tree
  variable area

  set autoscroll 1
  set logMsg24 0
  set logMsg132 0
  set logMsg136 0
}

proc evts::initView {path} {
  variable tree
  variable area

  ttk::frame $path -padding 5

  grid [ttk::frame $path.btns -padding 3] -column 0 -row 0 -columnspan 5 -sticky w
  grid [ttk::button $path.btns.clear -text Clear -command evts::clear] -column 0 -row 0 -sticky w
  grid [ttk::checkbutton $path.btns.scroll -text Autoscroll -variable evts::autoscroll -onvalue 1 -offvalue 0] -column 1 -row 0
  grid [ttk::checkbutton $path.btns.log24 -text Msg24 -variable evts::logMsg24 -onvalue 1 -offvalue 0] -column 2 -row 0
  grid [ttk::checkbutton $path.btns.log132 -text Msg132 -variable evts::logMsg132 -onvalue 1 -offvalue 0] -column 3 -row 0
  grid [ttk::checkbutton $path.btns.log136 -text Msg136 -variable evts::logMsg136 -onvalue 1 -offvalue 0] -column 4 -row 0

  grid [ttk::treeview $path.tree -columns {Position data type} -displaycolumns Position] -column 0 -row 1
  set tree $path.tree
  grid [ttk::scrollbar $path.sb -command "$tree yview"] -column 1 -row 1 -sticky ns
  $tree configure -yscrollcommand "$path.sb set"
  $tree column #0 -width 100
  $tree heading #0 -text Message
  $tree column #1 -width 80
  $tree heading #1 -text "Position (m)"
  bind $tree <<TreeviewSelect>> evts::displayEvent

  grid [tk::text $path.area -state disabled -height 10 -width 40] -column 3 -row 1 -sticky wesn
  set area $path.area
  grid [ttk::scrollbar $path.asb -command "$path.area yview"] -column 4 -row 1 -sticky ns
  $area configure -yscrollcommand "$path.asb set"

  grid columnconfigure $path 2 -minsize 5 -weight 0
  grid columnconfigure $path 3 -weight 1

  $area tag configure title -font "TkFixedFont 10 bold"
}

proc evts::handleBaliseMessage {data} {
  variable tree

  binary scan "$data" dx12ix16i pos n_pig nid_bg
  set id [$tree insert {} end -text "BG $nid_bg.$n_pig" -values [list [format %.1f $pos] "$data" B] -image balise]
  if $evts::autoscroll { $tree see $id }
}

proc evts::handleRadioMessage {data} {
  variable tree

  binary scan "$data" dx8i pos nid_message
  if { $nid_message == 24 && !$evts::logMsg24 } return

  set id [$tree insert {} end -text "MSG $nid_message" -values [list [format %.1f $pos] "$data" R] -image rmsg]
  if $evts::autoscroll { $tree see $id }
}

proc evts::handleTrainMessage {data} {
  variable tree

  binary scan "$data" dx4i pos nid_message
  if { $nid_message == 132 && !$evts::logMsg132 } return
  if { $nid_message == 136 && !$evts::logMsg136 } return

  set id [$tree insert {} end -text "MSG $nid_message" -values [list [format %.1f $pos] "$data" T] -image tmsg]
  if $evts::autoscroll { $tree see $id }
}

proc evts::displayEvent {args} {
  variable tree
  variable area

  $area configure -state normal
  $area delete 1.0 end

  set values [$tree item [$tree focus] -values]
  set data [lindex $values 1]
  switch [lindex $values 2] {
    B {
      set msg [msgs::parseBinBaliseMsg "$data" 8]
      displayBaliseData [lindex $values 0] $msg
    }
    R {
      set msg [msgs::parseBinRadioMsg "$data" 8]
      displayRadioData [lindex $values 0] $msg
    }
    T {
      set msg [msgs::parseBinTrainMsg "$data" 8]
      displayTrainData [lindex $values 0] $msg
    }
  }

  $area configure -state disabled
}

proc evts::displayBaliseData {pos msg} {
  variable area

  $area insert end "BG [dict get $msg nid_bg] @$pos m\n" title
  $area insert end "  q_updown: [dict get $msg q_updown]\n"
  $area insert end "   q_media: [dict get $msg q_media]\n"
  $area insert end "     n_pig: [dict get $msg n_pig]\n"
  $area insert end "   n_total: [dict get $msg n_total]\n"
  $area insert end "     m_dup: [dict get $msg m_dup]\n"
  $area insert end "   m_count: [dict get $msg m_count]\n"
  $area insert end "     nid_c: [dict get $msg nid_c]\n"
  $area insert end "    nid_bg: [dict get $msg nid_bg]\n"
  $area insert end "    q_link: [dict get $msg q_link]\n\n"

  if [dict exists $msg packets] {
    displayPackets [dict get $msg packets]
  }
}

proc evts::displayRadioData {pos msg} {
  variable area

  $area insert end "MSG [dict get $msg nid_message] @$pos m\n" title

  dict for {k v} $msg {
    if {$k != {packets}} {
      $area insert end "  [format %15s $k]: $v\n"
    }
  }
  $area insert end "\n"

  if [dict exists $msg packets] {
    displayPackets [dict get $msg packets]
  }
}

proc evts::displayTrainData {pos msg} {
  variable area

  $area insert end "MSG [dict get $msg nid_message] @$pos m\n" title

  dict for {k v} $msg {
    if {$k != {packets}} {
      $area insert end "  [format %15s $k]: $v\n"
    }
  }
  $area insert end "\n"

  if [dict exists $msg packets] {
    displayPackets [dict get $msg packets]
  }
}

proc evts::displayPackets {pkts} {
  variable area
  
  set i 0

  foreach pkt $pkts {
    $area insert end "$i) Pkt[format %03d [dict get $pkt nid_packet]]\n" subtitle
    incr i
    dict for {k v} $pkt {
      $area insert end "  [format %15s $k]: $v\n"
    }
    $area insert end "\n"
  }
}

proc evts::clear {} {
  variable tree

  $tree delete [$tree children {}]
}
