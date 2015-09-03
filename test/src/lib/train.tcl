# Common utility procedures for setting/checking train data
#
# History:
# - 24.08.15, J. Kastner: initial version
# - 03.09.15, J. Kastner: add procedures for setting/logging TrainPos, TrainProps, TrainData

source "[file dirname [info script]]/util.tcl"

namespace eval ::train {

  variable inTrainPos ""
  variable inTrainProps ""
  variable inTrainData ""

  proc inputTrainPosition {path} {
    variable inTrainPos
    set inTrainPos $path
  }

  proc inputTrainProps {path} {
    variable inTrainProps
    set inTrainProps $path
  }

  proc inputTrainData {path} {
    variable inTrainData
    set inTrainData $path
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

  proc logTrainPos {} {
    variable inTrainPos
    util::logOutputs "$inTrainPos." valid timestamp trainPosition.nominal trainPosition.d_min trainPosition.d_max\
                                    estimatedFrontEndPosition minSafeFrontEndPosition maxSafeFrontEndPostion\
                                    LRBG.valid LRBG.nid_bg LRBG.location.nominal\
                                    prvLRBG.valid prvLRBG.nid_bg prvLRBG.location.nominal\
                                    nominalOrReverseToLRBG trainOrientationToLRBG trainRunningDirectionToLRBG 
  }

  proc updateTrainPos {velocity_kmh dt_ms} {
    variable inTrainPos
    set curpos [SSM::get "$inTrainPos.trainPosition.nominal"]
    set curt [SSM::get "$inTrainPos.timestamp"]
    set dpos [expr int( $velocity_kmh*1000.0*100.0/3600000.0 * $dt_ms )]
    set newpos [expr $curpos+$dpos]
    setTrainPos timestamp=[expr $dt_ms+$curt] trainPosition.nominal=$newpos estimatedFrontEndPosition=$newpos
  }

  proc setDefaultTrainPos {} {
    setTrainPos valid=true timestamp=0 trainPosition.nominal=10000 trainPosition.d_min=0 trainPosition.d_max=0\
                LRBG.valid=true LRBG.nid_bg=1 LRBG.location.nominal=5000\
                nominalOrReverseToLRBG=Q_DLRBG_Nominal trainOrientationToLRBG=Q_DIRLRBG_Nominal trainRunningDirectionToLRBG=Q_DIRTRAIN_Nominal
  }

  proc setDefaultTrainData {} {
    setTrainData valid=true acknowledgedByDriver=false trainCategory=NC_TRAIN_Passenger_train\
                       cantDeficientcy=NC_CDTRAIN_Cant_Deficiency_80_mm trainLength=20084 brakePerctage=198\
                       maxTrainSpeed=330 loadingGauge=M_LOADINGGAUGE_G1 axleLoadCategory=M_AXLELOADCAT_HS17\
                       airtightSystem=M_AIRTIGHT_Not_fitted axleNumber=32 numberNationalSystems=2 nationSystems.0=1\
                       nationSystems.1=2 nationSystems.2=0 numberTractionSystems=3
  }

  proc setDefaultTrainProps {} {
    setTrainProps nid_engine=4321 nid_operational=1234 l_train=200\
                             d_baliseAntenna_2_frontend.nominal=500 d_baliseAntenna_2_frontend.d_min=490 d_baliseAntenna_2_frontend.d_max=510\
                             d_frontend_2_rearend.nominal=20084 d_frontend_2_rearend.d_min=19900 d_frontend_2_rearend.d_max=20200\
                             locationAccuracy_DefaultValue.nominal=0 locationAccuracy_DefaultValue.d_min=-100 locationAccuracy_DefaultValue.d_max=100\
                             centerDetectionAcc_DefaultValue.nominal=0 centerDetectionAcc_DefaultValue.d_min=-10 centerDetectionAcc_DefaultValue.d_max=10
  }

  proc setTrainProps {args} {
    variable inTrainProps
    eval util::assign "$inTrainProps." $args
  }

  proc setTrainData {args} {
    variable inTrainData
    eval util::assign "$inTrainData." $args
  }
 
}
