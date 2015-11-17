#     Project: openETCS / EnvSim
#      Module: simctrl / model.tcl
# Description: Data model for the simulation controller
# 
# History:
# - 23.10.15, J. Kastner: initial version

namespace eval ::model {
  # EnvSim config
  set loadedTrack    "No track loaded"
  # sim state (SIM -> UI)
  set connected      0
  set ebActive       0
  set sbActive       0
  set tcoActive      0
  set currentPos     0
  set currentVel     0
  # sim controls (UI -> SIM)
  set openDesk       0
  set afb            0
  set traction       0.0
  set brake          0.0
}

proc model::ctrlsChanged {args} {
  puts CHANGED
  comm::sendCtrlMsg $model::openDesk $model::traction $model::brake
}
