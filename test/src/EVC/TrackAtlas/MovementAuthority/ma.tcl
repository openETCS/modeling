# contains common utility procedures for testing of TrackAtlas/MovementAuthority
set basedir "[file dirname [info script]]"
source "$basedir/../../../lib/msg.tcl"
source "$basedir/../../../lib/train.tcl"
source "$basedir/../../../lib/util.tcl"
source "$basedir/../../../lib/const.tcl"

proc checkMA {flag args} {
  util::check "$::eut/" "new_MA=$flag"
  foreach arg $args {
    switch -glob $arg {
      section* {
        set t [split $arg :]
        set sectionId [string range [lindex $t 0] 7 8]
        set data [split [lindex $t 1] ,]
        eval util::check {"$::eut/MA_onboard_out.sections\[$sectionId\]."} $data
      }
      default { util::check "$::eut/MA_onboard_out." $arg }
    }
  }
}
