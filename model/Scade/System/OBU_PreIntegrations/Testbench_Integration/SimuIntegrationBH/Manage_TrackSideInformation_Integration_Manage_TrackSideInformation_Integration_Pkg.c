/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->countPackets = 0;
  outC->errorBG = kcg_true;
  outC->debug_ErrorMSG = kcg_true;
  outC->positionM = 0.0;
  outC->init = kcg_true;
  outC->rem_transitionPositionPassed = kcg_true;
  for (i = 0; i < 5; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_main = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].l_section = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_sectiontimerstoploc_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_releaseol = 0;
  }
  outC->Data_to_From_Track_Packets_at_ML.P_135.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_135.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_137.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_137.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->Data_to_From_Track_Packets_at_ML.P_138.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_138.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_138.d_startreverse = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_138.l_reversearea = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_139.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_139.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_139.d_reverse = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_139.v_reverse = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].l_section = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].d_sectiontimerstoploc_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i1].v_releaseol = 0;
  }
  for (i2 = 0; i2 < 7; i2++) {
    outC->Data_to_From_Track_Packets_at_ML.P_21[i2].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i2].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i2].d_gradient = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i2].q_gdir = Q_GDIR_downhill;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i2].g_a = 0;
  }
  outC->Data_to_From_Track_Packets_at_ML.P_27.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_27.d_static = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_27.v_static = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i3 = 0; i3 < 7; i3++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i3].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i3].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i3].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i3].nc_diff = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i3].v_diff = 0;
  }
  for (i5 = 0; i5 < 7; i5++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].d_static = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].v_static = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i4 = 0; i4 < 7; i4++) {
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].diffArray[i4].valid =
        kcg_true;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].diffArray[i4].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].diffArray[i4].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].diffArray[i4].nc_diff =
        0;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i5].diffArray[i4].v_diff =
        0;
    }
  }
  for (i6 = 0; i6 < 7; i6++) {
    outC->Data_to_From_Track_Packets_at_ML.P_41[i6].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i6].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i6].d_leveltr = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i6].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i6].nid_ntc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i6].l_ackleveltr = 0;
  }
  for (i7 = 0; i7 < 7; i7++) {
    outC->Data_to_From_Track_Packets_at_ML.P_46[i7].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i7].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i7].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i7].nid_ntc = 0;
  }
  for (i8 = 0; i8 < 7; i8++) {
    outC->Data_to_From_Track_Packets_at_ML.P_63[i8].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i8].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i8].nid_c = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i8].nid_bg = 0;
  }
  for (i9 = 0; i9 < 3; i9++) {
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].d_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].m_mamode =
      M_MAMODE_On_Sight;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].v_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].l_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].l_ackmamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i9].q_mamode =
      Q_MAMODE_as_the_EOA;
  }
  outC->Data_to_From_Track_Packets_at_ML.LRBG = 0;
  outC->Data_to_From_Track_Packets_at_ML.referenceLocation = 0;
  outC->outputMessageForRadioAck.valid = kcg_true;
  outC->outputMessageForRadioAck.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessageForRadioAck.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.nid_em = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.q_scale = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.d_sr = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.d_ref = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.q_dir = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.m_version = kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.valid = kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->outputMessageForRadioAck.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessageForRadioAck.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessageForRadioAck.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->outputMessageForRadioAck.BG_Common_Header.m_mcount = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.nid_c = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.nid_bg = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessageForRadioAck.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.q_nvlocacc = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->outputMessageForRadioAck.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessageForRadioAck.Radio_Common_Header.radioDevice = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.receivedSystemTime = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.nid_message = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.t_train = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessageForRadioAck.Radio_Common_Header.nid_lrbg = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.t_train_reference = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.nid_em = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->outputMessageForRadioAck.Radio_Common_Header.d_sr = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.t_sh_rqst = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.d_ref = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessageForRadioAck.Radio_Common_Header.d_emergencystop = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i10 = 0; i10 < 30; i10++) {
    outC->outputMessageForRadioAck.packets.PacketHeaders[i10].nid_packet = 0;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i10].q_dir =
      Q_DIR_Reverse;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i10].valid = kcg_true;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i10].startAddress = 0;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->outputMessageForRadioAck.packets.PacketData[i11] = 0;
  }
  outC->outputMessageForRadioAck.sendingRBC.valid = kcg_true;
  outC->outputMessageForRadioAck.sendingRBC.nid_c = 0;
  outC->outputMessageForRadioAck.sendingRBC.rbc_id = 0;
  outC->outputMessageForRadioAck.sendingRBC.device_id = 0;
  outC->forLevelManagement.P12_received = kcg_true;
  outC->forLevelManagement.P15_received = kcg_true;
  outC->forLevelManagement.P21_received = kcg_true;
  outC->forLevelManagement.P27_received = kcg_true;
  outC->outCheckErrors.linkedBGError = kcg_true;
  outC->outCheckErrors.unlinkedBGError = kcg_true;
  outC->outCheckErrors.BG_versionIncompatible = kcg_true;
  outC->outCheckErrors.radioSequenceError = kcg_true;
  outC->outCheckErrors.tNvContactError = kcg_true;
  outC->outCheckErrors.otherTimingError = kcg_true;
  outC->outCheckErrors.radioMessageConsistencyError = kcg_true;
  outC->outCheckErrors.nid_c = 0;
  outC->outCheckErrors.nid_errorbg = 0;
  outC->BadBaliseMessageToDMI = kcg_true;
  outC->ApplyServiceBrake = kcg_true;
  outC->outputMessage.valid = kcg_true;
  outC->outputMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessage.radioMetadata.nid_em = kcg_true;
  outC->outputMessage.radioMetadata.q_scale = kcg_true;
  outC->outputMessage.radioMetadata.d_sr = kcg_true;
  outC->outputMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessage.radioMetadata.d_ref = kcg_true;
  outC->outputMessage.radioMetadata.q_dir = kcg_true;
  outC->outputMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessage.radioMetadata.m_version = kcg_true;
  outC->outputMessage.BG_Common_Header.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outputMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outputMessage.BG_Common_Header.m_mcount = 0;
  outC->outputMessage.BG_Common_Header.nid_c = 0;
  outC->outputMessage.BG_Common_Header.nid_bg = 0;
  outC->outputMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outputMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outputMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outputMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessage.Radio_Common_Header.radioDevice = 0;
  outC->outputMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outputMessage.Radio_Common_Header.nid_message = 0;
  outC->outputMessage.Radio_Common_Header.t_train = 0;
  outC->outputMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outputMessage.Radio_Common_Header.t_train_reference = 0;
  outC->outputMessage.Radio_Common_Header.nid_em = 0;
  outC->outputMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outputMessage.Radio_Common_Header.d_sr = 0;
  outC->outputMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->outputMessage.Radio_Common_Header.d_ref = 0;
  outC->outputMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outputMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i12 = 0; i12 < 30; i12++) {
    outC->outputMessage.packets.PacketHeaders[i12].nid_packet = 0;
    outC->outputMessage.packets.PacketHeaders[i12].q_dir = Q_DIR_Reverse;
    outC->outputMessage.packets.PacketHeaders[i12].valid = kcg_true;
    outC->outputMessage.packets.PacketHeaders[i12].startAddress = 0;
    outC->outputMessage.packets.PacketHeaders[i12].endAddress = 0;
  }
  for (i13 = 0; i13 < 500; i13++) {
    outC->outputMessage.packets.PacketData[i13] = 0;
  }
  outC->outputMessage.sendingRBC.valid = kcg_true;
  outC->outputMessage.sendingRBC.nid_c = 0;
  outC->outputMessage.sendingRBC.rbc_id = 0;
  outC->outputMessage.sendingRBC.device_id = 0;
  /* 1 */ countPackets_init_xdebugSupport_Pkg(&outC->_5_Context_1);
  /* 1 */ checkOnErrors_init_xdebugSupport_Pkg(&outC->_4_Context_1);
  /* 3 */ InformationFilter_init_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */ combineForLevelChange_init_xdebugSupport_Pkg(&outC->_3_Context_1);
  /* 1 */ CheckBGConsistency_init_CheckBGConsistency_Pkg(&outC->_2_Context_1);
  /* 1 */ CheckEuroRadioMessage_init_CheckEuroradioMessage(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ countPackets_reset_xdebugSupport_Pkg(&outC->_5_Context_1);
  /* 1 */ checkOnErrors_reset_xdebugSupport_Pkg(&outC->_4_Context_1);
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */ combineForLevelChange_reset_xdebugSupport_Pkg(&outC->_3_Context_1);
  /* 1 */ CheckBGConsistency_reset_CheckBGConsistency_Pkg(&outC->_2_Context_1);
  /* 1 */
  CheckEuroRadioMessage_reset_CheckEuroradioMessage(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */ kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */ kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::intrainVersion */ M_VERSION intrainVersion,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */ connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */ kcg_bool inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _8_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _9_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _10_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _11_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static ReceivedMessage_T_Common_Types_Pkg _12_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_C op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_ERRORBG_BG_Types_Pkg _1_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _2_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _3_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _4_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _5_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _6_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static ReceivedMessage_T_Common_Types_Pkg _7_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool ck_every;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _13_ck_every;
  static kcg_bool noname;
  static connection_ids_T_Handover_Pkg _14_noname;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */
  static kcg_bool last_transitionPositionPassed;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doBaliseBranch */
  static kcg_bool doBaliseBranch;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doRadio */
  static kcg_bool doRadio;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::LRBG */
  static positionedBG_T_TrainPosition_Types_Pck LRBG;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPositionTest */
  static trainPosition_T_TrainPosition_Types_Pck trainPositionTest;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContactError */
  static kcg_bool tNvContactError;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::traceOutput */
  static kcg_bool traceOutput;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::MsgErrors */
  static MSG_Errors_T_Common_Types_Pkg MsgErrors;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::locFilterEvents */
  static filterRelatedEvents_T_Common_Types_Pkg locFilterEvents;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L1 */
  static API_TrackSideInput_T_API_Msg_Pkg _L1;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L2 */
  static odometry_T_Obu_BasicTypes_Pkg _L2;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L3 */
  static kcg_bool _L3;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L7 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L7;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L8 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L8;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L11 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L12 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L13 */
  static morcStatus_T_RCM_Session_Types_Pkg _L13;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L18 */
  static kcg_bool _L18;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L17 */
  static kcg_bool _L17;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L16 */
  static kcg_bool _L16;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L15 */
  static kcg_bool _L15;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L14 */
  static ReceivedMessage_T_Common_Types_Pkg _L14;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L21 */
  static ReceivedMessage_T_Common_Types_Pkg _L21;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L23 */
  static ReceivedMessage_T_Common_Types_Pkg _L23;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L27 */
  static kcg_bool _L27;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L28 */
  static M_MODE _L28;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L33 */
  static MsgSource_T_Common_Types_Pkg _L33;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L36 */
  static kcg_bool _L36;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L37 */
  static MsgSource_T_Common_Types_Pkg _L37;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L38 */
  static ReceivedMessage_T_Common_Types_Pkg _L38;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L43 */
  static positionedBGs_T_TrainPosition_Types_Pck _L43;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L44 */
  static kcg_bool _L44;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L45 */
  static kcg_bool _L45;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L52 */
  static MsgSource_T_Common_Types_Pkg _L52;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L50 */
  static kcg_bool _L50;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L53 */
  static kcg_bool _L53;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L62 */
  static kcg_bool _L62;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L61 */
  static kcg_bool _L61;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L63 */
  static kcg_bool _L63;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L64 */
  static ReceivedMessage_T_Common_Types_Pkg _L64;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L65 */
  static ReceivedMessage_T_Common_Types_Pkg _L65;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L68 */
  static positionedBGs_T_TrainPosition_Types_Pck _L68;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L69 */
  static Q_NVLOCACC _L69;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L79 */
  static positionedBG_T_TrainPosition_Types_Pck _L79;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L80 */
  static positionedBG_T_TrainPosition_Types_Pck _L80;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L82 */
  static trainPosition_T_TrainPosition_Types_Pck _L82;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L87 */
  static trainPosition_T_TrainPosition_Types_Pck _L87;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L88 */
  static trainPosition_T_TrainPosition_Types_Pck _L88;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L93 */
  static kcg_bool _L93;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L94 */
  static kcg_bool _L94;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L113 */
  static M_MODE _L113;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L109 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L109;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L106 */
  static connection_ids_T_Handover_Pkg _L106;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L102 */
  static ReceivedMessage_T_Common_Types_Pkg _L102;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L101 */
  static M_LEVEL _L101;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L114 */
  static kcg_bool _L114;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L121 */
  static kcg_bool _L121;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L122 */
  static kcg_bool _L122;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L124 */
  static kcg_bool _L124;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L123 */
  static kcg_bool _L123;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L129 */
  static MSG_Errors_T_Common_Types_Pkg _L129;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L138 */
  static kcg_bool _L138;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L139 */
  static odometry_T_Obu_BasicTypes_Pkg _L139;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L140 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L140;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L141 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L141;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L142 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L142;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L143 */
  static kcg_bool _L143;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L144 */
  static kcg_bool _L144;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L145 */
  static kcg_bool _L145;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L147 */
  static kcg_bool _L147;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L148 */
  static kcg_bool _L148;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L150 */
  static M_VERSION _L150;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L151 */
  static kcg_bool _L151;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L159 */
  static filterRelatedEvents_T_Common_Types_Pkg _L159;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L161 */
  static NID_C _L161;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L160 */
  static NID_ERRORBG_BG_Types_Pkg _L160;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L162 */
  static kcg_int _L162;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L163 */
  static kcg_int _L163;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L164 */
  static API_TrackSideInput_T_API_Msg_Pkg _L164;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L169 */
  static odometry_T_Obu_BasicTypes_Pkg _L169;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L170 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L170;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L171 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L171;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L172 */
  static kcg_real _L172;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L173 */
  static kcg_real _L173;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L174 */
  static kcg_real _L174;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L186 */
  static kcg_bool _L186;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L185 */
  static kcg_bool _L185;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L187 */
  static kcg_int _L187;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L192 */
  static MSG_Errors_T_Common_Types_Pkg _L192;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L193 */
  static positionedBG_T_TrainPosition_Types_Pck _L193;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L194 */
  static kcg_bool _L194;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L195 */
  static trainPosition_T_TrainPosition_Types_Pck _L195;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L197 */
  static kcg_bool _L197;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L199 */
  static T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg _L199;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L200 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L200;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L202 */
  static trainPosition_T_TrainPosition_Types_Pck _L202;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L203 */
  static kcg_bool _L203;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L207 */
  static filterRelatedEvents_T_Common_Types_Pkg _L207;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L209 */
  static filterRelatedEvents_T_Common_Types_Pkg _L209;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L210 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L210;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L211 */
  static kcg_int _L211;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L212 */
  static morcStatus_T_RCM_Session_Types_Pkg _L212;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L213 */
  static trainProperties_T_TrainPosition_Types_Pck _L213;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L215 */
  static morcStatus_T_RCM_Session_Types_Pkg _L215;
  
  _L3 = reset;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L1, API_trackSide_Message);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L2, ActualOdometry);
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    _L3,
    &_L1,
    &_L2,
    &outC->Context_1);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &_L8,
    &outC->Context_1.outTrackMessage_for_check);
  _L33 = _L8.msg_type;
  _L52 = msrc_Euroradio_Common_Types_Pkg;
  _L50 = _L33 == _L52;
  doRadio = _L50;
  _L53 = doRadio;
  ck_every = _L53;
  _L11 = tNvContact;
  _L12 = lastRelevantEventTimestamp;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L13, radioStatus);
  _L114 = fullChecks;
  /* ck_Manage_TrackSideInformation_Integration */ if (ck_every) {
    /* 1 */
    CheckEuroRadioMessage_CheckEuroradioMessage(
      &_L8,
      _L11,
      _L12,
      &_L13,
      _L114,
      &outC->_1_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_12_op_call,
      &outC->_1_Context_1.checkedMessage);
    _11_op_call = outC->_1_Context_1.radioSequenceError;
    _10_op_call = outC->_1_Context_1.tNvContactError;
    _9_op_call = outC->_1_Context_1.otherTimingError;
    _8_op_call = outC->_1_Context_1.radioMessageConsistencyError;
  }
  _L93 = _L8.valid;
  _L37 = msrc_Eurobalise_Common_Types_Pkg;
  _L36 = _L37 == _L33;
  _L94 = _L93 & _L36;
  doBaliseBranch = _L94;
  _L44 = doBaliseBranch;
  _13_ck_every = _L44;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L43, inAnnouncedBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L82, trainPosition);
  _L197 = kcg_false;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L195, &_L82);
  if (kcg_true) {
    _L195.trainPositionIsUnknown = _L197;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&trainPositionTest, &_L195);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L87, &trainPositionTest);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L7, modeAndLevel);
  _L28 = _L7.Mode;
  _L69 = q_nvlocacc;
  _L150 = intrainVersion;
  /* ck_Manage_TrackSideInformation_Integration */ if (_13_ck_every) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      &_L43,
      &_L87,
      _L28,
      &_L8,
      _L69,
      _L150,
      &outC->_2_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_7_op_call,
      &outC->_2_Context_1.passedBG_out);
    _6_op_call = outC->_2_Context_1.applyServiceBrake;
    _5_op_call = outC->_2_Context_1.badBaliseMessageToDMI;
    _4_op_call = outC->_2_Context_1.errorLinkedBG;
    _3_op_call = outC->_2_Context_1.errorUnlinkedBG;
    _2_op_call = outC->_2_Context_1.incompatibleVersion;
    _1_op_call = outC->_2_Context_1.nid_errorBG;
    op_call = outC->_2_Context_1.nid_c;
  }
  _L45 = kcg_false;
  /* ck_Manage_TrackSideInformation_Integration */ if (_13_ck_every) {
    _L15 = _6_op_call;
  }
  else {
    _L15 = _L45;
  }
  outC->ApplyServiceBrake = _L15;
  /* ck_Manage_TrackSideInformation_Integration */ if (_13_ck_every) {
    _L16 = _5_op_call;
  }
  else {
    _L16 = _L45;
  }
  outC->BadBaliseMessageToDMI = _L16;
  _L163 = 0;
  /* ck_Manage_TrackSideInformation_Integration */ if (_13_ck_every) {
    _L161 = op_call;
  }
  else {
    _L161 = _L163;
  }
  _L162 = cUnknownBG_BG_Types_Pkg;
  /* ck_Manage_TrackSideInformation_Integration */ if (_13_ck_every) {
    _L160 = _1_op_call;
    _L151 = _2_op_call;
    _L18 = _3_op_call;
    _L17 = _4_op_call;
  }
  else {
    _L160 = _L162;
    _L151 = _L45;
    _L18 = _L45;
    _L17 = _L45;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L64,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  /* ck_Manage_TrackSideInformation_Integration */ if (_13_ck_every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L14, &_7_op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L14, &_L64);
  }
  _L27 = doBaliseBranch;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L65,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  /* ck_Manage_TrackSideInformation_Integration */ if (ck_every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L38, &_12_op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L38, &_L65);
  }
  /* 1 */ if (_L27) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L23, &_L14);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L23, &_L38);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L79, &_L82.LRBG);
  _L194 = kcg_true;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L193, &_L79);
  if (kcg_true) {
    _L193.valid = _L194;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&LRBG, &_L193);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L80, &LRBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L68, inAnnouncedBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L88, &trainPositionTest);
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &_L23,
    &_L80,
    &_L68,
    &_L88,
    &_L21);
  _L63 = kcg_false;
  /* ck_Manage_TrackSideInformation_Integration */ if (ck_every) {
    _L124 = _8_op_call;
    _L123 = _9_op_call;
    _L62 = _10_op_call;
    _L61 = _11_op_call;
  }
  else {
    _L124 = _L63;
    _L123 = _L63;
    _L62 = _L63;
    _L61 = _L63;
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L109, modeAndLevel);
  _L101 = _L109.level;
  _L113 = _L109.Mode;
  _L211 = 0;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L200, modeAndLevel);
  /* last_init_ck_transitionPositionPassed */ if (outC->init) {
    last_transitionPositionPassed = kcg_false;
  }
  else {
    last_transitionPositionPassed = outC->rem_transitionPositionPassed;
  }
  _L203 = last_transitionPositionPassed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L202, trainPosition);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&_L159, inFilterEvents);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L213, trainProperties);
  /* 1 */
  combineForLevelChange_xdebugSupport_Pkg(
    &_L21,
    &_L200,
    _L203,
    &_L202,
    &_L159,
    &_L213,
    &outC->_3_Context_1);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &_L199,
    &outC->_3_Context_1.forLevelManagement);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &_L207,
    &outC->_3_Context_1.outFilterEvents);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L210,
    &outC->_3_Context_1.Data_to_From_Track_Packets_at_ML);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&locFilterEvents, &_L207);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&_L209, &locFilterEvents);
  _L121 = inActiveCab;
  _L122 = inTrainDataValid;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L215, radioStatus);
  /* 3 */
  InformationFilter_InformationFilter_Pkg(
    &_L21,
    _L101,
    _L113,
    _L211,
    &_L209,
    _L121,
    _L122,
    &_L215,
    &outC->Context_3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L102,
    &outC->Context_3.outMessage);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outputMessage, &_L102);
  kcg_copy_connection_ids_T_Handover_Pkg(&_L106, inSupervisingRbcId);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L139, ActualOdometry);
  _L140 = _L139.timestamp;
  _L141 = tNvContact;
  _L142 = lastRelevantEventTimestamp;
  _L143 = fullChecks;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L212, radioStatus);
  _L138 = /* 1 */
    ContinuousTimeoutCheck_CheckEuroradioMessage(
      _L140,
      _L141,
      _L142,
      _L143,
      &_L212);
  _L144 = _L62 | _L138;
  tNvContactError = _L144;
  _L145 = tNvContactError;
  _L129.linkedBGError = _L17;
  _L129.unlinkedBGError = _L18;
  _L129.BG_versionIncompatible = _L151;
  _L129.radioSequenceError = _L61;
  _L129.tNvContactError = _L145;
  _L129.otherTimingError = _L123;
  _L129.radioMessageConsistencyError = _L124;
  _L129.nid_c = _L161;
  _L129.nid_errorbg = _L160;
  _L147 = _L102.valid;
  traceOutput = _L147;
  _L148 = traceOutput;
  noname = _L148;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L164, API_trackSide_Message);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L169, ActualOdometry);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L170, &_L169.odo);
  _L171 = _L170.o_nominal;
  _L172 = (kcg_real) _L171;
  _L173 = 100.0;
  _L174 = _L172 / _L173;
  outC->positionM = _L174;
  /* 1 */ checkOnErrors_xdebugSupport_Pkg(&_L129, &outC->_4_Context_1);
  _L185 = outC->_4_Context_1.radioMsgError;
  _L186 = outC->_4_Context_1.baliseError;
  outC->errorBG = _L186;
  outC->debug_ErrorMSG = _L185;
  /* 1 */ countPackets_xdebugSupport_Pkg(&_L164, &outC->_5_Context_1);
  _L187 = outC->_5_Context_1.count;
  outC->countPackets = _L187;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&MsgErrors, &_L129);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&_L192, &MsgErrors);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->outCheckErrors, &_L192);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->forLevelManagement,
    &_L199);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessageForRadioAck,
    &_L21);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML,
    &_L210);
  kcg_copy_connection_ids_T_Handover_Pkg(&_14_noname, &_L106);
  outC->rem_transitionPositionPassed = transitionPositionPassed;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

