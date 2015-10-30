#     Project: openETCS / EnvSim
#      Module: simctrl / evts.tcl
# Description: Logs/visualizes events sent by the EnvSim (track&train messages)
# 
# History:
# - 29.10.15, J. Kastner: initial version
package require Tk

namespace eval ::evts {
  variable tree
}

proc evts::initView {path} {
  variable tree

  ttk::frame $path -padding 5

  grid [ttk::treeview $path.tree -columns Position] -column 0 -row 0
  set tree $path.tree
  grid [ttk::scrollbar $path.sb -command "$tree yview"] -column 1 -row 0 -sticky ns
  $tree configure -yscrollcommand "$path.sb set"
  $tree column #0 -width 100
  $tree heading #0 -text Message
  $tree column #1 -width 100
  $tree heading #1 -text "Position (m)"
  bind $tree <<TreeviewSelect>> evts::displayEvent
}

proc evts::handleBaliseMessage {data} {
  variable tree

  binary scan $data dx32i pos nid_bg
  $tree insert {} end -text "BG $nid_bg" -values [format %.1f $pos]
}

proc evts::handleRadioMessage {data} {
  variable tree

  binary scan $data d pos
  $tree insert {} end -text "MSG" -values [format %.1f $pos]
}


proc evts::displayEvent {args} {
  puts $args
}
