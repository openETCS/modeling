# Common utility functions for testing of SpeedSupervision_Integration
source ../../lib/util.tcl
source ../../lib/train.tcl
source ../../lib/ma.tcl

set eut "SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration"
ma::input "$eut/dataFromTrackAtlas.MA"
train::inputTrainProps "$eut/trainProps"
train::inputTrainData "$eut/trainData"

#proc setDefaultTrainData {} {
#  setTrainData valid=true acknowledgedByDriver=false trainCategory=NC_TRAIN_Passenger_train\
#               cantDeficientcy=NC_CDTRAIN_Cant_Deficiency_80_mm trainLength=20084 brakePerctage=198\
#               maxTrainSpeed=330 loadingGauge=M_LOADINGGAUGE_G1 axleLoadCategory=M_AXLELOADCAT_HS17\
#               airtightSystem=M_AIRTIGHT_Not_fitted axleNumber=32 numberNationalSystems=2 nationSystems.0=1\
#               nationSystems.1=2 nationSystems.2=0 numberTractionSystems=3
#}
#
#proc setDefaultTrainProps {} {
#  setTrainProps nid_engine=4321 nid_operational=1234 l_train=200\
#                d_baliseAntenna_2_frontend.nominal=500 d_baliseAntenna_2_frontend.d_min=490 d_baliseAntenna_2_frontend.d_max=510\
#                d_frontend_2_rearend.nominal=20084 d_frontend_2_rearend.d_min=19900 d_frontend_2_rearend.d_max=20200\
#                locationAccuracy_DefaultValue.nominal=0 locationAccuracy_DefaultValue.d_min=-100 locationAccuracy_DefaultValue.d_max=100\
#                centerDetectionAcc_DefaultValue.nominal=0 centerDetectionAcc_DefaultValue.d_min=-10 centerDetectionAcc_DefaultValue.d_max=10
#}

proc setDataFromTA {args} {
  foreach arg $args {
    set h "$::eut/dataFromTrackAtlas"
    switch -glob $arg {
      fresh* { util::assign "$h." $arg }
      mrsp* {
        set t [split $arg :]
        set index [string range [lindex $t 0] 4 5]
        set values [split [lindex $t 1] ,]
        eval util::assign {$h.MRSP\[$index\].} $values
      }
      default { util::error "invalid key: $arg" }
    }
  }
}

proc logTarget {} {
  util::logOutputs "$::eut/target." valid targetType speed distance
}

proc logSdmToDMI {} {
  util::logOutputs "$::eut/sdmToDMI." valid targetSpeed permittedSpeed locationBrakeTarget interventionSpeed sup_status supervisionDisplay distanceIndicationPoint
}

proc logOdo {} {
  util::logOutputs "$::eut/odometry." speed.v_safeNominal speed.v_rawNominal speed.v_lower speed.v_upper
}

#proc setTrainProps {args} {
#  eval util::assign "$::eut/trainProps." $args
#}
#
#proc setTrainData {args} {
#  eval util::assign "$::eut/trainData." $args
#}
  
proc setOdo {args} {
  set h "$::eut/odometry"
  foreach arg $args {
    set t [split $arg =]
    set k [lindex $t 0]
    set v [lindex $t 1]
    switch $k {
      valid { SSM::set "$h.valid" $v }
      tstamp { SSM::set "$h.timestamp" $v }
      pos {
        set nom [expr int($v * 1.001)]
        set min [expr int($v * 0.991)]
        set max [expr int($v * 1.01)]
        eval util::assign "$h.odo." o_nominal=$nom o_max=$max o_min=$min
      }
      speed {
        set nom [expr int($v * 1.001)]
        set min [expr int($v * 0.991)]
        set max [expr int($v * 1.01)]
        set safe [expr int($max * 0.99)]
        eval util::assign "$h.speed." v_safeNominal=$safe v_rawNominal=$nom v_lower=$min v_upper=$max
      }
      accel { SSM::set "$h.acceleration" $v }
      default { util::error "unsupported key: $k" }
    }
  }
}
        
proc updateOdo {deltaT} {}

proc checkOutput {args} {
  set sb ""
  set eb ""
  foreach arg $args {
    set t [split $arg =]
    set k [lindex $t 0]
    set v [lindex $t 1]
    switch $k {
      service {
        set sb
        switch $v {
          apply     { set sb apply_brake }
          release   { set sb release_brake }
          undefined { set sb brake_signal_command_not_defined }
          default { util::error "Invalid service brake command: $service" }
        }
        SSM::check "$::eut/brakeCmd.m_servicebrake_cm" $sb
      }
      emergency {
        set eb
        switch $v {
          apply     { set eb apply_brake }
          release   { set eb release_brake }
          undefined { set eb brake_signal_command_not_defined }
          default { util::error "Invalid emergency brake command: $emergency" }
        }
        SSM::check "$::eut/brakeCmd.m_emergencybrake_cm" $eb
      }
      overpassed { SSM::check "$::eut/EOA_overpassed" $v }
      default { util::error "unsupported property $k" }
    }
  }
}

proc checkDMI {args} {
  eval util::check "$::eut/sdmToDMI." $args
}
