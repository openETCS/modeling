# contains common utility procedures for testing of TrackAtlas/MovementAuthority
source ../../lib/msg.tcl
source ../../lib/train.tcl
source ../../lib/util.tcl
source ../../lib/const.tcl

proc checkMA {flag args} {
  util::check "$::eut/" "new_MA=$flag"
  eval util::check "$::eut/MA_onboard_out." $args
}
