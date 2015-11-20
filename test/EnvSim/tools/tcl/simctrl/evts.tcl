#     Project: openETCS / EnvSim
#      Module: simctrl / evts.tcl
# Description: Logs/visualizes events sent by the EnvSim (track&train messages, EVC probe data)
# 
# History:
# - 29.10.15, J. Kastner: initial version
package require Tk

namespace eval ::evts {
  variable tree
  variable msgArea
  variable logArea

  set autoscroll 1
  set logMsg24 0
  set logMsg132 0
  set logMsg136 0

  set showLogTab 1
  set logERR 1
  set logRTM 1
  set logSDM 1
}

proc evts::initMsgView {path} {
  variable tree
  variable msgArea

  ttk::frame $path -padding 5

  grid [ttk::frame $path.btns -padding 3] -column 0 -row 0 -columnspan 5 -sticky w
  grid [ttk::button $path.btns.clear -text Clear -command evts::clearMsgs] -column 0 -row 0 -sticky w
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

  grid [tk::text $path.msgArea -state disabled -height 10 -width 40] -column 3 -row 1 -sticky wesn
  set msgArea $path.msgArea
  grid [ttk::scrollbar $path.asb -command "$path.msgArea yview"] -column 4 -row 1 -sticky ns
  $msgArea configure -yscrollcommand "$path.asb set"

  grid columnconfigure $path 2 -minsize 5 -weight 0
  grid columnconfigure $path 3 -weight 1

  $msgArea tag configure title -font "TkFixedFont 10 bold"
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
  variable msgArea

  $msgArea configure -state normal
  $msgArea delete 1.0 end

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

  $msgArea configure -state disabled
}

proc evts::displayBaliseData {pos msg} {
  variable msgArea

  $msgArea insert end "BG [dict get $msg nid_bg] @$pos m\n" title
  $msgArea insert end "  q_updown: [dict get $msg q_updown]\n"
  $msgArea insert end "   q_media: [dict get $msg q_media]\n"
  $msgArea insert end "     n_pig: [dict get $msg n_pig]\n"
  $msgArea insert end "   n_total: [dict get $msg n_total]\n"
  $msgArea insert end "     m_dup: [dict get $msg m_dup]\n"
  $msgArea insert end "   m_count: [dict get $msg m_count]\n"
  $msgArea insert end "     nid_c: [dict get $msg nid_c]\n"
  $msgArea insert end "    nid_bg: [dict get $msg nid_bg]\n"
  $msgArea insert end "    q_link: [dict get $msg q_link]\n\n"

  if [dict exists $msg packets] {
    displayPackets [dict get $msg packets]
  }
}

proc evts::displayRadioData {pos msg} {
  variable msgArea

  $msgArea insert end "MSG [dict get $msg nid_message] @$pos m\n" title

  dict for {k v} $msg {
    if {$k != {packets}} {
      $msgArea insert end "  [format %15s $k]: $v\n"
    }
  }
  $msgArea insert end "\n"

  if [dict exists $msg packets] {
    displayPackets [dict get $msg packets]
  }
}

proc evts::displayTrainData {pos msg} {
  variable msgArea

  $msgArea insert end "MSG [dict get $msg nid_message] @$pos m\n" title

  dict for {k v} $msg {
    if {$k != {packets}} {
      $msgArea insert end "  [format %15s $k]: $v\n"
    }
  }
  $msgArea insert end "\n"

  if [dict exists $msg packets] {
    displayPackets [dict get $msg packets]
  }
}

proc evts::displayPackets {pkts} {
  variable msgArea
  
  set i 0

  foreach pkt $pkts {
    $msgArea insert end "$i) Pkt[format %03d [dict get $pkt nid_packet]]\n" subtitle
    incr i
    dict for {k v} $pkt {
      $msgArea insert end "  [format %15s $k]: $v\n"
    }
    $msgArea insert end "\n"
  }
}

proc evts::clearMsgs {} {
  variable tree

  $tree delete [$tree children {}]
}


proc evts::initLogView {path} {
  variable logArea

  ttk::frame $path -padding 5
  # Buttons
  grid [ttk::frame $path.btn -padding 3] -column 0 -row 0 -columnspan 2 -sticky we
  grid [ttk::button $path.btn.clear -text Clear -command evts::clearLog] -column 0
  grid [ttk::checkbutton $path.btn.logERR -text ERR -variable evts::logERR -onvalue 1 -offvalue 0] -column 1 -row 0
  grid [ttk::checkbutton $path.btn.logRTM -text RTM -variable evts::logRTM -onvalue 1 -offvalue 0] -column 2 -row 0
  grid [ttk::checkbutton $path.btn.logSDM -text SDM -variable evts::logSDM -onvalue 1 -offvalue 0] -column 3 -row 0
  # Log area
  grid [tk::text $path.text -height 10 -state disabled -wrap none] -column 0 -row 1 -sticky wesn
  set logArea $path.text
  grid [ttk::scrollbar $path.ysb -command "$logArea yview"] -column 1 -row 1 -sticky ns
  $logArea configure -yscrollcommand "$path.ysb set"
  grid [ttk::scrollbar $path.xsb -orient horizontal -command "$logArea xview"] -column 0 -row 2 -sticky we
  $logArea configure -xscrollcommand "$path.xsb set"

  grid columnconfigure $path 0 -weight 1
  grid rowconfigure $path 0 -weight 0
  grid rowconfigure $path 1 -weight 1

  $logArea tag configure error -foreground red
}

proc evts::logRTM {msg} {
  if $evts::logRTM {
    logEvent RTM "$msg"
  }
}

proc evts::logSDM {msg} {
  if $evts::logSDM {
    logEvent SDM "$msg"
  }
}

proc evts::logERR {msg} {
  if $evts::logERR {
    logEvent ERR "$msg" error
  }
}

proc evts::logEvent {src msg {tag ""}} {
  variable logArea

  $logArea configure -state normal
  $logArea insert end "\[~ [format "% 5s" $model::currentPos]m $src\] $msg\n" $tag
  $logArea configure -state disabled
  $logArea see end

}

proc evts::clearLog {} {
  variable logArea

  $logArea configure -state normal
  $logArea delete 1.0 end
  $logArea configure -state disabled
}
