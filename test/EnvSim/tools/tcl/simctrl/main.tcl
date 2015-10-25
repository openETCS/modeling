#     Project: openETCS / EnvSim
#      Module: simctrl (Tcl)
# Description: main Tcl script for the simulation control UI
# 
# History:
# - 24.10.15, J. Kastner: initial version
set scriptpath "[file dirname [info script]]"

set isOSX [expr {"Darwin" eq $::tcl_platform(os)}]
set isWin [expr {"windows" eq $::tcl_platform(platform)}]

set extprefix "$scriptpath/../../../libenvsim/dist"
if $isWin {
  load "$extprefix/win32/envsim.dll"
} elseif $isOSX {
  load "$extprefix/darwin/envsim.dylib"
} else {
  #error "platform not supported"
}

foreach s {../lib/ui.tcl comm.tcl model.tcl view.tcl} {
  source "$scriptpath/$s"
}

comm::listen
view::init

