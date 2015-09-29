#     Project: openETCS / EnvSim
#      Module: trackedit / model.tcl
# Description: Data model for access to the track messages
# 
# History:
# - 24.09.15, J. Kastner: initial version

namespace eval ::model {}

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
      b { set rec [list b[lindex $msg 1] "BG [lindex $msg 2]" [lindex $msg 3]] }
      r { set rec [list r[lindex $msg 1] "MSG [format %02i [lindex $msg 2]]" [lindex $msg 3]] }
      default { error "Invalid track message type: [lindex $msg 0]" }
    }
    lappend data $rec
  }
  return [lsort -command model::compMsgInfo $data]
}


proc model::getMessage {id} {
  switch -regexp -matchvar i -- $id {
    b(\\d+) { return [getBaliseMessage [lindex $i 1]] }
    r(\\d+) { return [getRadioMessage [lindex $i 1]] }
    default { error "invalid message index $id" }
  }
}


proc model::getBaliseMessage {id} {
  track::balise load $id
  dict set msg type b
  foreach h [track::balise get header] {
    dict set msg header [lindex $h 0] [lindex $h 1]
  }
  return $msg
}


proc model::getRadioMessage {id} {
  track::radio load $id
  dict set msg type r
  foreach h [track::radio get header] {
    dict set msg header [lindex $h 0] [lindex $h 1]
  }
  return $msg
}
