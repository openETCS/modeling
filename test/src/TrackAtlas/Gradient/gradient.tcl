# contains common utility procedures for testing TrackAtlas/GradientProfile
source ../../lib/msg.tcl
source ../../lib/train.tcl
source ../../lib/util.tcl
source ../../lib/const.tcl

proc checkUpdated {flag} {
  util::check "$::eut/" "updated=$flag"
}

proc checkGP {pos args} {
  eval util::check {"$::gpOut\[$pos\]."} $args
}
  
