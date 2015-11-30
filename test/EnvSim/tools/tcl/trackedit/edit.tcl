#     Project: openETCS / EnvSim
#      Module: trackedit / edit.tcl
# Description: Provides editing functions for trackedit
# 
# History:
# - 26.11.15, J. Kastner: initial version

namespace eval ::edit {
  # if true, allow editing of the current track
  set active 0
}

proc edit::checkEdit {} {
  if {! $edit::active} {
    error "cannot modify track (set View->Editable first)"
  }
}

proc edit::getBaliseBuf {} {
  return [util::bytes2hex [track::balise get bytes]]
}

proc edit::setBaliseBuf {hex} {
  checkEdit
  track::balise raw $hex
}

proc edit::addRMSG {pos header args} {
  track::radio clear
  track::radio set header $header
  set pkts {}
  foreach p $args {
    foreach q [pkts::encodePacket $p] {
      lappend pkts $q
    }
  }
  foreach p $pkts {
    addRadioPkt {*}$p
  }
  track::add radio $pos
}

proc edit::addBG {pos dpos nid_bg q_link args} {
  addBalise $pos "nid_bg $nid_bg n_pig 0 m_dup 1 q_link $q_link n_total 1 nid_c 426 m_version 16 q_media 0 m_mcount 255 q_updown 1" {*}$args
  addBalise [expr $pos+$dpos] "nid_bg $nid_bg n_pig 1 m_dup 2 q_link $q_link n_total 1 nid_c 426 m_version 16 q_media 0 m_mcount 255 q_updown 1" {*}$args
}

proc edit::addBalise {pos header args} {
  track::balise clear
  track::balise set header $header
  set pkts {}
  foreach p $args {
    foreach q [pkts::encodePacket $p] {
      lappend pkts $q
    }
  }
  foreach p $pkts {
    addBalisePkt {*}$p
  }
  addBalisePkt 255 2 32 0 {255}
  track::add balise $pos
}


proc edit::addBalisePkt {nid_packet q_dir version subindex data} {
  checkEdit
  set nid [pkts::calcMetaNid $nid_packet $q_dir $version $subindex]
  track::balise addpkt $nid [util::intlist2hex $data]
} 

proc edit::addRadioPkt {nid_packet q_dir version subindex data} {
  checkEdit
  set nid [pkts::calcMetaNid $nid_packet $q_dir $version $subindex]
  track::radio addpkt $nid [util::intlist2hex $data]
} 
