# Common utility procedures for setting/checking train data
#
# History:
# - 01.09.15, J. Kastner: initial version

source "[file dirname [info script]]/util.tcl"
source "[file dirname [info script]]/msg.tcl"

namespace eval ::ma {
  ############################### INTERNAL VARS ###############################
  # path to the input used for setMA commands;
  # must be of type MovementAuthority_t
  variable in ""

  proc input {path} {
    variable in
    set in $path
  }

  proc setMA {args} {
    variable in
    foreach arg $args {
      switch -glob $arg {
        valid* { util::assign "$in." $arg }
        q_dir=* { util::assign "$in." $arg }
        v_loa=* { util::assign "$in." $arg }
        v_main=* { util::assign "$in." $arg }
        t_loa_unlimited=* { util::assign "$in." $arg }
        t_loa=* { util::assign "$in." $arg }
        q_dangerpoint=* { util::assign "$in." $arg }
        q_overlap=* { util::assign "$in." $arg }
        q_endtimer=* { util::assign "$in." $arg }
        n_iter=* { util::assign "$in." $arg }
        section* {
          set t [split $arg :]
          set sectionId [string range [lindex $t 0] 7 8]
          set data [split [lindex $t 1] ,]
          eval util::assign {"$in.sections\[$sectionId\]."} $data 
        }
        default { util::error "cannot handle argument $arg" }
      }
    }
  }
}
