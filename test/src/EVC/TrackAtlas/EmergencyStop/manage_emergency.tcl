# Common utilities used for tests of TA_EmergencyStop/Manage_EmergencyStop
#
# History:
# - 24.08.15, J. Kastner: initial version
source "[file dirname [info script]]/../../../lib/msg.tcl"

set eut TA_EmergencyStop::Manage_EmergencyStop
msg::input "$eut/messageIn"
msg::radioOut "$eut/message147"

# minSafeFront and currentEOA are specified in cm (not in Q_SCALE used by MSG15!)
proc input {t_train {minSafeFront 0} {currentEOA 10000} {nid_engine 321}} {
  SSM::set "$::eut/t_train" $t_train
  SSM::set "$::eut/trainProps.nid_engine" $nid_engine
  SSM::set "$::eut/TrainPositionIn.minSafeFrontEndPosition" $minSafeFront
  SSM::set "$::eut/currentEOA" $currentEOA
}

proc checkOutput args {
  eval util::check "$::eut/" $args
} 


proc get_UES_OpVar {var} {
  SSM::get "EmergencyStop::Manage_EmergencyStop/EmergencyStop::ES_Process_Unconditional 1/$var"
}



