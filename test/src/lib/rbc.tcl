# Common utility procedures for handling and testing the rbc model
#
# History:
# - 27.08.15, A. Pinnau: initial version

source "[file dirname [info script]]/util.tcl"

namespace eval ::rbc {
  ################################# CONSTANTS #################################
  #variable DIM_MaxRMessages 30
  #variable DIM_N_ITER 32
  #variable DIM_MaxElementsPacket015 [expr ($DIM_N_ITER+1) * 3 + 4 + 1]
  #variable DIM_MaxElementsPacket021 $DIM_MaxElementsPacket015


  ############################### INTERNAL VARS ###############################
  variable rbc RBC_Internal_Test_Pkg::RBC_Wrapper
  variable trainMsg "$rbc/inRadioTrainTrackMsg"
  variable triggeredTrackMsg "$rbc/inTriggeredRadioTrackTrainMessage"
  variable trackMsg "$rbc/outRadioTrackTrainMessage"
  variable sessionMgt "$rbc/outSessionManagement"


  ################################## MESSAGES ##################################
  
  # clears the train message and the triggered track message
  proc resetMessages {} {
	variable trainMsg
	variable triggeredTrackMsg
    SSM::set $trainMsg {(false, (false, 0, 0.0, 0, Q_MARQSTREASON_Start_selected_by_driver, 0.0, 0, Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA, 0), ((false, (0, 0, Q_SCALE_10_cm_scale, 0, 0, Q_DIRLRBG_Reverse, Q_DLRBG_Reverse, 0, 0, Q_LENGTH_No_train_integrity_information_available, 0, 0, Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0)), (false, (0, 0, Q_SCALE_10_cm_scale, 0, 0, 0, Q_DIRLRBG_Reverse, Q_DLRBG_Reverse, 0, 0, Q_LENGTH_No_train_integrity_information_available, 0, 0, Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0)), (false, 0, ((false, (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))), (false, M_ERROR_Balise_group_linking_consistency_error), (false, 0), (false, 0), (false, NC_CDTRAIN_Cant_Deficiency_80_mm, NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category, 0, 0, M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles, M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, 0, 0, ((M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0), (M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0), (M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0)), 0, (0, 0, 0))))}
    SSM::set $triggeredTrackMsg {((0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), (((0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0)), (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))}
  }
  
  proc prepareTrainMsg {} {
    variable trainMsg
    util::assign "$trainMsg." present=true
    util::assign "$trainMsg.header." present=true
  }
  
  proc setTrainMsgHeader {args} {
    variable trainMsg
    rbc::prepareTrainMsg
    eval util::assign "$trainMsg.header." $args  
  }
  
  proc checkTrackMsgHeader {args} {
    variable trackMsg
    eval util::check "$trackMsg.Header." $args  
  }

  ################################## PACKETS ##################################
  
  proc setTrainMsgPacket0 {args} {
    variable trainMsg
	util::assign "$trainMsg.packets.p0." valid=true
    eval util::assign "$trainMsg.packets.p0.packet0." $args  
  }

  ################################## SESSION ##################################
  
  proc checkTrainData {args} {
    variable sessionMgt
    eval util::check "$sessionMgt.m_TrainData." $args  
  }
  
  proc checkPositionData {args} {
    variable sessionMgt
    eval util::check "$sessionMgt.m_PosData." $args  
  }

  
}

