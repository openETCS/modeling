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
    binary scan "$data" x${offset}ix4iii nid_packet valid start end
    if {$nid_packet > 0} {
      lappend hdrs $nid_packet $start $end
      #puts "nid_packet: $nid_packet   valid: $valid   start: $start   end: $end"
    }
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
  set os [expr $offset + 60 + 30*20]
  foreach {id start end} [parseBinPktHeaders "$data" $offset] {
    set nint [expr $end -$start + 1]
    set pkts [pkts::readBinPkt $id [expr $os + 4*$start] $nint "$data"]
    if {$pkts != {}} { dict lappend msg packets $pkts }
  }
  return $msg
}

proc msgs::parseBinRadioHdr {data {offset 0}} {
  binary scan "$data" x${offset}x8iiiiiiiiiiiii  nid_message t_train m_ack nid_lrbg t_train_reference\
    nid_em q_scale d_sr t_sh_rqst d_ref q_dir d_emergencystop m_version
  return [dict create\
    nid_message $nid_message\
    t_train     $t_train\
    m_ack       $m_ack\
    nid_lrbg    $nid_lrbg\
    t_train_ref $t_train_reference\
    nid_em      $nid_em\
    q_scale     $q_scale\
    d_sr        $d_sr\
    t_sh_rqst   $t_sh_rqst\
    d_ref       $q_dir\
    q_dir       $d_emergencystop\
    m_version   $m_version\
  ]
}

proc msgs::parseBinTrainMsg {data {offset 0}} {
  set msg [parseBinTrainHdr "$data" $offset]
  set os [expr $offset + 32]
  set pkts [pkts::readBinTrainPkts $os "$data"]
  dict set msg packets "$pkts"
  return $msg
}

proc msgs::parseBinTrainHdr {data {offset 0}} {
  binary scan "$data" x${offset}x4ix4iiiii nid_message t_train nid_engine field1 field2 field3
  return [dict create\
    nid_message $nid_message\
    t_train     $t_train\
    nid_engine  $nid_engine\
    ]
}
