# contains common utility procedures for testing TrackAtlas/GradientProfile
set basedir "[file dirname [info script]]"
source "$basedir/../../../lib/msg.tcl"
source "$basedir/../../../lib/train.tcl"
source "$basedir/../../../lib/util.tcl"
source "$basedir/../../../lib/const.tcl"

proc checkOutput {args} {
  foreach arg $args {
    switch -glob $arg {
      updated=* { util::check "$::eut/" $arg }
      available=* { util::check "$::eut/" $arg }
      default { util::error "unknown property $arg" }
    }
  }
}

proc checkGP {pos args} {
  eval util::check {"$::gpOut\[$pos\]."} $args
}
  
