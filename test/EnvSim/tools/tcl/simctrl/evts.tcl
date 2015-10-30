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

  grid [ttk::treeview $path.tree]
  set tree $path.tree
}

proc evts::handleBaliseMessage {data} {
  variable tree

  binary scan $data x32i nid_bg
  $tree insert {} end -text "BG $nid_bg"
}
