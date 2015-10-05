# Common utility procedures for handling and testing the rbc model
#
# History:
# - 27.08.15, A. Pinnau: initial version

source "[file dirname [info script]]/util.tcl"

namespace eval ::rbc {
  ################################# CONSTANTS #################################


  ############################### INTERNAL VARS ###############################
  # RBC_Wrapper
  variable rbc RBC_Internal_Test_Pkg::RBC_Wrapper
  variable trainMsg "$rbc/inRadioTrainTrackMsg"
  variable triggeredTrackMsg "$rbc/inTriggeredRadioTrackTrainMessage"
  variable trackMsg "$rbc/outRadioTrackTrainMessage"
  variable sessionMgt "$rbc/outSessionManagement"
  # Test_TryPutDiagMsg
  variable tpdm RBC_Internal_Test_Pkg::Unit_Test_Pkg::Test_TryPutDiagMsg
  variable tpdm_inDataBus "$tpdm/inDataBus"
  variable tpdm_diagMsg "$tpdm/inDiagMsg"
  variable tpdm_success "$tpdm/outSuccess"
  variable tpdm_outDataBus "$tpdm/outDataBus"

  ################################# SIMULATION #################################
  
  proc executeSimulationStep {t_train {n_steps 1}} {
	SSM::cycle $n_steps
	expr {$t_train + 0.2*$n_steps}
  }
  
  ################################## MESSAGES ##################################
  
  # clears the train message and the triggered track message
  proc resetMessages {} {
	variable trainMsg
	variable triggeredTrackMsg
    SSM::set $trainMsg {(false, (false, 0, 0.0, 0, Q_MARQSTREASON_Start_selected_by_driver, 0.0, 0, Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA, 0), ((false, (0, 0, Q_SCALE_10_cm_scale, 0, 0, Q_DIRLRBG_Reverse, Q_DLRBG_Reverse, 0, 0, Q_LENGTH_No_train_integrity_information_available, 0, 0, Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0)), (false, (0, 0, Q_SCALE_10_cm_scale, 0, 0, 0, Q_DIRLRBG_Reverse, Q_DLRBG_Reverse, 0, 0, Q_LENGTH_No_train_integrity_information_available, 0, 0, Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0)), (false, 0, ((false, (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))), (false, M_ERROR_Balise_group_linking_consistency_error), (false, 0), (false, 0), (false, NC_CDTRAIN_Cant_Deficiency_80_mm, NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category, 0, 0, M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles, M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, 0, 0, ((M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0), (M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0), (M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0)), 0, (0, 0, 0))))}
    SSM::set $triggeredTrackMsg {((0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), (((0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0), (0, Q_DIR_Reverse, false, 0, 0)), (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))}
  }
  
  # sets the visibility of the message on true
  # - internal function
  proc prepareTrainMsg {} {
    variable trainMsg
    util::assign "$trainMsg." present=true
    util::assign "$trainMsg.header." present=true
  }
  
  # sets the properties of the train message header
  proc setTrainMsgHeader {args} {
    variable trainMsg
    rbc::prepareTrainMsg
    eval util::assign "$trainMsg.header." $args  
  }
  
  # sets the properties of the triggered track message header
  proc setTriggeredTrackMsgHeader {args} {
    variable triggeredTrackMsg
    eval util::assign "$triggeredTrackMsg.Header." $args  
  }
  
  # checks the properties of the track message header
  proc checkTrackMsgHeader {args} {
    variable trackMsg
    eval util::check "$trackMsg.Header." $args  
  }

  ################################## PACKETS ##################################
  
  # sets the properties of the train message packet 0
  proc setTrainMsgPacket0 {args} {
    variable trainMsg
	util::assign "$trainMsg.packets.p0." valid=true
	util::assign "$trainMsg.packets.p0.packet0." NID_PACKET=0
    eval util::assign "$trainMsg.packets.p0.packet0." $args  
  }
  
  # sets the properties of the train message packet 1
  proc setTrainMsgPacket1 {args} {
    variable trainMsg
	util::assign "$trainMsg.packets.p1." valid=true
	util::assign "$trainMsg.packets.p1.packet1." NID_PACKET=1
    eval util::assign "$trainMsg.packets.p1.packet1." $args  
  }
  
  # check the properties of the track message packets
  # - use colon for accessing array elements
  # example:
  # rbc::checkTrackMsgPackets PacketData:0=57 PacketData:1=2
  proc checkTrackMsgPackets {args} {
    variable trackMsg
	foreach val $args {
      set a [split $val =]
	  set v [split [lindex $a 0] :]
	  # call with tcl access of array elements - quoted square brackets: Array\[elementNumber\]
	  util::check "$trackMsg.Messages." "[lindex $v 0]\[[lindex $v 1]\]=[lindex $a 1]"
    }
  }

  ############################ SESSION MANAGEMENT #############################
  
  # checks the properties of the train data
  proc checkTrainData {args} {
    variable sessionMgt
    eval util::check "$sessionMgt.m_TrainData." $args  
  }
  
  # checks the properties of the position data
  proc checkPositionData {args} {
    variable sessionMgt
    eval util::check "$sessionMgt.m_PosData." $args  
  }
  
  ########################## SESSION ESTABLISHMENT ############################
  
  # establishes the radio connection (RBC <-> OBU)
  proc establishRadioSession {t_train} {
    # (01) Initialization cycle
    rbc::resetMessages
    set t_train [rbc::executeSimulationStep $t_train]

    # (02) Send Train Message 155 (OBU to RBC)
    rbc::setTrainMsgHeader nid_message=155 t_train=$t_train nid_engine=50001
    set t_train [rbc::executeSimulationStep $t_train]

    # (03) empty cycle
    rbc::resetMessages
    set t_train [rbc::executeSimulationStep $t_train]

    # (04) Send Train Message 159 (OBU to RBC)
    rbc::setTrainMsgHeader nid_message=159 t_train=$t_train nid_engine=50001
    set t_train [rbc::executeSimulationStep $t_train]

    # (05) empty cycle
    rbc::resetMessages
    set t_train [rbc::executeSimulationStep $t_train]

    # (06) Send Train Message 129 including Packet 0 (OBU to RBC)
    rbc::setTrainMsgHeader nid_message=129 t_train=$t_train nid_engine=50001
    rbc::setTrainMsgPacket0 NID_LRBG=353 L_PACKET=8190
	# RBC sends message 8 in this cycle -> store time for acknowledgement
	set t_train_msg8 $t_train
    set t_train [rbc::executeSimulationStep $t_train]

    # (07) empty cycle
    rbc::resetMessages
    set t_train [rbc::executeSimulationStep $t_train]

    # (08) Send Train Message 146 (OBU to RBC)
    rbc::setTrainMsgHeader nid_message=146 t_train=$t_train nid_engine=50001 xT_TRAIN=$t_train_msg8
    set t_train [rbc::executeSimulationStep $t_train]
	
	# (10) empty cycles
    rbc::resetMessages
	# RBC sends message 24 in this cycle -> store time for acknowledgement
	set t_train_msg24 $t_train
    set t_train [rbc::executeSimulationStep $t_train]
	
    # (11) empty cycles
    rbc::resetMessages
    set t_train [rbc::executeSimulationStep $t_train]

    # (12) Send Train Message 146 (OBU to RBC)
    rbc::setTrainMsgHeader nid_message=146 t_train=$t_train nid_engine=50001 xT_TRAIN=$t_train_msg24
    set t_train [rbc::executeSimulationStep $t_train 2]
    
	# return the actually train time
	return $t_train
  }

  ########################## DIAGNOSTIC MESSAGES ############################
  
  # operator: Test_TryPutDiagMsg
  # sets the properties of a incoming diagnostic message
  proc setDiagMsg {args} {
    variable tpdm_diagMsg
	util::assign "$tpdm_diagMsg." valid=true
    eval util::assign "$tpdm_diagMsg." $args  
  }
  
  # operator: Test_TryPutDiagMsg
  # resets the incoming diagnostic message
  proc resetDiagMsg {args} {
    variable tpdm_diagMsg
	SSM::set $tpdm_diagMsg {(false, RBC_Diagnostic_Pkg::DIAG_MSG_TYPE_information, RBC_Diagnostic_Pkg::DIAG_MSG_SRC_Process_Unconditional_Emergency_Message, RBC_Diagnostic_Pkg::DIAG_MSG_Failure_during_session_establishment)}
  }
  
  # operator: Test_TryPutDiagMsg
  # sets the valid state of a given range of diagnostic messages
  # - first and second parameter defines the range (index starts at 0)
  # - state: set state on true or false?
  # example:
  # rbc::setDiagMsgValidState 0 15 true
  proc setDiagMsgValidState {start end state} {
    variable tpdm_inDataBus
	for {set i $start} {$i <= $end} {incr i} {
		util::assign "$tpdm_inDataBus.diagnostic\[$i\]." valid=$state
	}
  }
  
  # operator: Test_TryPutDiagMsg
  # check the success of the put operator
  # state: check for true or false
  # example:
  # rbc::checkPutSuccess true
  proc checkPutSuccess {state args} {
    variable tpdm_success
	# check if diagnostic message is valid
	util::check "$tpdm_success" =$state
  }
  
  # operator: Test_TryPutDiagMsg
  # check the properties of the diagnostic messages on the RBC data bus and if its valid
  # - first parameter refers to the message number (index starts at 0)
  # example:
  # rbc::checkDiagMsg 0
  proc checkDiagMsg {num args} {
    variable tpdm_outDataBus
	# check if diagnostic message is valid
	util::check "$tpdm_outDataBus.diagnostic\[$num\]." valid=true
	# check the properties
	foreach val $args {
	  util::check "$tpdm_outDataBus.diagnostic\[$num\]." $val
    }
  }
  
  # operator: Test_TryPutDiagMsg
  # check the valid state of a given range of diagnostic messages
  # - first and second parameter defines the range (index starts at 0)
  # - state: check for true or false?
  # example:
  # rbc::checkDiagMsgValidState 0 15 false
  proc checkDiagMsgValidState {start end state} {
    variable tpdm_outDataBus
	for {set i $start} {$i <= $end} {incr i} {
		util::check "$tpdm_outDataBus.diagnostic\[$i\]." valid=$state
	}
  }
  
}

