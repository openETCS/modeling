#     Project: openETCS / EnvSim
#      Module: trackedit / ctrl.tcl
# Description: UI view controller for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version
# - 25.11.15, J. Kastner: switch to msgview

namespace eval ::ctrl {
  variable tree .c.nav.tree
}


proc ctrl::openTrack {filename} {
  source $filename
  ctrl::update
  #set model::title [track::title]
  #loadTree
}


proc ctrl::loadTree {} {
  variable tree
  $tree delete [$tree children {}]
  foreach msg [model::getMessageList] {
    $tree insert {} end -id [lindex $msg 0] -text [lindex $msg 1] -values [lindex $msg 2] -image [lindex $msg 3]
  }
}


proc ctrl::update {} {
  set model::title [track::title]
  loadTree
}


proc ctrl::onTreeSelect {} {
  variable tree

  set id [$tree focus]
  set pos [$tree item $id -values]

  switch -regexp -matchvar idx -- $id {
    b(\\d+) {
      track::balise load [lindex $idx 1]
      set msg [msgs::parseBinBaliseMsg [track::balise get bytes]]
    }
    r(\\d+) {
      track::radio load [lindex $idx 1]
      set msg [msgs::parseBinRadioMsg [track::radio get bytes]]
    }
    t(\\d+) {
      track::train load [lindex $idx 1]
      set msg [msgs::parseBinTrainMsg [track::train get bytes]]
    }
  }
  msgview::loadMsg $msg $pos
}


proc ctrl::showConsole {} {
  if $::isWin {
    console show
  } else { 
    package require tkcon
    tkcon show
  }
}

proc ctrl::runScript {file} {
  source "$file"
}
