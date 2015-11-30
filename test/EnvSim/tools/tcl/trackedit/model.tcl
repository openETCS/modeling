#     Project: openETCS / EnvSim
#      Module: trackedit / model.tcl
# Description: Data model for access to the track messages
# 
# History:
# - 24.09.15, J. Kastner: initial version

namespace eval ::model {
  # current track title
  set title "no track loaded"
}

proc model::compMsgInfo {a b} {
  set a2 [lindex $a 2]
  set b2 [lindex $b 2]
  if {$a2<$b2} {
    return -1
  } elseif {$a2>$b2} {
    return 1
  }
  return 0
}


proc model::getMessageList {} {
  foreach msg [track::info] {
    switch [lindex $msg 0] {
      b { set rec [list b[lindex $msg 1] "BG [lindex $msg 2].[lindex $msg 3]" [lindex $msg 4] balise] }
      r { set rec [list r[lindex $msg 1] "MSG [format %02i [lindex $msg 2]]" [lindex $msg 3] rmsg] }
      t { set rec [list t[lindex $msg 1] "MSG [format %02i [lindex $msg 2]]" [lindex $msg 3] tmsg] }
      default { error "Invalid track message type: [lindex $msg 0]" }
    }
    lappend data $rec
  }
  if [info exists data] {
    return [lsort -command model::compMsgInfo $data]
  } else {
    return {}
  }
}


proc model::getMessage {id} {
  switch -regexp -matchvar i -- $id {
    b(\\d+) { return [getBaliseMessage [lindex $i 1]] }
    r(\\d+) { return [getRadioMessage [lindex $i 1]] }
    t(\\d+) { return [getTrainMessage [lindex $i 1]] }
    default { error "invalid message index $id" }
  }
}


proc model::getBaliseMessage {id} {
  track::balise load $id
  pkts::target balisebuf
  dict set msg type b

  foreach h [track::balise get header] {
    dict set msg header [lindex $h 0] [lindex $h 1]
  }

  dict set msg packetinfo "[pkts::get headers]"
  return $msg
}


proc model::getRadioMessage {id} {
  track::radio load $id
  pkts::target radiobuf
  dict set msg type r
  foreach h [track::radio get header] {
    dict set msg header [lindex $h 0] [lindex $h 1]
  }

  dict set msg packetinfo "[pkts::get headers]"
  return $msg
}


proc model::getTrainMessage {id} {
  track::train load $id
  set data [track::train get bytes]

  set msg [msgs::parseBinTrainMsg $data]

  dict set msg type t
  puts $msg
  return $msg
} 


proc model::saveTrack {file} {
  if {! [string match "*.trk" $file]} {
    set file "$file.trk"
  }
  set fd [open "$file" w]

  puts $fd "track::clear"

  foreach msg [getMessageList] {
    set pos [lindex $msg 2]
    switch -regexp -matchvar tmp -- [lindex $msg 0] {
      b(\\d+) { 
        track::balise load [lindex $tmp 1]
        puts $fd "track::balise raw [util::bytes2hex [track::balise get bytes]]"
        puts $fd "track::add balise $pos"
      }
      r(\\d+) {
        track::radio load [lindex $tmp 1]
        puts $fd "track::radio raw [util::bytes2hex [track::radio get bytes]]"
        puts $fd "track::add radio $pos"
      }
      t(\\d+) {
      }
    }
  }

  close $fd
}
