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
}

proc evts::initView {path} {
  variable tree
  variable area

  ttk::frame $path -padding 5

  grid [ttk::frame $path.btns -padding 3] -column 0 -row 0 -columnspan 5 -sticky w
  grid [ttk::button $path.btns.clear -text Clear -command evts::clear] -column 0 -row 0 -sticky w

  grid [ttk::treeview $path.tree -columns {Position data} -displaycolumns Position] -column 0 -row 1
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
}

proc evts::handleBaliseMessage {data} {
  variable tree

  binary scan $data dx32i pos nid_bg
  $tree insert {} end -text "BG $nid_bg" -values "[format %.1f $pos] $data"
}

proc evts::handleRadioMessage {data} {
  variable tree

  binary scan $data d pos
  $tree insert {} end -text "MSG" -values "[format %.1f $pos] $data"
}


proc evts::displayEvent {args} {
  variable tree
  variable area

  set values [$tree item [$tree focus] -values]
  set data [lindex $values 1]
  set msg [msgs::parseBinBaliseHdr $data 8]

  $area configure -state normal
  $area delete 1.0 end
  displayBaliseData [lindex $values 0] $msg
  $area configure -state disabled
}

proc evts::displayBaliseData {pos data} {
  variable area

  $area insert end "BG [dict get $data nid_bg] @$pos m\n"\
    "  q_updown: [dict get $data q_updown]\n"\
    "   q_media: [dict get $data q_media]\n"\
    "     n_pig: [dict get $data n_pig]\n"\
    "   n_total: [dict get $data n_total]\n"\
    "     m_dup: [dict get $data m_dup]\n"\
    "   m_count: [dict get $data m_count]\n"\
    "   m_count: [dict get $data m_count]\n"\
    "     nid_c: [dict get $data nid_c]\n"\
    "    nid_bg: [dict get $data nid_bg]\n"\
    "    q_link: [dict get $data q_link]\n"

}

proc evts::clear {} {
  variable tree

  $tree delete [$tree children {}]
}
