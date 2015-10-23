#     Project: openETCS / EnvSim
#      Module: trackedit (Tcl)
# Description: main tcl script for the track editor UI
# 
# History:
# - 24.09.15, J. Kastner: initial version
set scriptpath "[file dirname [info script]]"

set isOSX [expr {"Darwin" eq $::tcl_platform(os)}]
set isWin [expr {"windows" eq $::tcl_platform(platform)}]

set extprefix "$scriptpath/../../../libenvsim/dist"
if $isWin {
  load "$extprefix/win32/envsim.dll"
} elseif $isOSX {
  load "$extprefix/darwin/envsim.dylib"
} else {
  error "platform not supported"
}

foreach s {view.tcl ctrl.tcl model.tcl ../lib/packets.tcl} {
  source "$scriptpath/$s"
}

view::init
