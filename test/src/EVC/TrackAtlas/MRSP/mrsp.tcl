# contains common utility procedures for testing TrackAtlas/Build_MRSP
set basedir "[file dirname [info script]]"
source "$basedir/../../../lib/msg.tcl"
source "$basedir/../../../lib/train.tcl"
source "$basedir/../../../lib/util.tcl"
source "$basedir/../../../lib/const.tcl"

set eut "TA_MRSP::Build_MRSP"
msg::input "$eut/MessageIn"
#train::inputTrainData "$eut/TrainDataIn"
train::inputTrainPosition "$eut/train_position"

proc checkOutput {args} {
  foreach arg $args {
    switch -glob $arg {
      newMRSP=* { util::check "$::eut/" $arg } 
      SSP_available=* { util::check "$::eut/" $arg } 
      default { util::error "unknown property $arg" }
    }
  }
}

proc logMRSP {{nsections 8}} {
  util::log "MRSP sections:"
  for {set i 0} {$i < $nsections} {incr i} {
    util::log "- $i: valid=[SSM::get $::eut/MRSP\[$i\].valid]    Loc_Abs=[SSM::get $::eut/MRSP\[$i\].Loc_Abs]    Loc_LRBG=[SSM::get $::eut/MRSP\[$i\].Loc_LRBG]    MRS=[SSM::get $::eut/MRSP\[$i\].MRS]"
  }
}
