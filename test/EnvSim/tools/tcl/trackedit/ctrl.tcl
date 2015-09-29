#     Project: openETCS / EnvSim
#      Module: trackedit / ctrl.tcl
# Description: UI view controller for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version

namespace eval ::ctrl {
  variable tree .c.nav.tree
  variable headersTable .c.d.n.headers.tree
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
}


proc ctrl::onTreeSelect {} {
  variable tree
  showData [$tree focus]
}
