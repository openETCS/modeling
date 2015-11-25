#     Project: openETCS / EnvSim
#      Module: tcl / lib / msgs.tcl
# Description: Common functions for handling of compressed message data (balise, radio)
# 
# History:
# - 29.10.15, J. Kastner: initial version
# - 03.11.15, J. Kastner: add parsing of binary readio messages
# - 24.11.15, J. Kastner: add headerVars
source "[file dirname [info script]]/packets.tcl"

namespace eval ::msgs {
  set headerVars [dict create\
      2 {t_train m_ack nid_lrbg q_scale d_sr}\
      3 {t_train m_ack nid_lrbg}\
      6 {t_train m_ack nid_lrbg}\
      8 {t_train m_ack nid_lrbg t_train_ref}\
      9 {t_train m_ack nid_lrbg}\
     15 {t_train m_ack nid_lrbg nid_em q_scale d_ref q_dir d_emergencystop}\
     16 {t_train m_ack nid_lrbg nid_em}\
     18 {t_train m_ack nid_lrbg nid_em}\
     24 {t_train m_ack nid_lrbg}\
     27 {t_train m_ack nid_lrbg t_train_ref}\
     28 {t_train m_ack nid_lrbg t_train_ref}\
     32 {t_train m_ack nid_lrbg m_version}\
     33 {t_train m_ack nid_lrbg q_scale d_ref}\
    129 {t_train nid_engine}\
    130 {t_train nid_engine}\
    132 {t_train nid_engine q_marqstreason}\
    136 {t_train nid_engine}\
    137 {t_train nid_engine t_train_ref}\
    138 {t_train nid_engine t_train_ref}\
    146 {t_train nid_engine}\
    147 {t_train nid_engine nid_em q_emergencystop}\
    149 {t_train nid_engine}\
    150 {t_train nid_enigne}\
    155 {t_train nid_engine}\
    156 {t_train nid_engine}\
    157 {t_train nid_engine q_status}\
    158 {t_train nid_engine nid_textmessage}\
    159 {t_train nid_engine}\
  ]
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
  dict set msg packets {}
  dict set msg type B
  set os [expr $offset + 40 + 30*20]
  foreach {id start end} [parseBinPktHeaders "$data" $offset] {
    set nint [expr $end - $start + 1]
    set pkts [pkts::readBinPkt $id [expr $os + 4*$start] $nint "$data"]
    if {$pkts != {}} { dict lappend msg packets $pkts }
  }
  return $msg
}

proc msgs::parseBinBaliseHdr {data {offset 0}} {
  binary scan "$data" x${offset}iiiiiiiiii q_updown m_version q_media n_pig n_total m_dup m_mcount nid_c nid_bg q_link
  return [dict create q_updown $q_updown m_version $m_version q_media $q_media n_pig $n_pig\
    n_total $n_total m_dup $m_dup m_mcount $m_mcount nid_c $nid_c nid_bg $nid_bg q_link $q_link]
}

proc msgs::parseBinRadioMsg {data {offset 0}} {
  set msg [parseBinRadioHdr "$data" $offset]
  dict set msg packets {}
  dict set msg type R
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
    d_ref       $d_ref\
    q_dir       $q_dir\
    d_emergencystop $d_emergencystop\
    m_version   $m_version\
  ]
}

proc msgs::parseBinTrainMsg {data {offset 0}} {
  set msg [parseBinTrainHdr "$data" $offset]
  dict set msg packets {}
  dict set msg type T
  set os [expr $offset + 32]
  set pkts [pkts::readBinTrainPkts $os "$data"]
  dict set msg packets "$pkts"
  return $msg
}

proc msgs::parseBinTrainHdr {data {offset 0}} {
  binary scan "$data" x${offset}x4ix4iiiii nid_message t_train nid_engine field1 field2 field3
  set hdr [dict create\
    nid_message $nid_message\
    t_train     $t_train\
    nid_engine  $nid_engine\
    ]
  switch [dict get $hdr nid_message] {
    132 { dict set hdr q_marqstreason $field1 }
    137 { dict set hdr t_train_ref $field1 }
    138 { dict set hdr t_train_ref $field1 }
    147 { dict set hdr nid_em $field1; dict set hdr q_emergencystop $field2 }
  }

  return $hdr
}
