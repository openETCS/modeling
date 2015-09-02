# contains common utility procedures for testing TrackAtlas/GradientProfile
source ../../lib/msg.tcl
source ../../lib/train.tcl
source ../../lib/util.tcl
source ../../lib/const.tcl

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
  
