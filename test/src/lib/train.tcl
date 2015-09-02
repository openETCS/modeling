# Common utility procedures for setting/checking train data
#
# History:
# - 24.08.15, J. Kastner: initial version

source "[file dirname [info script]]/util.tcl"

namespace eval ::train {

  variable inTrainPos ""

  proc inputTrainPosition {path} {
    variable inTrainPos
    set inTrainPos $path
  }

  proc setTrainPos {args} {
    variable inTrainPos
    eval util::assign "$inTrainPos." $args
  }

  proc setTrainPosLRBG {args} {
    variable inTrainPos
    eval util::assign "$inTrainPos.LRBG." $args
  }

  proc setTrainPosPrevLRBG {args} {
    variable inTrainPos
    eval util::assign "$inTrainPos.prvLRBG." $args
  }
}
