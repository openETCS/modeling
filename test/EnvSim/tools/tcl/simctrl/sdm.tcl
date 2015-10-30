#     Project: openETCS / EnvSim
#      Module: simctrl / sdm.tcl
# Description: Logs/visualizes data from Speed&Distance Monitoring (braking curves)
# 
# History:
# - 30.10.15, J. Kastner: initial version

namespace eval ::sdm {
}

proc sdm::initView {path} {

  ttk::frame $path -padding 5
}
