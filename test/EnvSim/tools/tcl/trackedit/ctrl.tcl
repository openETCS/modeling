#     Project: openETCS / EnvSim
#      Module: trackedit / ctrl.tcl
# Description: UI view controller for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version

namespace eval ::ctrl {
  variable tree .c.nav.tree
  variable headersTable .c.d.n.headers.tree
  variable packetInfoTable .c.d.n.packets.tree
  variable packetDataTable .c.d.n.packets.data
  variable packetDataLabel .c.d.n.packets.l
}


proc ctrl::openTrack {filename} {
  source $filename
  set model::title [track::title]
  loadTree
}


proc ctrl::loadTree {} {
  variable tree
  $tree delete [$tree children {}]
  foreach msg [model::getMessageList] {
    $tree insert {} end -id [lindex $msg 0] -text [lindex $msg 1] -values [lindex $msg 2] -image [lindex $msg 3]
  }
}

proc ctrl::showData {id} {
  variable tree

  set pos [$tree set $id Position]
  set msg [model::getMessage $id]
  switch [dict get $msg type] {
    b { showBaliseData $msg $pos }
    r { showRadioData $msg $pos }
    t { showTrainData $msg $pos }
    default { error "invalid message type" }
  }
}


proc ctrl::showBaliseData {msg pos} {
  variable headersTable

  set view::idValue "BG [dict get $msg header nid_bg].[dict get $msg header n_pig]"
  set view::posValue $pos
  # update headers table
  $headersTable delete [$headersTable children {}]
  dict for {k v} [dict get $msg header] {
    $headersTable insert {} end -id $k -text $k -values $v
  }

  updatePacketTable [dict get $msg packetinfo]
}


proc ctrl::showRadioData {msg pos} {
  variable headersTable

  set view::idValue "MSG [format %02i [dict get $msg header nid_message]]"
  set view::posValue $pos
  # update headers table
  $headersTable delete [$headersTable children {}]
  dict for {k v} [dict get $msg header] {
    $headersTable insert {} end -id $k -text $k -values $v
  }

  updatePacketTable [dict get $msg packetinfo]
}


proc ctrl::showTrainData {msg pos} {
  variable headersTable
  variable packetInfoTable

  set view::idValue "MSG [dict get $msg nid_message]"
  set view::posValue $pos

  $headersTable delete [$headersTable children {}]
  $packetInfoTable delete [$packetInfoTable children {}]
}


proc ctrl::updatePacketTable {data} {
  variable packetInfoTable

  $packetInfoTable delete [$packetInfoTable children {}]
  foreach pkt $data {
    set index [lindex $pkt 1]
    set nid_packet [lindex $pkt 3]
    switch [lindex $pkt 9] {
      0 {set q_dir R}
      1 {set q_dir N}
      2 {set q_dir B}
      default {set q_dir X}
    }
    set m_version [lindex $pkt 11]
    set subindex [lindex $pkt 13]
    set name [list [pkts::packetName $nid_packet]]

    if {$subindex==0 || $subindex==255} {
      $packetInfoTable insert {} end -id $index -text $index -values "$nid_packet $q_dir $m_version $name"
    }
  }
}

proc ctrl::onTreeSelect {} {
  variable tree
  variable packetDataTable
  variable packetDataLabel

  showData [$tree focus]
  $packetDataLabel configure -text "No packet selected"
  $packetDataTable delete [$packetDataTable children {}]
}


proc ctrl::onPacketTreeSelect {} {
  variable packetInfoTable

  set itemid [$packetInfoTable focus]
  set mversion [lindex [$packetInfoTable item $itemid -values] 2]
  set data [pkts::get data $itemid]
  switch [lindex $data 0]:$mversion {
     3:16 { showPacket [pkts::readP003v1 "$data"] }
     5:32 { showPacket [pkts::readP005 "$data"] }
    15:32 { showPacket [pkts::readP015 "$data"] }
    21:32 { showPacket [pkts::readP021 "$data"] }
    27:16 { 
      set npackets [expr [lindex $data 4] + 1]
      set data [concat $data [pkts::get data [expr $itemid + 1] $npackets]]
      showPacket [pkts::readP027v1 "$data"]
    }
    41:32 { showPacket [pkts::readP041 "$data"] }
    42:32 { showPacket [pkts::readP042 "$data"] }
    45:32 { showPacket [pkts::readP045 "$data"] }
    46:32 { showPacket [pkts::readP046 "$data"] }
    57:32 { showPacket [pkts::readP057 "$data"] }
    58:32 { showPacket [pkts::readP058 "$data"] }
    65:32 { showPacket [pkts::readP065 "$data"] }
    137:32 { showPacket [pkts::readP137 "$data"] }
    default { setPacketNotSupported }
  }
  #puts "$data"
}

proc ctrl::setPacketNotSupported {} {
  variable packetDataTable
  variable packetDataLabel

  $packetDataLabel configure -text "Packet not supported"
  $packetDataTable delete [$packetDataTable children {}]
}

proc ctrl::setPacketDataValues {data keys} {
  variable packetDataTable
  variable packetDataLabel
  variable packetInfoTable

  $packetDataLabel configure -text "Values for selected packet:"
  $packetDataTable delete [$packetDataTable children {}]
  foreach k $keys {
    $packetDataTable insert {} end -id $k -text $k -values [dict get $data $k]
  }
}

proc ctrl::showPacket {data} {
  setPacketDataValues $data [dict keys $data]
}


