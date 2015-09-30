#     Project: openETCS / EnvSim
#      Module: trackedit / ctrl.tcl
# Description: UI view controller for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version

namespace eval ::ctrl {
  variable tree .c.nav.tree
  variable headersTable .c.d.n.headers.tree
  variable packetTable .c.d.n.packets.tree
}


proc ctrl::openTrack {filename} {
  source $filename
  loadTree
}


proc ctrl::loadTree {} {
  variable tree
  foreach msg [model::getMessageList] {
    $tree insert {} end -id [lindex $msg 0] -text [lindex $msg 1] -values [lindex $msg 2]
  }
}


proc ctrl::showData {id} {
  variable tree

  set pos [$tree set $id Position]
  set msg [model::getMessage $id]
  switch [dict get $msg type] {
    b { showBaliseData $msg $pos }
    r { showRadioData $msg $pos }
    default { error "invalid message type" }
  }
}


proc ctrl::showBaliseData {msg pos} {
  variable headersTable

  set view::idValue "BG [dict get $msg header nid_bg]"
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

proc ctrl::updatePacketTable {data} {
  variable packetTable

  $packetTable delete [$packetTable children {}]
  foreach pkt $data {
    set index [lindex $pkt 1]
    set nid_packet [lindex $pkt 3]
    switch [lindex $pkt 9] {
      0 {set q_dir R}
      1 {set q_dir N}
      2 {set q_dir B}
      default {set q_dir X}
    }
    set name [list [pkts::packetName $nid_packet]]

    $packetTable insert {} end -id $index -text $index -values "$nid_packet $q_dir $name"
  }
}

proc ctrl::onTreeSelect {} {
  variable tree
  showData [$tree focus]
}


proc ctrl::onPacketTreeSelect {} {
  variable packetTable

  set data [pkts::get data [$packetTable focus]]
  switch [lindex $data 0] {
    42 { view::showP042 [pkts::readP042 "$data"] }
    45 { view::showP045 [pkts::readP045 "$data"] }
    57 { view::showP057 [pkts::readP057 "$data"] }
    default { view::showPNotSupported }
  }
  puts "$data"
}
