#     Project: openETCS / EnvSim
#      Module: tcl / lib / msgs.tcl
# Description: Common functions for handling of compressed message data (balise, radio)
# 
# History:
# - 29.10.15, J. Kastner: initial version
# - 03.11.15, J. Kastner: add parsing of binary readio messages
source "[file dirname [info script]]/packets.tcl"

namespace eval ::msgs {
}

proc msgs::parseBinPktHeaders {data {offset 0}} {
  set hdrs {}
  for {set i 0; incr offset 40} {$i < 30} {incr i; incr offset 20} {
    binary scan "$data" x${offset}ix8ii nid_packet start end
    if {$nid_packet > 0} {lappend hdrs $nid_packet $start $end}
  }
  return $hdrs
}

proc msgs::parseBinBaliseMsg {data {offset 0}} {
  set msg [parseBinBaliseHdr "$data" $offset]
  set os [expr $offset + 40 + 30*20]
  foreach {id start end} [parseBinPktHeaders "$data" $offset] {
    set nint [expr $end - $start + 1]
    set pkts [pkts::readBinPkt $id [expr $os + 4*$start] $nint "$data"]
    if {$pkts != {}} { dict lappend msg packets $pkts }
  }
  return $msg
}

proc msgs::parseBinBaliseHdr {data {offset 0}} {
  binary scan "$data" x${offset}iiiiiiiiii q_updown m_version q_media n_pig n_total m_dup m_count nid_c nid_bg q_link
  return [dict create q_updown $q_updown m_version $m_version q_media $q_media n_pig $n_pig\
    n_total $n_total m_dup $m_dup m_count $m_count nid_c $nid_c nid_bg $nid_bg q_link $q_link]
}

proc msgs::parseBinRadioMsg {data {offset 0}} {
  set msg [parseBinRadioHdr "$data" $offset]
  return $msg
}

proc msgs::parseBinRadioHdr {data {offset 0}} {
  binary scan "$data" x${offset}iii  radioDevice receivedSysTime nid_message
  return [dict create radioDevice $radioDevice\
    receivedSysTime $receivedSysTime\
    nid_message $nid_message\
    ]
}
