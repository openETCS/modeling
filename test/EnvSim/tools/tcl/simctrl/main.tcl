#     Project: openETCS / EnvSim
#      Module: simctrl (Tcl)
# Description: Main Tcl script for the simulation control UI
# 
# History:
# - 24.10.15, J. Kastner: initial version
set scriptpath "[file dirname [info script]]"

lappend auto_path "$scriptpath/../contrib/"

set isOSX [expr {"Darwin" eq $::tcl_platform(os)}]
set isWin [expr {"windows" eq $::tcl_platform(platform)}]

# load envsim Tcl extension
set extprefix "$scriptpath/../../../libenvsim/dist"
if $isWin {
  load "$extprefix/win32/envsim.dll"
} elseif $isOSX {
  load "$extprefix/darwin/envsim.dylib"
} else {
  #error "platform not supported"
}

# load modules
foreach s {
  ../lib/ui.tcl
  ../lib/msgs.tcl
  cfg.tcl
  comm.tcl
  model.tcl
  view.tcl
  ctrl.tcl
  evts.tcl
  sdm.tcl
} {
  source "$scriptpath/$s"
}

view::init
comm::listen

if {[llength $argv] > 0} {
  cfg::load "[lindex $argv 0]"
}
