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
  set afb            0
  set tstamp         0
  # sim controls (UI -> SIM)
  set openDesk       0
  set traction       0.0
  set brake          0.0
  set target         0.0
  # data from position reports
  set lrbg           "n/a"
  set mode           "n/a"
  set level          "n/a"
}


# init / reset model vars
proc model::reset {} {
  # EnvSim config
  set model::loadedTrack    "No track loaded"
  # sim state (SIM -> UI)
  set model::connected      0
  set model::ebActive       0
  set model::sbActive       0
  set model::tcoActive      0
  set model::currentPos     0
  set model::currentVel     0
  set model::afb            0
  set model::tstamp         0
  # sim controls (UI -> SIM)
  set model::openDesk       0
  set model::traction       0.0
  set model::brake          0.0
  set model::target         0.0
  # data from position reports
  set model::lrbg           "n/a"
  set model::mode           "n/a"
  set model::level          "n/a"
}

proc model::ctrlsChanged {args} {
  comm::sendCtrlMsg $model::openDesk $model::traction $model::brake $model::target
}

