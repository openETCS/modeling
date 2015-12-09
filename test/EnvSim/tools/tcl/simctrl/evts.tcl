#     Project: openETCS / EnvSim
#      Module: simctrl / evts.tcl
# Description: Logs/visualizes events sent by the EnvSim (track&train messages, EVC probe data)
# 
# History:
# - 29.10.15, J. Kastner: initial version
# - 20.11.15, J. Kastner: add event log tab (ERR,RTM,SDM)
# - 21.11.15, J. Kastner: add logging of POS and TRK events
# - 22.11.15, J. Kastner: implement log+message export
package require Tk

namespace eval ::evts {
  variable tree
  variable logArea

  set showMsgTab 1
  set autoscrollMsgs 1
  set logMsg24 1
  set logMsg132 1
  set logMsg136 1

  set showLogTab 1
  set autoscrollLog 1
  set logCMD 1
  set logERR 1
  set logPOS 0
  set logRBC 1
  set logRTM 1
  set logSDM 1
  set logTRK 1

  set lastMA {}
  variable pendingMARequest 0
}

proc evts::initMsgView {path} {
  variable tree
  variable msgArea

  ttk::frame $path -padding 5

  grid [ttk::frame $path.btns -padding 3] -column 0 -row 0 -columnspan 5 -sticky w
  grid [ttk::button $path.btns.clear -text Clear -command evts::clearMsgs] -column 0 -row 0 -sticky w
  grid [ttk::button $path.btns.save -text Save -command evts::saveMsgsDialog] -column 1 -row 0 -sticky w
  grid [ttk::checkbutton $path.btns.scroll -text Autoscroll -variable evts::autoscrollMsgs -onvalue 1 -offvalue 0] -column 2 -row 0
  grid [ttk::checkbutton $path.btns.log24 -text Msg24 -variable evts::logMsg24 -onvalue 1 -offvalue 0] -column 3 -row 0
  grid [ttk::checkbutton $path.btns.log132 -text Msg132 -variable evts::logMsg132 -onvalue 1 -offvalue 0] -column 4 -row 0
  grid [ttk::checkbutton $path.btns.log136 -text Msg136 -variable evts::logMsg136 -onvalue 1 -offvalue 0] -column 5 -row 0

  grid [ttk::treeview $path.tree -columns {Position data type} -displaycolumns Position] -column 0 -row 1 -sticky ns
  set tree $path.tree
  grid [ttk::scrollbar $path.sb -command "$tree yview"] -column 1 -row 1 -sticky ns
  $tree configure -yscrollcommand "$path.sb set"
  $tree column #0 -width 100
  $tree heading #0 -text Message
  $tree column #1 -width 80
  $tree heading #1 -text "Position (m)"
  bind $tree <<TreeviewSelect>> evts::displayEvent

  grid [msgview::init $path.msgView 4 8] -column 3 -row 1 -sticky wesn

  grid columnconfigure $path 2 -minsize 5 -weight 0
  grid columnconfigure $path 3 -weight 1
  grid rowconfigure $path 1 -weight 1

}

proc evts::handleBaliseMessage {data} {
  variable tree

  binary scan "$data" dx12ix16i pos n_pig nid_bg
  logTRK "passed balise $nid_bg.$n_pig"
  set id [appendEvent "BG $nid_bg.$n_pig" $pos B "$data"]
  #set id [$tree insert {} end -text "BG $nid_bg.$n_pig" -values [list [format %.1f $pos] "$data" B] -image balise]
  if $evts::autoscrollMsgs { $tree see $id }
}

proc evts::handleRadioMessage {data} {
  variable tree

  binary scan "$data" dx8i pos nid_message
  if { $nid_message == 24 && !$evts::logMsg24 } return
  if { $nid_message == 3 } {
    handleMsg3 "$data"
  }

  set id [appendEvent "MSG $nid_message" $pos R "$data"]
  #set id [$tree insert {} end -text "MSG $nid_message" -values [list [format %.1f $pos] "$data" R] -image rmsg]
  if $evts::autoscrollMsgs { $tree see $id }
}


proc evts::handleTrainMessage {data} {
  variable tree

  binary scan "$data" dx4ix4i pos nid_message t_train
  if { $nid_message == 132 } {
    handleMsg132 "$data"
    if { !$evts::logMsg132 } return
  }
  if { $nid_message == 136 } {
    handlePosReport "$data"
    if { !$evts::logMsg136 } return
  }
  if { $nid_message == 147 } {
    handleMsg147 "$data"
  }

  set model::t_train $t_train

  set id [$tree insert {} end -text "MSG $nid_message" -values [list [format %.1f $pos] "$data" T] -image tmsg]
  if $evts::autoscrollMsgs { $tree see $id }
}


proc evts::handlePosReport {data} {
  set msg [msgs::parseBinTrainMsg "$data" 8]
  set pkt [lindex [dict get $msg packets] 0]
  foreach {k v} "$pkt" {
    switch $k {
      q_scale   { set q_scale $v }
      nid_lrbg  { set model::lrbg $v }
      m_mode    { set model::mode [enum::modeName $v] }
      m_level   { set model::level [enum::levelName $v] }
      d_lrbg    { set d_lrbg [conv::lengthInM $q_scale $v] }
      q_dirlrbg { set q_dirlrbg [enum::dirlrbgName $v] }
      v_train   { set v_train [conv::velocityInKmH $v] }
      l_doubtover { set l_doubtover [conv::lengthInM $q_scale $v] }
      l_doubtunder { set l_doubtunder [conv::lengthInM $q_scale $v] }
      q_dirtrain { set q_dirtrain [enum::dirtrainName $v] }
    }
  }

  logPOS "lrbg: $model::lrbg   d_lrbg: ${d_lrbg}m   q_dirlrbg: $q_dirlrbg   v_train: $v_train kph   q_dirtrain: $q_dirtrain   m_mode: $model::mode   m_level: $model::level   l_doubtover: ${l_doubtover}m   l_doubtunder: ${l_doubtunder}m"
}

proc evts::handleMsg3 {data} {
  variable pendingMARequest

  set pendingMARequest 0

  set evts::lastMA "$data"
  set msg [msgs::parseBinRadioMsg "$data" 8]
  set nid_lrbg [dict get $msg nid_lrbg]
  set pkt15 [lindex [dict get $msg packets] 0]
  foreach {k v} "$pkt15" {
    switch $k {
      q_scale { set q_scale $v }
      l_endsection { set l_endsection [conv::lengthInM $q_scale $v] }
      v_loa { set v_loa [conv::velocityInKmH $v] }
    }
  }
  logRBC "Sending Msg3 (MA) with nid_lrbg: $nid_lrbg   l_endsection: ${l_endsection}m   v_loa: $v_loa kph"
}

proc evts::handleMsg132 {data} {
  variable pendingMARequest

  if {! $pendingMARequest} {
    logRBC "Received Msg132 (MA Request)"
  }
  set pendingMARequest 1
}

proc evts::handleMsg147 {data} {
  logRBC "Received Msg147 (ES acknowledged) with nid_em"
}


# Appends a message to the messages tree and returns the ID of the newly create item
proc evts::appendEvent {label pos type data} {
  variable tree

  switch $type {
    B {set img balise }
    R {set img rmsg }
    T {set img tmsg }
    default { error "invalid type: $type" }
  }
  return [$tree insert {} end -text "$label" -values [list [format %.1f $pos] "$data" $type] -image $img]
}


proc evts::displayEvent {args} {
  variable tree
  variable msgArea

  set values [$tree item [$tree focus] -values]
  set data [lindex $values 1]

  switch [lindex $values 2] {
    B {
      set msg [msgs::parseBinBaliseMsg "$data" 8]
    }
    R {
      set msg [msgs::parseBinRadioMsg "$data" 8]
    }
    T {
      set msg [msgs::parseBinTrainMsg "$data" 8]
    }
  }
  msgview::loadMsg $msg [lindex $values 0]
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
  grid [ttk::button $path.btn.clear -text Clear -command evts::clearLog] -column 0 -row 0
  grid [ttk::button $path.btn.save -text Save -command evts::saveLogDialog] -column 1 -row 0
  grid [ttk::checkbutton $path.btn.autoscroll -text Autoscroll -variable evts::autoscrollLog -onvalue 1 -offvalue 1] -column 2 -row 0
  grid [ttk::frame $path.flag -padding 3] -column 0 -row 1 -columnspan 2 -sticky we
  grid [ttk::checkbutton $path.flag.logCMD -text CMD -variable evts::logCMD -onvalue 1 -offvalue 0] -column 1 -row 1
  grid [ttk::checkbutton $path.flag.logERR -text ERR -variable evts::logERR -onvalue 1 -offvalue 0] -column 2 -row 1
  grid [ttk::checkbutton $path.flag.logPOS -text POS -variable evts::logPOS -onvalue 1 -offvalue 0] -column 3 -row 1
  grid [ttk::checkbutton $path.flag.logRBC -text RBC -variable evts::logRBC -onvalue 1 -offvalue 0] -column 4 -row 1
  grid [ttk::checkbutton $path.flag.logRTM -text RTM -variable evts::logRTM -onvalue 1 -offvalue 0] -column 5 -row 1
  grid [ttk::checkbutton $path.flag.logSDM -text SDM -variable evts::logSDM -onvalue 1 -offvalue 0] -column 6 -row 1
  grid [ttk::checkbutton $path.flag.logTRK -text TRK -variable evts::logTRK -onvalue 1 -offvalue 0] -column 7 -row 1
  # Log area
  grid [tk::text $path.text -height 10 -state disabled -wrap none] -column 0 -row 2 -sticky wesn
  set logArea $path.text
  grid [ttk::scrollbar $path.ysb -command "$logArea yview"] -column 1 -row 2 -sticky ns
  $logArea configure -yscrollcommand "$path.ysb set"
  grid [ttk::scrollbar $path.xsb -orient horizontal -command "$logArea xview"] -column 0 -row 3 -sticky we
  $logArea configure -xscrollcommand "$path.xsb set"

  grid columnconfigure $path 0 -weight 1
  grid rowconfigure $path 2 -weight 1

  $logArea tag configure error -foreground red
}

proc evts::logTRK {msg} {
  if $evts::logTRK {
    logEvent TRK "$msg"
  }
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

proc evts::logPOS {msg} {
  if $evts::logPOS {
    logEvent POS "$msg"
  }
}

proc evts::logRBC {msg} {
  if $evts::logRBC {
    logEvent RBC "$msg"
  }
}

proc evts::logCMD {msg} {
  if $evts::logCMD {
    logEvent CMD "$msg"
  }
}

proc evts::logEvent {src msg {tag ""}} {
  variable logArea

  $logArea configure -state normal
  $logArea insert end "\[~ [format "% 5s" $model::currentPos]m $src\] $msg\n" $tag
  $logArea configure -state disabled
  if $evts::autoscrollLog { $logArea see end }

}

proc evts::clearLog {} {
  variable logArea

  $logArea configure -state normal
  $logArea delete 1.0 end
  $logArea configure -state disabled
}


proc evts::saveLogDialog {} {
  set types {
    {"Log Files" .log}
  }

  set file [tk_getSaveFile -filetypes $types]

  if {$file != ""} {
    evts::saveLog "$file"
  }

}

proc evts::saveLog {path} {
  variable logArea

  if {! [string match "*.log" $path]} {
    set path "$path.log"
  }

  set f [open $path w]
  puts $f [$logArea get 1.0 end]
  close $f
}


proc evts::saveMsgsDialog {} {
  set types {
    {"Track Log Files" .trk}
  }

  set file [tk_getSaveFile -filetypes $types]

  if {$file != ""} {
    evts::saveMsgs "$file"
  }

}


proc evts::saveMsgs {path {includeLog false}} {
  variable tree

  if {! [string match "*.trk" $path]} {
    set path "$path.trk"
  }

  set fd [open "$path" w]

  foreach id [$tree children {}] {
    set values [$tree item $id -values]
    set data "[lindex $values 1]"
    set bytes [util::bytes2hex "$data" 8]
    switch [lindex $values 2] {
      B {
        puts $fd "track::balise raw $bytes"
        puts $fd "track::add balise [lindex $values 0]"
      }
      R {
        puts $fd "track::radio raw $bytes"
        puts $fd "track::add radio [lindex $values 0]"
      }
      T {
        puts $fd "track::train raw $bytes"
        puts $fd "track::add train [lindex $values 0]"
      }
    }
  }

  close $fd
}
