#     Project: openETCS / EnvSim
#      Module: tcl / lib / msgview.tcl
# Description: Tk component for visualization of balise telegrams and radio messages
# 
# History:
# - 24.11.15, J. Kastner: initial version
package require Tk

namespace eval ::msgview {
  variable tabs
  variable tabHeaders
  variable tabPackets
  variable headersTable
  variable packetInfoTable
  variable packetDataTable
  variable packetDataLabel
  variable selectedMsg

  set idValue ""
  set posValue ""
}

proc msgview::init {path {infoTableHeight 6} {dataTableHeight 10}} {
  variable tabs
  variable tabHeaders
  variable tabPackets
  variable headersTable
  variable packetInfoTable
  variable packetDataTable
  variable packetDataLabel
  variable idValue
  variable posValue

  set frame [ttk::frame $path -padding 5]
  grid rowconfigure $path 1 -weight 1
  grid columnconfigure $path 0 -weight 1

  ### HEADER
  grid [ttk::frame $path.h] -sticky we
  # message ID
  ui::addLabelField $path.h.id ID: msgview::idValue 0 0 true
  # position
  ui::addLabelField $path.h.pos Position: msgview::posValue 3 0 true


  ### Tabs "Header" and "Packets"
  grid [ttk::notebook $path.tabs] -sticky wens
  grid rowconfigure $path.tabs 1 -weight 1
  grid columnconfigure $path.tabs 0 -weight 1
  set tabs $path.tabs 
  # Tab "Header"
  set tabHeaders $tabs.headers
  ttk::frame $tabHeaders
  grid rowconfigure $tabHeaders 0 -weight 1
  grid columnconfigure $tabHeaders 0 -weight 1
  $tabs add $tabHeaders -text Header
  grid [ttk::treeview $tabHeaders.tree -columns Value] -sticky wesn
  set headersTable $tabHeaders.tree
  $headersTable heading #0 -text Header
  $headersTable heading #1 -text Value
  grid [ttk::scrollbar $tabHeaders.tree_sb -command "$headersTable yview"] -column 1 -row 0 -sticky ns
  $headersTable configure -yscrollcommand "$tabHeaders.tree_sb set"

  # Tab Packets
  set tabPackets $tabs.packets
  ttk::frame $tabPackets
  $tabs add $tabPackets -text Packets
  grid [ttk::treeview $tabPackets.tree -height $infoTableHeight -columns {nid_packet q_dir name}] -column 0 -row 0 -sticky wesn
  grid columnconfigure $tabPackets 0 -weight 1
  grid rowconfigure $tabPackets 0 -weight 1
  set packetInfoTable $tabPackets.tree
  $packetInfoTable heading #0 -text #
  $packetInfoTable column #0 -width 30 -stretch false
  $packetInfoTable heading #1 -text Id
  $packetInfoTable column #1 -width 30 -stretch false
  $packetInfoTable heading #2 -text Dir.
  $packetInfoTable column #2 -width 30 -stretch false
  #$packetInfoTable heading #3 -text Ver.
  #$packetInfoTable column #3 -width 30 -stretch false
  $packetInfoTable heading #3 -text Name
  bind $packetInfoTable <<TreeviewSelect>> msgview::onPacketTreeSelect
  grid [ttk::scrollbar $tabPackets.tree_sb -command "$packetInfoTable yview"] -column 1 -row 0 -sticky ns
  $packetInfoTable configure -yscrollcommand "$tabPackets.tree_sb set"
  
  grid [ttk::label $tabPackets.l -text "No packet selected" -font TkCaptionFont] -column 0 -row 1 -sticky w
  set packetDataLabel $tabPackets.l

  grid [ttk::treeview $tabPackets.data -height $dataTableHeight -columns value] -column 0 -row 2 -sticky wesn
  set packetDataTable $tabPackets.data
  $packetDataTable heading #0 -text Variable
  $packetDataTable heading #1 -text Value
  grid [ttk::scrollbar $tabPackets.data_sb -command "$packetDataTable yview"] -column 1 -row 2 -sticky ns
  $packetDataTable configure -yscrollcommand "$tabPackets.data_sb set"
  grid rowconfigure $tabPackets 2 -weight 2

  return $frame
}


proc msgview::loadMsg {msg pos} {
  variable selectedMsg
  variable packetDataTable
  variable packetDataLabel

  $packetDataTable delete [$packetDataTable children {}]
  $packetDataLabel configure -text "No packet selected"
  set selectedMsg $msg

  if [dict exists $msg nid_bg] {
    loadHeader $msg {q_updown m_version q_media n_pig n_total m_dup m_mcount nid_c nid_bg q_link}
    set msgview::idValue "BG [dict get $msg nid_bg].[dict get $msg n_pig]"
  } else {
    set nid_message [dict get $msg nid_message]
    set vars [dict get $msgs::headerVars $nid_message]
    loadHeader $msg "$vars"
    set msgview::idValue "MSG [format %2u $nid_message]"
  }

  loadPackets $msg
  set msgview::posValue $pos
}

proc msgview::loadHeader {msg vars} {
  variable headers
  variable headersTable

  $headersTable delete [$headersTable children {}]
  foreach var $vars {
    $headersTable insert {} end -id $var -text $var -values [dict get $msg $var]
  }
}

proc msgview::loadPackets {msg} {
  variable packetInfoTable

  #puts $msg

  $packetInfoTable delete [$packetInfoTable children {}]
  if {! [dict exists $msg packets]} return {}

  set i 0
  foreach pkt [dict get $msg packets] {
    set nid_packet [dict get $pkt nid_packet]
    
    set type [dict get $msg type]
    switch $type {
      T {
        set q_dir -
      }
      default {
        set q_dir [enum::dirName [dict get $pkt q_dir]]
      }
    }

    $packetInfoTable insert {} end -id $i -text $i -values "$nid_packet $q_dir [list [pkts::packetName $nid_packet $type]]"

    incr i
  }

}


proc msgview::onPacketTreeSelect {} {
  variable selectedMsg
  variable packetInfoTable
  variable packetDataTable
  variable packetDataLabel

  $packetDataTable delete [$packetDataTable children {}]
  $packetDataLabel configure -text "Values for selected packet:"
  foreach {k v} [lindex [dict get $selectedMsg packets] [$packetInfoTable focus]] {
    $packetDataTable insert {} end -id $k -text $k -values "$v"
  }
}
