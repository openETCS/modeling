/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-12-01T21:19:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GenAll_EnvSim_Internal.h"

#ifndef KCG_USER_DEFINED_INIT
void GenAll_init_EnvSim_Internal(outC_GenAll_EnvSim_Internal *outC)
{
  kcg_int i61;
  kcg_int i60;
  kcg_int i59;
  kcg_int i58;
  kcg_int i57;
  kcg_int i56;
  kcg_int i55;
  kcg_int i54;
  kcg_int i53;
  kcg_int i52;
  kcg_int i51;
  kcg_int i50;
  kcg_int i49;
  kcg_int i48;
  kcg_int i47;
  kcg_int i46;
  kcg_int i45;
  kcg_int i44;
  kcg_int i43;
  kcg_int i42;
  kcg_int i41;
  kcg_int i40;
  kcg_int i39;
  kcg_int i38;
  kcg_int i37;
  kcg_int i36;
  kcg_int i35;
  kcg_int i34;
  kcg_int i33;
  kcg_int i32;
  kcg_int i31;
  kcg_int i30;
  kcg_int i29;
  kcg_int i28;
  kcg_int i27;
  kcg_int i26;
  kcg_int i25;
  kcg_int i24;
  kcg_int i23;
  kcg_int i22;
  kcg_int i21;
  kcg_int i20;
  kcg_int i19;
  kcg_int i18;
  kcg_int i17;
  kcg_int i16;
  kcg_int i15;
  kcg_int i14;
  kcg_int i13;
  kcg_int i12;
  kcg_int i11;
  kcg_int i10;
  kcg_int i9;
  kcg_int i8;
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L36.Header.radioDevice = 0;
  outC->_L36.Header.receivedSystemTime = 0;
  outC->_L36.Header.nid_message = 0;
  outC->_L36.Header.t_train = 0;
  outC->_L36.Header.m_ack = 0;
  outC->_L36.Header.nid_lrbg = 0;
  outC->_L36.Header.t_train_reference = 0;
  outC->_L36.Header.nid_em = 0;
  outC->_L36.Header.q_scale = 0;
  outC->_L36.Header.d_sr = 0;
  outC->_L36.Header.t_sh_rqst = 0;
  outC->_L36.Header.d_ref = 0;
  outC->_L36.Header.q_dir = 0;
  outC->_L36.Header.d_emergencystop = 0;
  outC->_L36.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->_L36.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L36.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L36.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L36.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L36.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L36.Messages.PacketData[i1] = 0;
  }
  outC->_L35.Header.radioDevice = 0;
  outC->_L35.Header.receivedSystemTime = 0;
  outC->_L35.Header.nid_message = 0;
  outC->_L35.Header.t_train = 0;
  outC->_L35.Header.m_ack = 0;
  outC->_L35.Header.nid_lrbg = 0;
  outC->_L35.Header.t_train_reference = 0;
  outC->_L35.Header.nid_em = 0;
  outC->_L35.Header.q_scale = 0;
  outC->_L35.Header.d_sr = 0;
  outC->_L35.Header.t_sh_rqst = 0;
  outC->_L35.Header.d_ref = 0;
  outC->_L35.Header.q_dir = 0;
  outC->_L35.Header.d_emergencystop = 0;
  outC->_L35.Header.m_version = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L35.Messages.PacketHeaders[i2].nid_packet = 0;
    outC->_L35.Messages.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L35.Messages.PacketHeaders[i2].valid = kcg_true;
    outC->_L35.Messages.PacketHeaders[i2].startAddress = 0;
    outC->_L35.Messages.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L35.Messages.PacketData[i3] = 0;
  }
  outC->_L34.registration.valid = kcg_true;
  outC->_L34.registration.mobileDeviceNo = 0;
  outC->_L34.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L34.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L34.registration.nid_mn = 0;
  outC->_L34.connection.valid = kcg_true;
  outC->_L34.connection.mobileDeviceNo = 0;
  outC->_L34.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L34.connection.nid_radio = 0;
  outC->_L34.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L34.connection.connectionLost = kcg_true;
  outC->_L34.connection.isInRadioHole = kcg_true;
  outC->_L34.session.valid = kcg_true;
  outC->_L34.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L34.session.nid_c = 0;
  outC->_L34.session.nid_rbc = 0;
  outC->_L34.session.nid_radio = 0;
  outC->_L33.outOfMemSpace = kcg_true;
  outC->_L33.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L33.positionCalculation_inconsistent = kcg_true;
  outC->_L33.linkedBGMissed = kcg_true;
  outC->_L33.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L33.BG_LinkingConsistencyError = kcg_true;
  outC->_L33.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L33.doubleRepositioningError = kcg_true;
  outC->_L33.bg.valid = kcg_true;
  outC->_L33.bg.nid_c = 0;
  outC->_L33.bg.nid_bg = 0;
  outC->_L33.bg.q_link = Q_LINK_Unlinked;
  outC->_L33.bg.location.nominal = 0;
  outC->_L33.bg.location.d_min = 0;
  outC->_L33.bg.location.d_max = 0;
  outC->_L33.bg.seqNoOnTrack = 0;
  outC->_L33.bg.infoFromLinking.valid = kcg_true;
  outC->_L33.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L33.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L33.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L33.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L33.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L33.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L33.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L33.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L33.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L33.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L33.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L33.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L33.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L33.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L33.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L33.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L33.bg.infoFromLinking.linkingInfo.q_linkorientation =
    _2_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L33.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L33.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L33.bg.infoFromPassing.valid = kcg_true;
  outC->_L33.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L33.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L33.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L33.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L33.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L33.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L33.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L33.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L33.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L33.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L33.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L33.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L33.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L33.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i4 = 0; i4 < 33; i4++) {
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].valid = kcg_true;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].nid_LRBG = 0;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].q_dir = Q_DIR_Reverse;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].d_link = 0;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].nid_c = 0;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].nid_bg = 0;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].q_linkorientation =
      _2_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L33.bg.infoFromPassing.linkedBGs[i4].q_locacc = 0;
  }
  outC->_L33.bg.missed = kcg_true;
  outC->_L32.linkedBGError = kcg_true;
  outC->_L32.unlinkedBGError = kcg_true;
  outC->_L32.BG_versionIncompatible = kcg_true;
  outC->_L32.radioSequenceError = kcg_true;
  outC->_L32.tNvContactError = kcg_true;
  outC->_L32.otherTimingError = kcg_true;
  outC->_L32.radioMessageConsistencyError = kcg_true;
  outC->_L32.nid_c = 0;
  outC->_L32.nid_errorbg = 0;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29.Message.valid = kcg_true;
  outC->_L29.Message.nid_message = 0;
  outC->_L29.Message.l_message = 0;
  outC->_L29.Message.t_train = 0;
  outC->_L29.Message.nid_engine = 0;
  outC->_L29.Message.field1 = 0;
  outC->_L29.Message.field2 = 0;
  outC->_L29.Message.field3 = 0;
  for (i5 = 0; i5 < 50; i5++) {
    outC->_L29.OptionalPackets[i5] = 0;
  }
  outC->_L28 = 0.0;
  outC->_L27 = kcg_true;
  outC->_L26.Header.radioDevice = 0;
  outC->_L26.Header.receivedSystemTime = 0;
  outC->_L26.Header.nid_message = 0;
  outC->_L26.Header.t_train = 0;
  outC->_L26.Header.m_ack = 0;
  outC->_L26.Header.nid_lrbg = 0;
  outC->_L26.Header.t_train_reference = 0;
  outC->_L26.Header.nid_em = 0;
  outC->_L26.Header.q_scale = 0;
  outC->_L26.Header.d_sr = 0;
  outC->_L26.Header.t_sh_rqst = 0;
  outC->_L26.Header.d_ref = 0;
  outC->_L26.Header.q_dir = 0;
  outC->_L26.Header.d_emergencystop = 0;
  outC->_L26.Header.m_version = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L26.Messages.PacketHeaders[i6].nid_packet = 0;
    outC->_L26.Messages.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L26.Messages.PacketHeaders[i6].valid = kcg_true;
    outC->_L26.Messages.PacketHeaders[i6].startAddress = 0;
    outC->_L26.Messages.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L26.Messages.PacketData[i7] = 0;
  }
  outC->_L25.Header.q_updown = 0;
  outC->_L25.Header.m_version = 0;
  outC->_L25.Header.q_media = 0;
  outC->_L25.Header.n_pig = 0;
  outC->_L25.Header.n_total = 0;
  outC->_L25.Header.m_dup = 0;
  outC->_L25.Header.m_mcount = 0;
  outC->_L25.Header.nid_c = 0;
  outC->_L25.Header.nid_bg = 0;
  outC->_L25.Header.q_link = 0;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L25.Messages.PacketHeaders[i8].nid_packet = 0;
    outC->_L25.Messages.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L25.Messages.PacketHeaders[i8].valid = kcg_true;
    outC->_L25.Messages.PacketHeaders[i8].startAddress = 0;
    outC->_L25.Messages.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L25.Messages.PacketData[i9] = 0;
  }
  outC->_L24.targetType = EoA_TargetManagement_types;
  outC->_L24.distance = 0;
  outC->_L24.speed = 0;
  outC->_L24.valid = kcg_true;
  for (i14 = 0; i14 < 110; i14++) {
    for (i10 = 0; i10 < 114; i10++) {
      outC->_L23.MRSP_EBD_curves[i14].distances[i10] = 0.0;
    }
    for (i11 = 0; i11 < 114; i11++) {
      outC->_L23.MRSP_EBD_curves[i14].speeds[i11] = 0.0;
    }
    for (i12 = 0; i12 < 114; i12++) {
      outC->_L23.MRSP_EBD_curves[i14].accelerations[i12] = 0.0;
    }
    for (i13 = 0; i13 < 114; i13++) {
      outC->_L23.MRSP_EBD_curves[i14].valid[i13] = kcg_true;
    }
  }
  for (i15 = 0; i15 < 114; i15++) {
    outC->_L23.EOA_SBD_curve.distances[i15] = 0.0;
  }
  for (i16 = 0; i16 < 114; i16++) {
    outC->_L23.EOA_SBD_curve.speeds[i16] = 0.0;
  }
  for (i17 = 0; i17 < 114; i17++) {
    outC->_L23.EOA_SBD_curve.accelerations[i17] = 0.0;
  }
  for (i18 = 0; i18 < 114; i18++) {
    outC->_L23.EOA_SBD_curve.valid[i18] = kcg_true;
  }
  for (i19 = 0; i19 < 114; i19++) {
    outC->_L23.SvL_LoA_EBD_curve.distances[i19] = 0.0;
  }
  for (i20 = 0; i20 < 114; i20++) {
    outC->_L23.SvL_LoA_EBD_curve.speeds[i20] = 0.0;
  }
  for (i21 = 0; i21 < 114; i21++) {
    outC->_L23.SvL_LoA_EBD_curve.accelerations[i21] = 0.0;
  }
  for (i22 = 0; i22 < 114; i22++) {
    outC->_L23.SvL_LoA_EBD_curve.valid[i22] = kcg_true;
  }
  for (i23 = 0; i23 < 114; i23++) {
    outC->_L23.GUI_curve.distances[i23] = 0.0;
  }
  for (i24 = 0; i24 < 114; i24++) {
    outC->_L23.GUI_curve.speeds[i24] = 0.0;
  }
  for (i25 = 0; i25 < 114; i25++) {
    outC->_L23.GUI_curve.accelerations[i25] = 0.0;
  }
  for (i26 = 0; i26 < 114; i26++) {
    outC->_L23.GUI_curve.valid[i26] = kcg_true;
  }
  outC->_L23.GUI_curve_enabled = kcg_true;
  outC->_L22.updatedTargetList = kcg_true;
  for (i27 = 0; i27 < 110; i27++) {
    outC->_L22.MRSP_targetList[i27].targetType = EoA_TargetManagement_types;
    outC->_L22.MRSP_targetList[i27].distance = 0.0;
    outC->_L22.MRSP_targetList[i27].speed = 0.0;
  }
  outC->_L22.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L22.EOA_target.distance = 0.0;
  outC->_L22.EOA_target.speed = 0.0;
  outC->_L22.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L22.SvL_LoA_target.distance = 0.0;
  outC->_L22.SvL_LoA_target.speed = 0.0;
  for (i28 = 0; i28 < 311; i28++) {
    outC->_L20[i28] = 0;
  }
  for (i29 = 0; i29 < 999; i29++) {
    outC->_L17[i29] = 0;
  }
  outC->_L18.valid = kcg_true;
  outC->_L18.info.train_status.valid = kcg_true;
  outC->_L18.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L18.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L18.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L18.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L18.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L18.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L18.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L18.info.brake_status.valid = kcg_true;
  outC->_L18.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L18.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L18.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L18.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L18.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L18.info.brake_pressure.valid = kcg_true;
  outC->_L18.info.brake_pressure.pressure = 0;
  outC->_L18.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L18.info.train_data_info.valid = kcg_true;
  outC->_L18.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L18.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L18.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L18.info.train_data_info.trainLength = 0;
  outC->_L18.info.train_data_info.brakePerctage = 0;
  outC->_L18.info.train_data_info.maxTrainSpeed = 0;
  outC->_L18.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L18.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L18.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L18.info.train_data_info.axleNumber = 0;
  outC->_L18.info.train_data_info.numberNationalSystems = 0;
  for (i30 = 0; i30 < 5; i30++) {
    outC->_L18.info.train_data_info.nationSystems[i30] = 0;
  }
  outC->_L18.info.train_data_info.numberTractionSystems = 0;
  for (i31 = 0; i31 < 4; i31++) {
    outC->_L18.info.train_data_info.tractionSystem[i31].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L18.info.train_data_info.tractionSystem[i31].nid_ctraction = 0;
  }
  outC->_L18.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L18.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L18.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L18.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L18.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L18.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L18.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L18.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->_L19 = kcg_true;
  for (i32 = 0; i32 < 999; i32++) {
    outC->_L16[i32] = 0;
  }
  outC->_L15.valid = kcg_true;
  outC->_L15.info.train_status.valid = kcg_true;
  outC->_L15.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L15.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L15.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L15.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L15.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L15.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L15.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L15.info.brake_status.valid = kcg_true;
  outC->_L15.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L15.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L15.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L15.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L15.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L15.info.brake_pressure.valid = kcg_true;
  outC->_L15.info.brake_pressure.pressure = 0;
  outC->_L15.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L15.info.train_data_info.valid = kcg_true;
  outC->_L15.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L15.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15.info.train_data_info.trainLength = 0;
  outC->_L15.info.train_data_info.brakePerctage = 0;
  outC->_L15.info.train_data_info.maxTrainSpeed = 0;
  outC->_L15.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L15.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L15.info.train_data_info.axleNumber = 0;
  outC->_L15.info.train_data_info.numberNationalSystems = 0;
  for (i33 = 0; i33 < 5; i33++) {
    outC->_L15.info.train_data_info.nationSystems[i33] = 0;
  }
  outC->_L15.info.train_data_info.numberTractionSystems = 0;
  for (i34 = 0; i34 < 4; i34++) {
    outC->_L15.info.train_data_info.tractionSystem[i34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15.info.train_data_info.tractionSystem[i34].nid_ctraction = 0;
  }
  outC->_L15.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L15.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L15.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L15.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L15.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L15.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L15.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L15.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  for (i35 = 0; i35 < 311; i35++) {
    outC->_L14[i35] = 0;
  }
  outC->_L13 = kcg_true;
  outC->_L12.emergencyBrake = kcg_true;
  outC->_L12.serviceBrake = kcg_true;
  outC->_L12.tractionCutOff = kcg_true;
  outC->_L12.currentPositionInCm = 0;
  outC->_L12.currentPositionInM = 0.0;
  outC->_L12.currentVelocityInKmH = 0.0;
  outC->_L12.afbActive = kcg_true;
  outC->_L12.trainPositionDeltaMax = 0.0;
  outC->_L12.trainPositionNominal = 0.0;
  outC->_L12.trainPositionDeltaMin = 0.0;
  outC->_L12.timestamp = 0;
  outC->_L11.reset = kcg_true;
  outC->_L11.targetSpeed = 0.0;
  outC->_L11.traction = 0.0;
  outC->_L11.brake = 0.0;
  outC->_L11.initialPosition = 0.0;
  outC->_L11.initialVelocity = 0.0;
  outC->_L11.mode = 0;
  outC->_L11.level = 0;
  outC->_L11.mobileHWStatus = 0;
  outC->_L11.openDesk = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.info.train_status.valid = kcg_true;
  outC->_L10.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L10.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L10.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L10.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L10.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L10.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L10.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L10.info.brake_status.valid = kcg_true;
  outC->_L10.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L10.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L10.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L10.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L10.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L10.info.brake_pressure.valid = kcg_true;
  outC->_L10.info.brake_pressure.pressure = 0;
  outC->_L10.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L10.info.train_data_info.valid = kcg_true;
  outC->_L10.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L10.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L10.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L10.info.train_data_info.trainLength = 0;
  outC->_L10.info.train_data_info.brakePerctage = 0;
  outC->_L10.info.train_data_info.maxTrainSpeed = 0;
  outC->_L10.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L10.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L10.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L10.info.train_data_info.axleNumber = 0;
  outC->_L10.info.train_data_info.numberNationalSystems = 0;
  for (i36 = 0; i36 < 5; i36++) {
    outC->_L10.info.train_data_info.nationSystems[i36] = 0;
  }
  outC->_L10.info.train_data_info.numberTractionSystems = 0;
  for (i37 = 0; i37 < 4; i37++) {
    outC->_L10.info.train_data_info.tractionSystem[i37].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L10.info.train_data_info.tractionSystem[i37].nid_ctraction = 0;
  }
  outC->_L10.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L10.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L10.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L10.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L10.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L10.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L10.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L10.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->_L9.valid = kcg_true;
  outC->_L9.info.train_status.valid = kcg_true;
  outC->_L9.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L9.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L9.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L9.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L9.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L9.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L9.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L9.info.brake_status.valid = kcg_true;
  outC->_L9.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L9.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L9.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L9.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L9.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L9.info.brake_pressure.valid = kcg_true;
  outC->_L9.info.brake_pressure.pressure = 0;
  outC->_L9.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L9.info.train_data_info.valid = kcg_true;
  outC->_L9.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L9.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L9.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L9.info.train_data_info.trainLength = 0;
  outC->_L9.info.train_data_info.brakePerctage = 0;
  outC->_L9.info.train_data_info.maxTrainSpeed = 0;
  outC->_L9.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L9.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L9.info.train_data_info.axleNumber = 0;
  outC->_L9.info.train_data_info.numberNationalSystems = 0;
  for (i38 = 0; i38 < 5; i38++) {
    outC->_L9.info.train_data_info.nationSystems[i38] = 0;
  }
  outC->_L9.info.train_data_info.numberTractionSystems = 0;
  for (i39 = 0; i39 < 4; i39++) {
    outC->_L9.info.train_data_info.tractionSystem[i39].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L9.info.train_data_info.tractionSystem[i39].nid_ctraction = 0;
  }
  outC->_L9.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L9.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L9.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L9.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L9.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L9.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L9.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L9.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->_L8.present = kcg_true;
  outC->_L8.status.valid = kcg_true;
  outC->_L8.status.systemTime = 0;
  outC->_L8.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L8.status.nAlive = 0;
  outC->_L8.identifier.valid = kcg_true;
  outC->_L8.identifier.systemTime = 0;
  outC->_L8.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L8.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L8.identifier.l_name = 0;
  for (i40 = 0; i40 < 255; i40++) {
    outC->_L8.identifier.DMI_name[i40] = ' ';
  }
  outC->_L8.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.driverRequest.valid = kcg_true;
  outC->_L8.driverRequest.systemTime = 0;
  outC->_L8.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L8.driverIdentifier.valid = kcg_true;
  outC->_L8.driverIdentifier.systemTime = 0;
  for (i41 = 0; i41 < 9; i41++) {
    outC->_L8.driverIdentifier.driverIdentifier[i41] = ' ';
  }
  outC->_L8.trainRunningNumber.valid = kcg_true;
  outC->_L8.trainRunningNumber.systemTime = 0;
  outC->_L8.trainRunningNumber.trainRunningNumber = 0;
  outC->_L8.radioNetData.valid = kcg_true;
  outC->_L8.radioNetData.systemTime = 0;
  outC->_L8.textMessageAck.valid = kcg_true;
  outC->_L8.textMessageAck.systemTime = 0;
  outC->_L8.textMessageAck.textMessage_ID = 0;
  outC->_L8.textMessageAck.acknowledged = kcg_true;
  outC->_L8.trainDataAck.valid = kcg_true;
  outC->_L8.trainDataAck.systemTime = 0;
  outC->_L8.trainDataAck.acknowledged = kcg_true;
  outC->_L8.trainData.valid = kcg_true;
  outC->_L8.trainData.systemTime = 0;
  outC->_L8.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8.trainData.l_train = 0;
  outC->_L8.trainData.m_brakeperct = 0;
  outC->_L8.trainData.v_maxTrain = 0;
  outC->_L8.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L8.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L8.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8.adhesionFactor.valid = kcg_true;
  outC->_L8.adhesionFactor.systemTime = 0;
  outC->_L8.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L8.iconAck.valid = kcg_true;
  outC->_L8.iconAck.systemTime = 0;
  outC->_L8.iconAck.DMI_nid_icon_identifier = 0;
  outC->_L8.selectedLevel.valid = kcg_true;
  outC->_L8.selectedLevel.systemTime = 0;
  outC->_L8.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L8.selectedLevel.level.nid_stm = 0;
  outC->_L7.present = kcg_true;
  outC->_L7.dynamic.valid = kcg_true;
  outC->_L7.dynamic.system_clock = 0;
  outC->_L7.dynamic.v_train = 0;
  outC->_L7.dynamic.location_front_train = 0;
  outC->_L7.dynamic.location_brake_target = 0;
  outC->_L7.dynamic.v_target = 0;
  outC->_L7.dynamic.v_permitted = 0;
  outC->_L7.dynamic.v_release = 0;
  outC->_L7.dynamic.location_brake_curve_starting_point = 0;
  outC->_L7.dynamic.v_intervention = 0;
  outC->_L7.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L7.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L7.dynamic.level.nid_stm = 0;
  outC->_L7.dynamic.nid_c = 0;
  outC->_L7.dynamic.nid_c_valid = kcg_true;
  outC->_L7.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L7.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L7.dynamic.location_LOA = 0;
  outC->_L7.dynamic.v_LOA = 0;
  outC->_L7.dynamic.location_KP_Balise_Track = 0;
  outC->_L7.dynamic.distance_KP_Balise = 0;
  outC->_L7.dynamic.distance_to_TSA = 0;
  outC->_L7.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L7.dynamic.distanceIndicationPoint = 0;
  outC->_L7.menu_request.valid = kcg_true;
  outC->_L7.menu_request.system_clock = 0;
  outC->_L7.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L7.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L7.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L7.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L7.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L7.entry_request.valid = kcg_true;
  outC->_L7.entry_request.system_clock = 0;
  outC->_L7.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L7.evc_coded_train_data.valid = kcg_true;
  outC->_L7.evc_coded_train_data.system_clock = 0;
  outC->_L7.evc_coded_train_data.trainID.number = 0;
  outC->_L7.evc_coded_train_data.trainID.dig1 = 0;
  outC->_L7.evc_coded_train_data.trainID.dig2 = 0;
  outC->_L7.evc_coded_train_data.trainID.dig3 = 0;
  outC->_L7.evc_coded_train_data.trainID.dig4 = 0;
  outC->_L7.evc_coded_train_data.trainID.dig5 = 0;
  outC->_L7.evc_coded_train_data.trainLength.number = 0;
  outC->_L7.evc_coded_train_data.trainLength.dig1 = 0;
  outC->_L7.evc_coded_train_data.trainLength.dig2 = 0;
  outC->_L7.evc_coded_train_data.trainLength.dig3 = 0;
  outC->_L7.evc_coded_train_data.trainLength.dig4 = 0;
  outC->_L7.evc_coded_train_data.brakeModel.number = 0;
  outC->_L7.evc_coded_train_data.brakeModel.dig1 = 0;
  outC->_L7.evc_coded_train_data.brakeModel.dig2 = 0;
  outC->_L7.evc_coded_train_data.brakeModel.dig3 = 0;
  outC->_L7.evc_coded_train_data.vmax.number = 0;
  outC->_L7.evc_coded_train_data.vmax.dig1 = 0;
  outC->_L7.evc_coded_train_data.vmax.dig2 = 0;
  outC->_L7.evc_coded_train_data.vmax.dig3 = 0;
  outC->_L7.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L7.evc_coded_train_data.airTightSystem.number = 0;
  outC->_L7.evc_coded_train_data.airTightSystem.dig1 = 0;
  outC->_L7.evc_coded_train_data.airTightSystem.dig2 = 0;
  outC->_L7.evc_coded_train_data.airTightSystem.dig3 = 0;
  outC->_L7.evc_coded_train_data.mLoadingGauge.number = 0;
  outC->_L7.evc_coded_train_data.mLoadingGauge.dig1 = 0;
  outC->_L7.evc_coded_train_data.mLoadingGauge.dig2 = 0;
  outC->_L7.evc_coded_train_data.mLoadingGauge.dig3 = 0;
  outC->_L7.textMessage.valid = kcg_true;
  outC->_L7.textMessage.system_clock = 0;
  outC->_L7.textMessage.textMessage_ID = 0;
  outC->_L7.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L7.textMessage.l_text = 0;
  for (i42 = 0; i42 < 255; i42++) {
    outC->_L7.textMessage.x_text[i42] = ' ';
  }
  outC->_L7.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L7.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L7.trackDescription.valid = kcg_true;
  outC->_L7.trackDescription.system_clock = 0;
  outC->_L7.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (i43 = 0; i43 < 32; i43++) {
    outC->_L7.trackDescription.speedProfiles.speedProfiles[i43].valid =
      kcg_true;
    outC->_L7.trackDescription.speedProfiles.speedProfiles[i43].Loc_Abs = 0;
    outC->_L7.trackDescription.speedProfiles.speedProfiles[i43].Loc_LRBG = 0;
    outC->_L7.trackDescription.speedProfiles.speedProfiles[i43].MRS = 0;
  }
  outC->_L7.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (i44 = 0; i44 < 32; i44++) {
    outC->_L7.trackDescription.gradientProfiles.gradientProfiles[i44].valid =
      kcg_true;
    outC->_L7.trackDescription.gradientProfiles.gradientProfiles[i44].begin_section =
      0;
    outC->_L7.trackDescription.gradientProfiles.gradientProfiles[i44].end_section =
      0;
    outC->_L7.trackDescription.gradientProfiles.gradientProfiles[i44].gradient =
      0;
  }
  outC->_L7.trackDescription.trackConditions.nIter = 0;
  for (i45 = 0; i45 < 32; i45++) {
    outC->_L7.trackDescription.trackConditions.trackCondition[i45].d_trackcond =
      0;
    outC->_L7.trackDescription.trackConditions.trackCondition[i45].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L7.identifierRequest.valid = kcg_true;
  outC->_L7.identifierRequest.system_clock = 0;
  outC->_L7.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.identifierRequest.l_name = 0;
  for (i46 = 0; i46 < 255; i46++) {
    outC->_L7.identifierRequest.x_name[i46] = ' ';
  }
  outC->_L7.identifierRequest.l_extra = 0;
  outC->_L7.systemVersion.valid = kcg_true;
  outC->_L7.systemVersion.system_clock = 0;
  outC->_L7.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.displayControl.valid = kcg_true;
  outC->_L7.displayControl.cab_is_active = kcg_true;
  outC->_L7.displayControl.system_clock = 0;
  outC->_L7.EVC_levelData.valid = kcg_true;
  outC->_L7.EVC_levelData.system_clock = 0;
  outC->_L7.EVC_levelData.levelList.number = 0;
  for (i47 = 0; i47 < 32; i47++) {
    outC->_L7.EVC_levelData.levelList.levelList[i47].level = M_LEVEL_Level_0;
    outC->_L7.EVC_levelData.levelList.levelList[i47].nid_stm = 0;
  }
  outC->_L7.EVC_radioNetData.valid = kcg_true;
  outC->_L7.EVC_radioNetData.system_clock = 0;
  outC->_L7.EVC_radioNetData.nid_mn = 0;
  outC->_L7.driverIdentifier.valid = kcg_true;
  outC->_L7.driverIdentifier.systemTime = 0;
  for (i48 = 0; i48 < 9; i48++) {
    outC->_L7.driverIdentifier.driverIdentifier[i48] = ' ';
  }
  outC->_L7.trainRunningNumber.valid = kcg_true;
  outC->_L7.trainRunningNumber.systemTime = 0;
  outC->_L7.trainRunningNumber.trainRunningNumber = 0;
  outC->_L7.trainData.valid = kcg_true;
  outC->_L7.trainData.systemTime = 0;
  outC->_L7.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7.trainData.l_train = 0;
  outC->_L7.trainData.m_brakeperct = 0;
  outC->_L7.trainData.v_maxTrain = 0;
  outC->_L7.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L7.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L7.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7.adhesionFactor.valid = kcg_true;
  outC->_L7.adhesionFactor.systemTime = 0;
  outC->_L7.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L7.iconRequest.valid = kcg_true;
  outC->_L7.iconRequest.system_clock = 0;
  outC->_L7.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L7.iconRequest.DMI_m_icon_flashing_freq = 0.0;
  outC->_L7.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L7.iconRequest.DMI_nid_icon_rank = 0;
  outC->_L7.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L7.iconRequest.DMI_nid_area_rank = 0;
  outC->_L7.iconRequest.DMI_nid_icon_identifier = 0;
  outC->_L6 = 0.0;
  outC->_L5.present = kcg_true;
  outC->_L5.dynamic.valid = kcg_true;
  outC->_L5.dynamic.system_clock = 0;
  outC->_L5.dynamic.v_train = 0;
  outC->_L5.dynamic.location_front_train = 0;
  outC->_L5.dynamic.location_brake_target = 0;
  outC->_L5.dynamic.v_target = 0;
  outC->_L5.dynamic.v_permitted = 0;
  outC->_L5.dynamic.v_release = 0;
  outC->_L5.dynamic.location_brake_curve_starting_point = 0;
  outC->_L5.dynamic.v_intervention = 0;
  outC->_L5.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L5.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L5.dynamic.level.nid_stm = 0;
  outC->_L5.dynamic.nid_c = 0;
  outC->_L5.dynamic.nid_c_valid = kcg_true;
  outC->_L5.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L5.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L5.dynamic.location_LOA = 0;
  outC->_L5.dynamic.v_LOA = 0;
  outC->_L5.dynamic.location_KP_Balise_Track = 0;
  outC->_L5.dynamic.distance_KP_Balise = 0;
  outC->_L5.dynamic.distance_to_TSA = 0;
  outC->_L5.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L5.dynamic.distanceIndicationPoint = 0;
  outC->_L5.menu_request.valid = kcg_true;
  outC->_L5.menu_request.system_clock = 0;
  outC->_L5.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L5.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L5.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L5.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L5.entry_request.valid = kcg_true;
  outC->_L5.entry_request.system_clock = 0;
  outC->_L5.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L5.evc_coded_train_data.valid = kcg_true;
  outC->_L5.evc_coded_train_data.system_clock = 0;
  outC->_L5.evc_coded_train_data.trainID.number = 0;
  outC->_L5.evc_coded_train_data.trainID.dig1 = 0;
  outC->_L5.evc_coded_train_data.trainID.dig2 = 0;
  outC->_L5.evc_coded_train_data.trainID.dig3 = 0;
  outC->_L5.evc_coded_train_data.trainID.dig4 = 0;
  outC->_L5.evc_coded_train_data.trainID.dig5 = 0;
  outC->_L5.evc_coded_train_data.trainLength.number = 0;
  outC->_L5.evc_coded_train_data.trainLength.dig1 = 0;
  outC->_L5.evc_coded_train_data.trainLength.dig2 = 0;
  outC->_L5.evc_coded_train_data.trainLength.dig3 = 0;
  outC->_L5.evc_coded_train_data.trainLength.dig4 = 0;
  outC->_L5.evc_coded_train_data.brakeModel.number = 0;
  outC->_L5.evc_coded_train_data.brakeModel.dig1 = 0;
  outC->_L5.evc_coded_train_data.brakeModel.dig2 = 0;
  outC->_L5.evc_coded_train_data.brakeModel.dig3 = 0;
  outC->_L5.evc_coded_train_data.vmax.number = 0;
  outC->_L5.evc_coded_train_data.vmax.dig1 = 0;
  outC->_L5.evc_coded_train_data.vmax.dig2 = 0;
  outC->_L5.evc_coded_train_data.vmax.dig3 = 0;
  outC->_L5.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L5.evc_coded_train_data.airTightSystem.number = 0;
  outC->_L5.evc_coded_train_data.airTightSystem.dig1 = 0;
  outC->_L5.evc_coded_train_data.airTightSystem.dig2 = 0;
  outC->_L5.evc_coded_train_data.airTightSystem.dig3 = 0;
  outC->_L5.evc_coded_train_data.mLoadingGauge.number = 0;
  outC->_L5.evc_coded_train_data.mLoadingGauge.dig1 = 0;
  outC->_L5.evc_coded_train_data.mLoadingGauge.dig2 = 0;
  outC->_L5.evc_coded_train_data.mLoadingGauge.dig3 = 0;
  outC->_L5.textMessage.valid = kcg_true;
  outC->_L5.textMessage.system_clock = 0;
  outC->_L5.textMessage.textMessage_ID = 0;
  outC->_L5.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L5.textMessage.l_text = 0;
  for (i49 = 0; i49 < 255; i49++) {
    outC->_L5.textMessage.x_text[i49] = ' ';
  }
  outC->_L5.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L5.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L5.trackDescription.valid = kcg_true;
  outC->_L5.trackDescription.system_clock = 0;
  outC->_L5.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (i50 = 0; i50 < 32; i50++) {
    outC->_L5.trackDescription.speedProfiles.speedProfiles[i50].valid =
      kcg_true;
    outC->_L5.trackDescription.speedProfiles.speedProfiles[i50].Loc_Abs = 0;
    outC->_L5.trackDescription.speedProfiles.speedProfiles[i50].Loc_LRBG = 0;
    outC->_L5.trackDescription.speedProfiles.speedProfiles[i50].MRS = 0;
  }
  outC->_L5.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (i51 = 0; i51 < 32; i51++) {
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[i51].valid =
      kcg_true;
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[i51].begin_section =
      0;
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[i51].end_section =
      0;
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[i51].gradient =
      0;
  }
  outC->_L5.trackDescription.trackConditions.nIter = 0;
  for (i52 = 0; i52 < 32; i52++) {
    outC->_L5.trackDescription.trackConditions.trackCondition[i52].d_trackcond =
      0;
    outC->_L5.trackDescription.trackConditions.trackCondition[i52].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L5.identifierRequest.valid = kcg_true;
  outC->_L5.identifierRequest.system_clock = 0;
  outC->_L5.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.identifierRequest.l_name = 0;
  for (i53 = 0; i53 < 255; i53++) {
    outC->_L5.identifierRequest.x_name[i53] = ' ';
  }
  outC->_L5.identifierRequest.l_extra = 0;
  outC->_L5.systemVersion.valid = kcg_true;
  outC->_L5.systemVersion.system_clock = 0;
  outC->_L5.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.displayControl.valid = kcg_true;
  outC->_L5.displayControl.cab_is_active = kcg_true;
  outC->_L5.displayControl.system_clock = 0;
  outC->_L5.EVC_levelData.valid = kcg_true;
  outC->_L5.EVC_levelData.system_clock = 0;
  outC->_L5.EVC_levelData.levelList.number = 0;
  for (i54 = 0; i54 < 32; i54++) {
    outC->_L5.EVC_levelData.levelList.levelList[i54].level = M_LEVEL_Level_0;
    outC->_L5.EVC_levelData.levelList.levelList[i54].nid_stm = 0;
  }
  outC->_L5.EVC_radioNetData.valid = kcg_true;
  outC->_L5.EVC_radioNetData.system_clock = 0;
  outC->_L5.EVC_radioNetData.nid_mn = 0;
  outC->_L5.driverIdentifier.valid = kcg_true;
  outC->_L5.driverIdentifier.systemTime = 0;
  for (i55 = 0; i55 < 9; i55++) {
    outC->_L5.driverIdentifier.driverIdentifier[i55] = ' ';
  }
  outC->_L5.trainRunningNumber.valid = kcg_true;
  outC->_L5.trainRunningNumber.systemTime = 0;
  outC->_L5.trainRunningNumber.trainRunningNumber = 0;
  outC->_L5.trainData.valid = kcg_true;
  outC->_L5.trainData.systemTime = 0;
  outC->_L5.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5.trainData.l_train = 0;
  outC->_L5.trainData.m_brakeperct = 0;
  outC->_L5.trainData.v_maxTrain = 0;
  outC->_L5.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L5.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L5.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5.adhesionFactor.valid = kcg_true;
  outC->_L5.adhesionFactor.systemTime = 0;
  outC->_L5.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L5.iconRequest.valid = kcg_true;
  outC->_L5.iconRequest.system_clock = 0;
  outC->_L5.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L5.iconRequest.DMI_m_icon_flashing_freq = 0.0;
  outC->_L5.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L5.iconRequest.DMI_nid_icon_rank = 0;
  outC->_L5.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L5.iconRequest.DMI_nid_area_rank = 0;
  outC->_L5.iconRequest.DMI_nid_icon_identifier = 0;
  outC->_L2.Header.q_updown = 0;
  outC->_L2.Header.m_version = 0;
  outC->_L2.Header.q_media = 0;
  outC->_L2.Header.n_pig = 0;
  outC->_L2.Header.n_total = 0;
  outC->_L2.Header.m_dup = 0;
  outC->_L2.Header.m_mcount = 0;
  outC->_L2.Header.nid_c = 0;
  outC->_L2.Header.nid_bg = 0;
  outC->_L2.Header.q_link = 0;
  for (i56 = 0; i56 < 30; i56++) {
    outC->_L2.Messages.PacketHeaders[i56].nid_packet = 0;
    outC->_L2.Messages.PacketHeaders[i56].q_dir = Q_DIR_Reverse;
    outC->_L2.Messages.PacketHeaders[i56].valid = kcg_true;
    outC->_L2.Messages.PacketHeaders[i56].startAddress = 0;
    outC->_L2.Messages.PacketHeaders[i56].endAddress = 0;
  }
  for (i57 = 0; i57 < 500; i57++) {
    outC->_L2.Messages.PacketData[i57] = 0;
  }
  outC->_L3.Header.radioDevice = 0;
  outC->_L3.Header.receivedSystemTime = 0;
  outC->_L3.Header.nid_message = 0;
  outC->_L3.Header.t_train = 0;
  outC->_L3.Header.m_ack = 0;
  outC->_L3.Header.nid_lrbg = 0;
  outC->_L3.Header.t_train_reference = 0;
  outC->_L3.Header.nid_em = 0;
  outC->_L3.Header.q_scale = 0;
  outC->_L3.Header.d_sr = 0;
  outC->_L3.Header.t_sh_rqst = 0;
  outC->_L3.Header.d_ref = 0;
  outC->_L3.Header.q_dir = 0;
  outC->_L3.Header.d_emergencystop = 0;
  outC->_L3.Header.m_version = 0;
  for (i58 = 0; i58 < 30; i58++) {
    outC->_L3.Messages.PacketHeaders[i58].nid_packet = 0;
    outC->_L3.Messages.PacketHeaders[i58].q_dir = Q_DIR_Reverse;
    outC->_L3.Messages.PacketHeaders[i58].valid = kcg_true;
    outC->_L3.Messages.PacketHeaders[i58].startAddress = 0;
    outC->_L3.Messages.PacketHeaders[i58].endAddress = 0;
  }
  for (i59 = 0; i59 < 500; i59++) {
    outC->_L3.Messages.PacketData[i59] = 0;
  }
  outC->_L1.present = kcg_true;
  outC->_L1.status.valid = kcg_true;
  outC->_L1.status.systemTime = 0;
  outC->_L1.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L1.status.nAlive = 0;
  outC->_L1.identifier.valid = kcg_true;
  outC->_L1.identifier.systemTime = 0;
  outC->_L1.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L1.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L1.identifier.l_name = 0;
  for (i60 = 0; i60 < 255; i60++) {
    outC->_L1.identifier.DMI_name[i60] = ' ';
  }
  outC->_L1.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.driverRequest.valid = kcg_true;
  outC->_L1.driverRequest.systemTime = 0;
  outC->_L1.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L1.driverIdentifier.valid = kcg_true;
  outC->_L1.driverIdentifier.systemTime = 0;
  for (i61 = 0; i61 < 9; i61++) {
    outC->_L1.driverIdentifier.driverIdentifier[i61] = ' ';
  }
  outC->_L1.trainRunningNumber.valid = kcg_true;
  outC->_L1.trainRunningNumber.systemTime = 0;
  outC->_L1.trainRunningNumber.trainRunningNumber = 0;
  outC->_L1.radioNetData.valid = kcg_true;
  outC->_L1.radioNetData.systemTime = 0;
  outC->_L1.textMessageAck.valid = kcg_true;
  outC->_L1.textMessageAck.systemTime = 0;
  outC->_L1.textMessageAck.textMessage_ID = 0;
  outC->_L1.textMessageAck.acknowledged = kcg_true;
  outC->_L1.trainDataAck.valid = kcg_true;
  outC->_L1.trainDataAck.systemTime = 0;
  outC->_L1.trainDataAck.acknowledged = kcg_true;
  outC->_L1.trainData.valid = kcg_true;
  outC->_L1.trainData.systemTime = 0;
  outC->_L1.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.trainData.l_train = 0;
  outC->_L1.trainData.m_brakeperct = 0;
  outC->_L1.trainData.v_maxTrain = 0;
  outC->_L1.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.adhesionFactor.valid = kcg_true;
  outC->_L1.adhesionFactor.systemTime = 0;
  outC->_L1.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L1.iconAck.valid = kcg_true;
  outC->_L1.iconAck.systemTime = 0;
  outC->_L1.iconAck.DMI_nid_icon_identifier = 0;
  outC->_L1.selectedLevel.valid = kcg_true;
  outC->_L1.selectedLevel.systemTime = 0;
  outC->_L1.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L1.selectedLevel.level.nid_stm = 0;
  /* 1 */ InjectRadioMessage_init_EnvSim(&outC->_9_Context_1);
  /* 1 */ ProbeEVC_init_EnvSim(&outC->_8_Context_1);
  /* 1 */ ProbeSDM_init_EnvSim(&outC->_7_Context_1);
  /* 1 */ ProbeTracksideInput_init_EnvSim(&outC->_6_Context_1);
  /* 1 */ RemoteEVCBus_init_EnvSim(&outC->_5_Context_1);
  /* 1 */ RemoteDMIBus_init_EnvSim(&outC->_4_Context_1);
  /* 1 */ RemoteGUI_init_EnvSim(&outC->_3_Context_1);
  /* 1 */ RemoteEVC_init_EnvSim(&outC->_2_Context_1);
  /* 1 */ ScriptedTrack_init_EnvSim(&outC->_1_Context_1);
  /* 1 */ RemoteDMI_init_EnvSim(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GenAll_reset_EnvSim_Internal(outC_GenAll_EnvSim_Internal *outC)
{
  /* 1 */ InjectRadioMessage_reset_EnvSim(&outC->_9_Context_1);
  /* 1 */ ProbeEVC_reset_EnvSim(&outC->_8_Context_1);
  /* 1 */ ProbeSDM_reset_EnvSim(&outC->_7_Context_1);
  /* 1 */ ProbeTracksideInput_reset_EnvSim(&outC->_6_Context_1);
  /* 1 */ RemoteEVCBus_reset_EnvSim(&outC->_5_Context_1);
  /* 1 */ RemoteDMIBus_reset_EnvSim(&outC->_4_Context_1);
  /* 1 */ RemoteGUI_reset_EnvSim(&outC->_3_Context_1);
  /* 1 */ RemoteEVC_reset_EnvSim(&outC->_2_Context_1);
  /* 1 */ ScriptedTrack_reset_EnvSim(&outC->_1_Context_1);
  /* 1 */ RemoteDMI_reset_EnvSim(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::Internal::GenAll */
void GenAll_EnvSim_Internal(outC_GenAll_EnvSim_Internal *outC)
{
  DMI_to_EVC_Message_T_API_DMI_Pkg noname;
  CompressedBaliseMessage_TM _1_noname;
  CompressedRadioMessage_TM _2_noname;
  EVC_to_DMI_Message_T_API_DMI_Pkg _3_noname;
  TIU_Input_msg_API_TIU_Pkg _4_noname;
  GUI_to_EVC_EnvSim _5_noname;
  kcg_bool _6_noname;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg _7_noname;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg _8_noname;
  TIU_Input_msg_API_TIU_Pkg _9_noname;
  kcg_bool _10_noname;
  kcg_bool _11_noname;
  kcg_bool _12_noname;
  kcg_bool _13_noname;
  CompressedRadioMessage_TM _14_noname;
  
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &outC->_L5,
    (EVC_to_DMI_Message_T_API_DMI_Pkg *) &cEMPTY_EVC2DMI_EnvSim_Internal);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->_L10,
    (TIU_Input_msg_API_TIU_Pkg *) &cEMPTY_TIU2DMI_EnvSim_Internal);
  /* 1 */ RemoteDMI_EnvSim(&outC->_L5, &outC->_L10, &outC->Context_1);
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
    &outC->_L1,
    &outC->Context_1.dmiToEVC);
  outC->_L6 = 0.0;
  /* 1 */ ScriptedTrack_EnvSim(outC->_L6, outC->_L6, &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L2,
    &outC->_1_Context_1.baliseMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L3,
    &outC->_1_Context_1.radioMessage);
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&noname, &outC->_L1);
  kcg_copy_CompressedBaliseMessage_TM(&_1_noname, &outC->_L2);
  kcg_copy_CompressedRadioMessage_TM(&_2_noname, &outC->_L3);
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
    &outC->_L8,
    (DMI_to_EVC_Message_T_API_DMI_Pkg *) &cEMPTY_DMI2EVC_EnvSim_Internal);
  /* 1 */ RemoteEVC_EnvSim(&outC->_L8, &outC->_2_Context_1);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &outC->_L7,
    &outC->_2_Context_1.evcToDMI);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L9, &outC->_2_Context_1.tiuToDMI);
  outC->_L13 = outC->_2_Context_1.run;
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&_3_noname, &outC->_L7);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&_4_noname, &outC->_L9);
  kcg_copy_EVC_to_GUI_EnvSim(
    &outC->_L12,
    (EVC_to_GUI_EnvSim *) &cEMPTY_EVC2GUI_EnvSim_Internal);
  /* 1 */ RemoteGUI_EnvSim(&outC->_L12, &outC->_3_Context_1);
  kcg_copy_GUI_to_EVC_EnvSim(&outC->_L11, &outC->_3_Context_1.guiToEVC);
  kcg_copy_GUI_to_EVC_EnvSim(&_5_noname, &outC->_L11);
  _6_noname = outC->_L13;
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->_L16,
    (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
      &cEMPTY_EVC2DMI_BUS_EnvSim_Internal);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->_L15,
    (TIU_Input_msg_API_TIU_Pkg *) &cEMPTY_TIU2DMI_EnvSim_Internal);
  /* 1 */ RemoteDMIBus_EnvSim(&outC->_L16, &outC->_L15, &outC->_4_Context_1);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->_L14,
    &outC->_4_Context_1.dmiToEVC);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_7_noname, &outC->_L14);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->_L20,
    (DMI_to_EVC_Message_int_T_API_DMI_Pkg *)
      &cEMPTY_DMI2EVC_BUS_EnvSim_Internal);
  /* 1 */ RemoteEVCBus_EnvSim(&outC->_L20, &outC->_5_Context_1);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->_L17,
    &outC->_5_Context_1.evcToDMI);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L18, &outC->_5_Context_1.tiuToDMI);
  outC->_L19 = outC->_5_Context_1.run;
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&_8_noname, &outC->_L17);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&_9_noname, &outC->_L18);
  _10_noname = outC->_L19;
  outC->_L28 = 0.0;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L25,
    (CompressedBaliseMessage_TM *) &cEMPTY_BALISE_MESSAGE_EnvSim_Internal);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L26,
    (CompressedRadioMessage_TM *) &cEMPTY_RADIO_MESSAGE_EnvSim_Internal);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L29,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &cEMPTY_TRAIN_MESSAGE_EnvSim_Internal);
  /* 1 */
  ProbeTracksideInput_EnvSim(
    outC->_L28,
    &outC->_L25,
    &outC->_L26,
    &outC->_L29,
    &outC->_6_Context_1);
  outC->_L30 = outC->_6_Context_1.dummyOut;
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L22,
    (TargetCollection_T_TargetManagement_types *)
      &cEMPTY_TARGET_COLLECTION_EnvSim_Internal);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &outC->_L23,
    (CurveCollection_T_CalcBrakingCurves_types *)
      &cEMPTY_CURVE_COLLECTION_EnvSim_Internal);
  kcg_copy_Target_T_TargetManagement_types(
    &outC->_L24,
    (Target_T_TargetManagement_types *) &cEMPTY_TARGET_EnvSim_Internal);
  /* 1 */
  ProbeSDM_EnvSim(&outC->_L22, &outC->_L23, &outC->_L24, &outC->_7_Context_1);
  outC->_L27 = outC->_7_Context_1.dummyOut;
  _11_noname = outC->_L27;
  _12_noname = outC->_L30;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L32,
    (MSG_Errors_T_Common_Types_Pkg *) &cEMPTY_MESSAGE_ERRORS_EnvSim_Internal);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L33,
    (positionErrors_T_TrainPosition_Types_Pck *)
      &cEMPTY_POSITION_ERRORS_EnvSim_Internal);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L34,
    (morcStatus_T_RCM_Session_Types_Pkg *) &cEMPTY_MORC_STATUS_EnvSim_Internal);
  /* 1 */
  ProbeEVC_EnvSim(&outC->_L32, &outC->_L33, &outC->_L34, &outC->_8_Context_1);
  outC->_L31 = outC->_8_Context_1.dummyOut;
  _13_noname = outC->_L31;
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L36,
    (CompressedRadioMessage_TM *) &cEMPTY_RADIO_MESSAGE_EnvSim_Internal);
  /* 1 */ InjectRadioMessage_EnvSim(&outC->_L36, &outC->_9_Context_1);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L35, &outC->_9_Context_1.msgOut);
  kcg_copy_CompressedRadioMessage_TM(&_14_noname, &outC->_L35);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GenAll_EnvSim_Internal.c
** Generation date: 2015-12-01T21:19:49
*************************************************************$ */

