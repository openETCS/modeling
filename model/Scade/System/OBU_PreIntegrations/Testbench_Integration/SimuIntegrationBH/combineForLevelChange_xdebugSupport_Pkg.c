/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "combineForLevelChange_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void combineForLevelChange_init_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC)
{
  static kcg_int i62;
  static kcg_int i61;
  static kcg_int i60;
  static kcg_int i59;
  static kcg_int i58;
  static kcg_int i57;
  static kcg_int i56;
  static kcg_int i55;
  static kcg_int i54;
  static kcg_int i53;
  static kcg_int i52;
  static kcg_int i51;
  static kcg_int i50;
  static kcg_int i49;
  static kcg_int i48;
  static kcg_int i47;
  static kcg_int i46;
  static kcg_int i45;
  static kcg_int i44;
  static kcg_int i43;
  static kcg_int i42;
  static kcg_int i41;
  static kcg_int i40;
  static kcg_int i39;
  static kcg_int i38;
  static kcg_int i37;
  static kcg_int i36;
  static kcg_int i35;
  static kcg_int i34;
  static kcg_int i33;
  static kcg_int i32;
  static kcg_int i31;
  static kcg_int i30;
  static kcg_int i29;
  static kcg_int i28;
  static kcg_int i27;
  static kcg_int i26;
  static kcg_int i25;
  static kcg_int i24;
  static kcg_int i23;
  static kcg_int i22;
  static kcg_int i21;
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
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
  
  outC->_L147 = kcg_true;
  for (i = 0; i < 7; i++) {
    outC->_L146[i].valid = kcg_true;
    outC->_L146[i].q_dir = Q_DIR_Reverse;
    outC->_L146[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L146[i].d_leveltr = 0;
    outC->_L146[i].m_leveltr = M_LEVELTR_Level_0;
    outC->_L146[i].nid_ntc = 0;
    outC->_L146[i].l_ackleveltr = 0;
  }
  for (i1 = 0; i1 < 7; i1++) {
    outC->_L145[i1].valid = kcg_true;
    outC->_L145[i1].q_dir = Q_DIR_Reverse;
    outC->_L145[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L145[i1].d_leveltr = 0;
    outC->_L145[i1].m_leveltr = M_LEVELTR_Level_0;
    outC->_L145[i1].nid_ntc = 0;
    outC->_L145[i1].l_ackleveltr = 0;
  }
  outC->_L144.pendingL1Transition = kcg_true;
  outC->_L144.pendingL12L3Transition = kcg_true;
  outC->_L144.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L144.emergencyStopAccepted = kcg_true;
  outC->_L144.lastAckTextMessageId = 0;
  outC->_L144.pendingNTCTransition = kcg_true;
  outC->_L144.SPPAndGradientOnBoard = kcg_true;
  outC->_L144.MACoverNotFullLength = kcg_true;
  outC->_L143 = 0;
  outC->_L141 = 0;
  for (i2 = 0; i2 < 7; i2++) {
    outC->_L140[i2].valid = kcg_true;
    outC->_L140[i2].q_dir = Q_DIR_Reverse;
    outC->_L140[i2].m_leveltr = M_LEVELTR_Level_0;
    outC->_L140[i2].nid_ntc = 0;
  }
  for (i3 = 0; i3 < 7; i3++) {
    outC->_L139[i3].valid = kcg_true;
    outC->_L139[i3].q_dir = Q_DIR_Reverse;
    outC->_L139[i3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L139[i3].d_leveltr = 0;
    outC->_L139[i3].m_leveltr = M_LEVELTR_Level_0;
    outC->_L139[i3].nid_ntc = 0;
    outC->_L139[i3].l_ackleveltr = 0;
  }
  for (i4 = 0; i4 < 7; i4++) {
    outC->_L138.p41[i4].valid = kcg_true;
    outC->_L138.p41[i4].q_dir = Q_DIR_Reverse;
    outC->_L138.p41[i4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L138.p41[i4].d_leveltr = 0;
    outC->_L138.p41[i4].m_leveltr = M_LEVELTR_Level_0;
    outC->_L138.p41[i4].nid_ntc = 0;
    outC->_L138.p41[i4].l_ackleveltr = 0;
  }
  for (i5 = 0; i5 < 7; i5++) {
    outC->_L138.p46[i5].valid = kcg_true;
    outC->_L138.p46[i5].q_dir = Q_DIR_Reverse;
    outC->_L138.p46[i5].m_leveltr = M_LEVELTR_Level_0;
    outC->_L138.p46[i5].nid_ntc = 0;
  }
  outC->_L138.p12_received = kcg_true;
  outC->_L138.p15_received = kcg_true;
  outC->_L138.p21_received = kcg_true;
  outC->_L138.p27_received = kcg_true;
  outC->_L138.LRBG = 0;
  outC->_L138.referenceLocation = 0;
  outC->_L117.valid = kcg_true;
  outC->_L117.q_dir = Q_DIR_Reverse;
  outC->_L117.q_scale = Q_SCALE_10_cm_scale;
  outC->_L117.v_main = 0;
  outC->_L117.v_loa = 0;
  outC->_L117.t_loa = 0;
  outC->_L117.n_iter = 0;
  for (i6 = 0; i6 < 32; i6++) {
    outC->_L117.sections[i6].valid = kcg_true;
    outC->_L117.sections[i6].l_section = 0;
    outC->_L117.sections[i6].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L117.sections[i6].t_sectiontimer = 0;
    outC->_L117.sections[i6].d_sectiontimerstoploc = 0;
  }
  outC->_L117.l_endsection = 0;
  outC->_L117.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L117.t_sectiontimer = 0;
  outC->_L117.d_sectiontimerstoploc = 0;
  outC->_L117.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L117.t_endtimer = 0;
  outC->_L117.d_endtimerstartloc = 0;
  outC->_L117.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L117.d_dp = 0;
  outC->_L117.v_releasedp = 0;
  outC->_L117.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L117.d_startol = 0;
  outC->_L117.t_ol = 0;
  outC->_L117.d_ol = 0;
  outC->_L117.v_releaseol = 0;
  outC->_L116 = kcg_true;
  for (i7 = 0; i7 < 30; i7++) {
    outC->_L119.PacketHeaders[i7].nid_packet = 0;
    outC->_L119.PacketHeaders[i7].q_dir = Q_DIR_Reverse;
    outC->_L119.PacketHeaders[i7].valid = kcg_true;
    outC->_L119.PacketHeaders[i7].startAddress = 0;
    outC->_L119.PacketHeaders[i7].endAddress = 0;
  }
  for (i8 = 0; i8 < 500; i8++) {
    outC->_L119.PacketData[i8] = 0;
  }
  for (i9 = 0; i9 < 3; i9++) {
    outC->_L120[i9].valid = kcg_true;
    outC->_L120[i9].q_dir = Q_DIR_Reverse;
    outC->_L120[i9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L120[i9].d_mamode = 0;
    outC->_L120[i9].m_mamode = M_MAMODE_On_Sight;
    outC->_L120[i9].v_mamode = 0;
    outC->_L120[i9].l_mamode = 0;
    outC->_L120[i9].l_ackmamode = 0;
    outC->_L120[i9].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L122.valid = kcg_true;
  outC->_L122.q_dir = Q_DIR_Reverse;
  outC->_L122.q_scale = Q_SCALE_10_cm_scale;
  outC->_L122.d_static = 0;
  outC->_L122.v_static = 0;
  outC->_L122.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i10 = 0; i10 < 7; i10++) {
    outC->_L122.diffArray[i10].valid = kcg_true;
    outC->_L122.diffArray[i10].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L122.diffArray[i10].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L122.diffArray[i10].nc_diff = 0;
    outC->_L122.diffArray[i10].v_diff = 0;
  }
  for (i12 = 0; i12 < 7; i12++) {
    outC->_L122.SSPArray[i12].valid = kcg_true;
    outC->_L122.SSPArray[i12].d_static = 0;
    outC->_L122.SSPArray[i12].v_static = 0;
    outC->_L122.SSPArray[i12].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i11 = 0; i11 < 7; i11++) {
      outC->_L122.SSPArray[i12].diffArray[i11].valid = kcg_true;
      outC->_L122.SSPArray[i12].diffArray[i11].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L122.SSPArray[i12].diffArray[i11].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L122.SSPArray[i12].diffArray[i11].nc_diff = 0;
      outC->_L122.SSPArray[i12].diffArray[i11].v_diff = 0;
    }
  }
  outC->_L123.valid = kcg_true;
  outC->_L123.q_dir = Q_DIR_Reverse;
  for (i13 = 0; i13 < 5; i13++) {
    outC->_L124.P_12[i13].valid = kcg_true;
    outC->_L124.P_12[i13].q_dir = Q_DIR_Reverse;
    outC->_L124.P_12[i13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_12[i13].v_main = 0;
    outC->_L124.P_12[i13].v_loa = 0;
    outC->_L124.P_12[i13].t_loa = 0;
    outC->_L124.P_12[i13].l_section = 0;
    outC->_L124.P_12[i13].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_12[i13].t_sectiontimer_k = 0;
    outC->_L124.P_12[i13].d_sectiontimerstoploc_k = 0;
    outC->_L124.P_12[i13].l_endsection = 0;
    outC->_L124.P_12[i13].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_12[i13].t_sectiontimer = 0;
    outC->_L124.P_12[i13].d_sectiontimerstoploc = 0;
    outC->_L124.P_12[i13].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L124.P_12[i13].t_endtimer = 0;
    outC->_L124.P_12[i13].d_endtimerstartloc = 0;
    outC->_L124.P_12[i13].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L124.P_12[i13].d_dp = 0;
    outC->_L124.P_12[i13].v_releasedp = 0;
    outC->_L124.P_12[i13].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L124.P_12[i13].d_startol = 0;
    outC->_L124.P_12[i13].t_ol = 0;
    outC->_L124.P_12[i13].d_ol = 0;
    outC->_L124.P_12[i13].v_releaseol = 0;
  }
  outC->_L124.P_135.valid = kcg_true;
  outC->_L124.P_135.q_dir = Q_DIR_Reverse;
  outC->_L124.P_137.valid = kcg_true;
  outC->_L124.P_137.q_dir = Q_DIR_Reverse;
  outC->_L124.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L124.P_138.valid = kcg_true;
  outC->_L124.P_138.q_dir = Q_DIR_Reverse;
  outC->_L124.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.P_138.d_startreverse = 0;
  outC->_L124.P_138.l_reversearea = 0;
  outC->_L124.P_139.valid = kcg_true;
  outC->_L124.P_139.q_dir = Q_DIR_Reverse;
  outC->_L124.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.P_139.d_reverse = 0;
  outC->_L124.P_139.v_reverse = 0;
  for (i14 = 0; i14 < 5; i14++) {
    outC->_L124.P_15[i14].valid = kcg_true;
    outC->_L124.P_15[i14].q_dir = Q_DIR_Reverse;
    outC->_L124.P_15[i14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_15[i14].v_loa = 0;
    outC->_L124.P_15[i14].t_loa = 0;
    outC->_L124.P_15[i14].l_section = 0;
    outC->_L124.P_15[i14].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_15[i14].t_sectiontimer_k = 0;
    outC->_L124.P_15[i14].d_sectiontimerstoploc_k = 0;
    outC->_L124.P_15[i14].l_endsection = 0;
    outC->_L124.P_15[i14].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_15[i14].t_sectiontimer = 0;
    outC->_L124.P_15[i14].d_sectiontimerstoploc = 0;
    outC->_L124.P_15[i14].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L124.P_15[i14].t_endtimer = 0;
    outC->_L124.P_15[i14].d_endtimerstartloc = 0;
    outC->_L124.P_15[i14].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L124.P_15[i14].d_dp = 0;
    outC->_L124.P_15[i14].v_releasedp = 0;
    outC->_L124.P_15[i14].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L124.P_15[i14].d_startol = 0;
    outC->_L124.P_15[i14].t_ol = 0;
    outC->_L124.P_15[i14].d_ol = 0;
    outC->_L124.P_15[i14].v_releaseol = 0;
  }
  for (i15 = 0; i15 < 7; i15++) {
    outC->_L124.P_21[i15].valid = kcg_true;
    outC->_L124.P_21[i15].q_dir = Q_DIR_Reverse;
    outC->_L124.P_21[i15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_21[i15].d_gradient = 0;
    outC->_L124.P_21[i15].q_gdir = Q_GDIR_downhill;
    outC->_L124.P_21[i15].g_a = 0;
  }
  outC->_L124.P_27.valid = kcg_true;
  outC->_L124.P_27.q_dir = Q_DIR_Reverse;
  outC->_L124.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.P_27.d_static = 0;
  outC->_L124.P_27.v_static = 0;
  outC->_L124.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i16 = 0; i16 < 7; i16++) {
    outC->_L124.P_27.diffArray[i16].valid = kcg_true;
    outC->_L124.P_27.diffArray[i16].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L124.P_27.diffArray[i16].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L124.P_27.diffArray[i16].nc_diff = 0;
    outC->_L124.P_27.diffArray[i16].v_diff = 0;
  }
  for (i18 = 0; i18 < 7; i18++) {
    outC->_L124.P_27.SSPArray[i18].valid = kcg_true;
    outC->_L124.P_27.SSPArray[i18].d_static = 0;
    outC->_L124.P_27.SSPArray[i18].v_static = 0;
    outC->_L124.P_27.SSPArray[i18].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i17 = 0; i17 < 7; i17++) {
      outC->_L124.P_27.SSPArray[i18].diffArray[i17].valid = kcg_true;
      outC->_L124.P_27.SSPArray[i18].diffArray[i17].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L124.P_27.SSPArray[i18].diffArray[i17].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L124.P_27.SSPArray[i18].diffArray[i17].nc_diff = 0;
      outC->_L124.P_27.SSPArray[i18].diffArray[i17].v_diff = 0;
    }
  }
  for (i19 = 0; i19 < 7; i19++) {
    outC->_L124.P_41[i19].valid = kcg_true;
    outC->_L124.P_41[i19].q_dir = Q_DIR_Reverse;
    outC->_L124.P_41[i19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_41[i19].d_leveltr = 0;
    outC->_L124.P_41[i19].m_leveltr = M_LEVELTR_Level_0;
    outC->_L124.P_41[i19].nid_ntc = 0;
    outC->_L124.P_41[i19].l_ackleveltr = 0;
  }
  for (i20 = 0; i20 < 7; i20++) {
    outC->_L124.P_46[i20].valid = kcg_true;
    outC->_L124.P_46[i20].q_dir = Q_DIR_Reverse;
    outC->_L124.P_46[i20].m_leveltr = M_LEVELTR_Level_0;
    outC->_L124.P_46[i20].nid_ntc = 0;
  }
  for (i21 = 0; i21 < 7; i21++) {
    outC->_L124.P_63[i21].valid = kcg_true;
    outC->_L124.P_63[i21].q_dir = Q_DIR_Reverse;
    outC->_L124.P_63[i21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L124.P_63[i21].nid_c = 0;
    outC->_L124.P_63[i21].nid_bg = 0;
  }
  for (i22 = 0; i22 < 3; i22++) {
    outC->_L124.P_80[i22].valid = kcg_true;
    outC->_L124.P_80[i22].q_dir = Q_DIR_Reverse;
    outC->_L124.P_80[i22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_80[i22].d_mamode = 0;
    outC->_L124.P_80[i22].m_mamode = M_MAMODE_On_Sight;
    outC->_L124.P_80[i22].v_mamode = 0;
    outC->_L124.P_80[i22].l_mamode = 0;
    outC->_L124.P_80[i22].l_ackmamode = 0;
    outC->_L124.P_80[i22].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L124.LRBG = 0;
  outC->_L124.referenceLocation = 0;
  outC->_L125.valid = kcg_true;
  outC->_L125.q_dir = Q_DIR_Reverse;
  outC->_L125.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L127.valid = kcg_true;
  outC->_L127.q_dir = Q_DIR_Reverse;
  outC->_L127.q_scale = Q_SCALE_10_cm_scale;
  outC->_L127.d_reverse = 0;
  outC->_L127.v_reverse = 0;
  for (i23 = 0; i23 < 7; i23++) {
    outC->_L128[i23].valid = kcg_true;
    outC->_L128[i23].q_dir = Q_DIR_Reverse;
    outC->_L128[i23].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L128[i23].nid_c = 0;
    outC->_L128[i23].nid_bg = 0;
  }
  for (i24 = 0; i24 < 5; i24++) {
    outC->_L129[i24].valid = kcg_true;
    outC->_L129[i24].q_dir = Q_DIR_Reverse;
    outC->_L129[i24].q_scale = Q_SCALE_10_cm_scale;
    outC->_L129[i24].v_loa = 0;
    outC->_L129[i24].t_loa = 0;
    outC->_L129[i24].l_section = 0;
    outC->_L129[i24].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L129[i24].t_sectiontimer_k = 0;
    outC->_L129[i24].d_sectiontimerstoploc_k = 0;
    outC->_L129[i24].l_endsection = 0;
    outC->_L129[i24].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L129[i24].t_sectiontimer = 0;
    outC->_L129[i24].d_sectiontimerstoploc = 0;
    outC->_L129[i24].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L129[i24].t_endtimer = 0;
    outC->_L129[i24].d_endtimerstartloc = 0;
    outC->_L129[i24].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L129[i24].d_dp = 0;
    outC->_L129[i24].v_releasedp = 0;
    outC->_L129[i24].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L129[i24].d_startol = 0;
    outC->_L129[i24].t_ol = 0;
    outC->_L129[i24].d_ol = 0;
    outC->_L129[i24].v_releaseol = 0;
  }
  for (i25 = 0; i25 < 5; i25++) {
    outC->_L130[i25].valid = kcg_true;
    outC->_L130[i25].q_dir = Q_DIR_Reverse;
    outC->_L130[i25].q_scale = Q_SCALE_10_cm_scale;
    outC->_L130[i25].v_main = 0;
    outC->_L130[i25].v_loa = 0;
    outC->_L130[i25].t_loa = 0;
    outC->_L130[i25].l_section = 0;
    outC->_L130[i25].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L130[i25].t_sectiontimer_k = 0;
    outC->_L130[i25].d_sectiontimerstoploc_k = 0;
    outC->_L130[i25].l_endsection = 0;
    outC->_L130[i25].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L130[i25].t_sectiontimer = 0;
    outC->_L130[i25].d_sectiontimerstoploc = 0;
    outC->_L130[i25].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L130[i25].t_endtimer = 0;
    outC->_L130[i25].d_endtimerstartloc = 0;
    outC->_L130[i25].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L130[i25].d_dp = 0;
    outC->_L130[i25].v_releasedp = 0;
    outC->_L130[i25].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L130[i25].d_startol = 0;
    outC->_L130[i25].t_ol = 0;
    outC->_L130[i25].d_ol = 0;
    outC->_L130[i25].v_releaseol = 0;
  }
  outC->_L132.valid = kcg_true;
  outC->_L132.q_dir = Q_DIR_Reverse;
  outC->_L131 = kcg_true;
  outC->_L134.valid = kcg_true;
  outC->_L134.q_dir = Q_DIR_Reverse;
  outC->_L134.q_scale = Q_SCALE_10_cm_scale;
  outC->_L134.d_startreverse = 0;
  outC->_L134.l_reversearea = 0;
  for (i26 = 0; i26 < 7; i26++) {
    outC->_L136[i26].valid = kcg_true;
    outC->_L136[i26].q_dir = Q_DIR_Reverse;
    outC->_L136[i26].q_scale = Q_SCALE_10_cm_scale;
    outC->_L136[i26].d_gradient = 0;
    outC->_L136[i26].q_gdir = Q_GDIR_downhill;
    outC->_L136[i26].g_a = 0;
  }
  outC->_L137.valid = kcg_true;
  outC->_L137.source = msrc_undefined_Common_Types_Pkg;
  outC->_L137.radioMetadata.t_train_reference = kcg_true;
  outC->_L137.radioMetadata.nid_em = kcg_true;
  outC->_L137.radioMetadata.q_scale = kcg_true;
  outC->_L137.radioMetadata.d_sr = kcg_true;
  outC->_L137.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L137.radioMetadata.d_ref = kcg_true;
  outC->_L137.radioMetadata.q_dir = kcg_true;
  outC->_L137.radioMetadata.d_emergencystop = kcg_true;
  outC->_L137.radioMetadata.m_version = kcg_true;
  outC->_L137.BG_Common_Header.valid = kcg_true;
  outC->_L137.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L137.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L137.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L137.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L137.BG_Common_Header.m_mcount = 0;
  outC->_L137.BG_Common_Header.nid_c = 0;
  outC->_L137.BG_Common_Header.nid_bg = 0;
  outC->_L137.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L137.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L137.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L137.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L137.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L137.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L137.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L137.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L137.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L137.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L137.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L137.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L137.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L137.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L137.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L137.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L137.BG_Common_Header.q_nvlocacc = 0;
  outC->_L137.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L137.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L137.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L137.Radio_Common_Header.radioDevice = 0;
  outC->_L137.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L137.Radio_Common_Header.nid_message = 0;
  outC->_L137.Radio_Common_Header.t_train = 0;
  outC->_L137.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L137.Radio_Common_Header.nid_lrbg = 0;
  outC->_L137.Radio_Common_Header.t_train_reference = 0;
  outC->_L137.Radio_Common_Header.nid_em = 0;
  outC->_L137.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L137.Radio_Common_Header.d_sr = 0;
  outC->_L137.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L137.Radio_Common_Header.d_ref = 0;
  outC->_L137.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L137.Radio_Common_Header.d_emergencystop = 0;
  outC->_L137.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i27 = 0; i27 < 30; i27++) {
    outC->_L137.packets.PacketHeaders[i27].nid_packet = 0;
    outC->_L137.packets.PacketHeaders[i27].q_dir = Q_DIR_Reverse;
    outC->_L137.packets.PacketHeaders[i27].valid = kcg_true;
    outC->_L137.packets.PacketHeaders[i27].startAddress = 0;
    outC->_L137.packets.PacketHeaders[i27].endAddress = 0;
  }
  for (i28 = 0; i28 < 500; i28++) {
    outC->_L137.packets.PacketData[i28] = 0;
  }
  outC->_L137.sendingRBC.valid = kcg_true;
  outC->_L137.sendingRBC.nid_c = 0;
  outC->_L137.sendingRBC.rbc_id = 0;
  outC->_L137.sendingRBC.device_id = 0;
  outC->_L83 = kcg_true;
  outC->_L84 = M_LEVELTR_Level_0;
  outC->_L85 = kcg_true;
  outC->_L86.valid = kcg_true;
  outC->_L86.q_dir = Q_DIR_Reverse;
  outC->_L86.q_scale = Q_SCALE_10_cm_scale;
  outC->_L86.d_leveltr = 0;
  outC->_L86.m_leveltr = M_LEVELTR_Level_0;
  outC->_L86.nid_ntc = 0;
  outC->_L86.l_ackleveltr = 0;
  outC->_L87 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L89 = M_LEVELTR_Level_0;
  outC->_L90.valid = kcg_true;
  outC->_L90.q_dir = Q_DIR_Reverse;
  outC->_L90.q_scale = Q_SCALE_10_cm_scale;
  outC->_L90.d_leveltr = 0;
  outC->_L90.m_leveltr = M_LEVELTR_Level_0;
  outC->_L90.nid_ntc = 0;
  outC->_L90.l_ackleveltr = 0;
  outC->_L91 = kcg_true;
  outC->_L92 = M_LEVELTR_Level_0;
  outC->_L93 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L96.pendingL1Transition = kcg_true;
  outC->_L96.pendingL12L3Transition = kcg_true;
  outC->_L96.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L96.emergencyStopAccepted = kcg_true;
  outC->_L96.lastAckTextMessageId = 0;
  outC->_L96.pendingNTCTransition = kcg_true;
  outC->_L96.SPPAndGradientOnBoard = kcg_true;
  outC->_L96.MACoverNotFullLength = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L101.pendingL1Transition = kcg_true;
  outC->_L101.pendingL12L3Transition = kcg_true;
  outC->_L101.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L101.emergencyStopAccepted = kcg_true;
  outC->_L101.lastAckTextMessageId = 0;
  outC->_L101.pendingNTCTransition = kcg_true;
  outC->_L101.SPPAndGradientOnBoard = kcg_true;
  outC->_L101.MACoverNotFullLength = kcg_true;
  outC->_L102 = kcg_true;
  for (i29 = 0; i29 < 7; i29++) {
    outC->_L103[i29].valid = kcg_true;
    outC->_L103[i29].q_dir = Q_DIR_Reverse;
    outC->_L103[i29].q_scale = Q_SCALE_10_cm_scale;
    outC->_L103[i29].d_leveltr = 0;
    outC->_L103[i29].m_leveltr = M_LEVELTR_Level_0;
    outC->_L103[i29].nid_ntc = 0;
    outC->_L103[i29].l_ackleveltr = 0;
  }
  outC->_L104 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L106.P12_received = kcg_true;
  outC->_L106.P15_received = kcg_true;
  outC->_L106.P21_received = kcg_true;
  outC->_L106.P27_received = kcg_true;
  outC->_L107 = M_LEVELTR_Level_0;
  outC->_L108 = kcg_true;
  outC->_L109.pendingL1Transition = kcg_true;
  outC->_L109.pendingL12L3Transition = kcg_true;
  outC->_L109.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L109.emergencyStopAccepted = kcg_true;
  outC->_L109.lastAckTextMessageId = 0;
  outC->_L109.pendingNTCTransition = kcg_true;
  outC->_L109.SPPAndGradientOnBoard = kcg_true;
  outC->_L109.MACoverNotFullLength = kcg_true;
  outC->_L110 = 0;
  outC->_L111 = kcg_true;
  for (i30 = 0; i30 < 7; i30++) {
    outC->_L112.p41[i30].valid = kcg_true;
    outC->_L112.p41[i30].q_dir = Q_DIR_Reverse;
    outC->_L112.p41[i30].q_scale = Q_SCALE_10_cm_scale;
    outC->_L112.p41[i30].d_leveltr = 0;
    outC->_L112.p41[i30].m_leveltr = M_LEVELTR_Level_0;
    outC->_L112.p41[i30].nid_ntc = 0;
    outC->_L112.p41[i30].l_ackleveltr = 0;
  }
  for (i31 = 0; i31 < 7; i31++) {
    outC->_L112.p46[i31].valid = kcg_true;
    outC->_L112.p46[i31].q_dir = Q_DIR_Reverse;
    outC->_L112.p46[i31].m_leveltr = M_LEVELTR_Level_0;
    outC->_L112.p46[i31].nid_ntc = 0;
  }
  outC->_L112.p12_received = kcg_true;
  outC->_L112.p15_received = kcg_true;
  outC->_L112.p21_received = kcg_true;
  outC->_L112.p27_received = kcg_true;
  outC->_L112.LRBG = 0;
  outC->_L112.referenceLocation = 0;
  outC->_L113 = M_LEVELTR_Level_0;
  outC->_L114 = M_LEVELTR_Level_0;
  outC->_L115 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = M_LEVEL_Level_0;
  outC->_L39 = M_LEVEL_Level_0;
  outC->_L38 = M_LEVEL_Level_0;
  outC->_L37.compatibleModeAndLevel = kcg_true;
  outC->_L37.level = M_LEVEL_Level_0;
  outC->_L37.newLevel = kcg_true;
  outC->_L37.Mode = M_MODE_Full_Supervision;
  outC->_L37.newMode = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.source = msrc_undefined_Common_Types_Pkg;
  outC->_L12.radioMetadata.t_train_reference = kcg_true;
  outC->_L12.radioMetadata.nid_em = kcg_true;
  outC->_L12.radioMetadata.q_scale = kcg_true;
  outC->_L12.radioMetadata.d_sr = kcg_true;
  outC->_L12.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12.radioMetadata.d_ref = kcg_true;
  outC->_L12.radioMetadata.q_dir = kcg_true;
  outC->_L12.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12.radioMetadata.m_version = kcg_true;
  outC->_L12.BG_Common_Header.valid = kcg_true;
  outC->_L12.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.BG_Common_Header.m_mcount = 0;
  outC->_L12.BG_Common_Header.nid_c = 0;
  outC->_L12.BG_Common_Header.nid_bg = 0;
  outC->_L12.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L12.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L12.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L12.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L12.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L12.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L12.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L12.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L12.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L12.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L12.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L12.BG_Common_Header.q_nvlocacc = 0;
  outC->_L12.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L12.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L12.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L12.Radio_Common_Header.radioDevice = 0;
  outC->_L12.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L12.Radio_Common_Header.nid_message = 0;
  outC->_L12.Radio_Common_Header.t_train = 0;
  outC->_L12.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L12.Radio_Common_Header.nid_lrbg = 0;
  outC->_L12.Radio_Common_Header.t_train_reference = 0;
  outC->_L12.Radio_Common_Header.nid_em = 0;
  outC->_L12.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.Radio_Common_Header.d_sr = 0;
  outC->_L12.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L12.Radio_Common_Header.d_ref = 0;
  outC->_L12.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12.Radio_Common_Header.d_emergencystop = 0;
  outC->_L12.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i32 = 0; i32 < 30; i32++) {
    outC->_L12.packets.PacketHeaders[i32].nid_packet = 0;
    outC->_L12.packets.PacketHeaders[i32].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[i32].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[i32].startAddress = 0;
    outC->_L12.packets.PacketHeaders[i32].endAddress = 0;
  }
  for (i33 = 0; i33 < 500; i33++) {
    outC->_L12.packets.PacketData[i33] = 0;
  }
  outC->_L12.sendingRBC.valid = kcg_true;
  outC->_L12.sendingRBC.nid_c = 0;
  outC->_L12.sendingRBC.rbc_id = 0;
  outC->_L12.sendingRBC.device_id = 0;
  outC->p41valid = kcg_true;
  outC->doReset = kcg_true;
  outC->msgToCheck = kcg_true;
  for (i34 = 0; i34 < 7; i34++) {
    outC->_L10_IfBlock1.p41[i34].valid = kcg_true;
    outC->_L10_IfBlock1.p41[i34].q_dir = Q_DIR_Reverse;
    outC->_L10_IfBlock1.p41[i34].q_scale = Q_SCALE_10_cm_scale;
    outC->_L10_IfBlock1.p41[i34].d_leveltr = 0;
    outC->_L10_IfBlock1.p41[i34].m_leveltr = M_LEVELTR_Level_0;
    outC->_L10_IfBlock1.p41[i34].nid_ntc = 0;
    outC->_L10_IfBlock1.p41[i34].l_ackleveltr = 0;
  }
  for (i35 = 0; i35 < 7; i35++) {
    outC->_L10_IfBlock1.p46[i35].valid = kcg_true;
    outC->_L10_IfBlock1.p46[i35].q_dir = Q_DIR_Reverse;
    outC->_L10_IfBlock1.p46[i35].m_leveltr = M_LEVELTR_Level_0;
    outC->_L10_IfBlock1.p46[i35].nid_ntc = 0;
  }
  outC->_L10_IfBlock1.p12_received = kcg_true;
  outC->_L10_IfBlock1.p15_received = kcg_true;
  outC->_L10_IfBlock1.p21_received = kcg_true;
  outC->_L10_IfBlock1.p27_received = kcg_true;
  outC->_L10_IfBlock1.LRBG = 0;
  outC->_L10_IfBlock1.referenceLocation = 0;
  for (i36 = 0; i36 < 7; i36++) {
    outC->_L9_IfBlock1[i36].valid = kcg_true;
    outC->_L9_IfBlock1[i36].q_dir = Q_DIR_Reverse;
    outC->_L9_IfBlock1[i36].m_leveltr = M_LEVELTR_Level_0;
    outC->_L9_IfBlock1[i36].nid_ntc = 0;
  }
  for (i37 = 0; i37 < 7; i37++) {
    outC->_L8_IfBlock1.p41[i37].valid = kcg_true;
    outC->_L8_IfBlock1.p41[i37].q_dir = Q_DIR_Reverse;
    outC->_L8_IfBlock1.p41[i37].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8_IfBlock1.p41[i37].d_leveltr = 0;
    outC->_L8_IfBlock1.p41[i37].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8_IfBlock1.p41[i37].nid_ntc = 0;
    outC->_L8_IfBlock1.p41[i37].l_ackleveltr = 0;
  }
  for (i38 = 0; i38 < 7; i38++) {
    outC->_L8_IfBlock1.p46[i38].valid = kcg_true;
    outC->_L8_IfBlock1.p46[i38].q_dir = Q_DIR_Reverse;
    outC->_L8_IfBlock1.p46[i38].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8_IfBlock1.p46[i38].nid_ntc = 0;
  }
  outC->_L8_IfBlock1.p12_received = kcg_true;
  outC->_L8_IfBlock1.p15_received = kcg_true;
  outC->_L8_IfBlock1.p21_received = kcg_true;
  outC->_L8_IfBlock1.p27_received = kcg_true;
  outC->_L8_IfBlock1.LRBG = 0;
  outC->_L8_IfBlock1.referenceLocation = 0;
  for (i39 = 0; i39 < 7; i39++) {
    outC->_L7_IfBlock1.p41[i39].valid = kcg_true;
    outC->_L7_IfBlock1.p41[i39].q_dir = Q_DIR_Reverse;
    outC->_L7_IfBlock1.p41[i39].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7_IfBlock1.p41[i39].d_leveltr = 0;
    outC->_L7_IfBlock1.p41[i39].m_leveltr = M_LEVELTR_Level_0;
    outC->_L7_IfBlock1.p41[i39].nid_ntc = 0;
    outC->_L7_IfBlock1.p41[i39].l_ackleveltr = 0;
  }
  for (i40 = 0; i40 < 7; i40++) {
    outC->_L7_IfBlock1.p46[i40].valid = kcg_true;
    outC->_L7_IfBlock1.p46[i40].q_dir = Q_DIR_Reverse;
    outC->_L7_IfBlock1.p46[i40].m_leveltr = M_LEVELTR_Level_0;
    outC->_L7_IfBlock1.p46[i40].nid_ntc = 0;
  }
  outC->_L7_IfBlock1.p12_received = kcg_true;
  outC->_L7_IfBlock1.p15_received = kcg_true;
  outC->_L7_IfBlock1.p21_received = kcg_true;
  outC->_L7_IfBlock1.p27_received = kcg_true;
  outC->_L7_IfBlock1.LRBG = 0;
  outC->_L7_IfBlock1.referenceLocation = 0;
  outC->_L6_IfBlock1 = kcg_true;
  outC->_L5_IfBlock1 = kcg_true;
  for (i41 = 0; i41 < 7; i41++) {
    outC->_L4_IfBlock1.p41[i41].valid = kcg_true;
    outC->_L4_IfBlock1.p41[i41].q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1.p41[i41].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4_IfBlock1.p41[i41].d_leveltr = 0;
    outC->_L4_IfBlock1.p41[i41].m_leveltr = M_LEVELTR_Level_0;
    outC->_L4_IfBlock1.p41[i41].nid_ntc = 0;
    outC->_L4_IfBlock1.p41[i41].l_ackleveltr = 0;
  }
  for (i42 = 0; i42 < 7; i42++) {
    outC->_L4_IfBlock1.p46[i42].valid = kcg_true;
    outC->_L4_IfBlock1.p46[i42].q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1.p46[i42].m_leveltr = M_LEVELTR_Level_0;
    outC->_L4_IfBlock1.p46[i42].nid_ntc = 0;
  }
  outC->_L4_IfBlock1.p12_received = kcg_true;
  outC->_L4_IfBlock1.p15_received = kcg_true;
  outC->_L4_IfBlock1.p21_received = kcg_true;
  outC->_L4_IfBlock1.p27_received = kcg_true;
  outC->_L4_IfBlock1.LRBG = 0;
  outC->_L4_IfBlock1.referenceLocation = 0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_IfBlock1.valid = kcg_true;
  outC->_L1_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_IfBlock1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1_IfBlock1.BG_Common_Header.m_mcount = 0;
  outC->_L1_IfBlock1.BG_Common_Header.nid_c = 0;
  outC->_L1_IfBlock1.BG_Common_Header.nid_bg = 0;
  outC->_L1_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1_IfBlock1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_IfBlock1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_IfBlock1.Radio_Common_Header.radioDevice = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.nid_message = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.t_train = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_IfBlock1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.t_train_reference = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.nid_em = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_IfBlock1.Radio_Common_Header.d_sr = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.d_ref = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_IfBlock1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i43 = 0; i43 < 30; i43++) {
    outC->_L1_IfBlock1.packets.PacketHeaders[i43].nid_packet = 0;
    outC->_L1_IfBlock1.packets.PacketHeaders[i43].q_dir = Q_DIR_Reverse;
    outC->_L1_IfBlock1.packets.PacketHeaders[i43].valid = kcg_true;
    outC->_L1_IfBlock1.packets.PacketHeaders[i43].startAddress = 0;
    outC->_L1_IfBlock1.packets.PacketHeaders[i43].endAddress = 0;
  }
  for (i44 = 0; i44 < 500; i44++) {
    outC->_L1_IfBlock1.packets.PacketData[i44] = 0;
  }
  outC->_L1_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_IfBlock1.sendingRBC.nid_c = 0;
  outC->_L1_IfBlock1.sendingRBC.rbc_id = 0;
  outC->_L1_IfBlock1.sendingRBC.device_id = 0;
  for (i45 = 0; i45 < 7; i45++) {
    outC->_L31_IfBlock1.p41[i45].valid = kcg_true;
    outC->_L31_IfBlock1.p41[i45].q_dir = Q_DIR_Reverse;
    outC->_L31_IfBlock1.p41[i45].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31_IfBlock1.p41[i45].d_leveltr = 0;
    outC->_L31_IfBlock1.p41[i45].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31_IfBlock1.p41[i45].nid_ntc = 0;
    outC->_L31_IfBlock1.p41[i45].l_ackleveltr = 0;
  }
  for (i46 = 0; i46 < 7; i46++) {
    outC->_L31_IfBlock1.p46[i46].valid = kcg_true;
    outC->_L31_IfBlock1.p46[i46].q_dir = Q_DIR_Reverse;
    outC->_L31_IfBlock1.p46[i46].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31_IfBlock1.p46[i46].nid_ntc = 0;
  }
  outC->_L31_IfBlock1.p12_received = kcg_true;
  outC->_L31_IfBlock1.p15_received = kcg_true;
  outC->_L31_IfBlock1.p21_received = kcg_true;
  outC->_L31_IfBlock1.p27_received = kcg_true;
  outC->_L31_IfBlock1.LRBG = 0;
  outC->_L31_IfBlock1.referenceLocation = 0;
  outC->_L32_IfBlock1 = kcg_true;
  outC->_L33_IfBlock1 = kcg_true;
  outC->_L34_IfBlock1.valid = kcg_true;
  outC->_L34_IfBlock1.timestamp = 0;
  outC->_L34_IfBlock1.trainPositionIsUnknown = kcg_true;
  outC->_L34_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L34_IfBlock1.trainPosition.nominal = 0;
  outC->_L34_IfBlock1.trainPosition.d_min = 0;
  outC->_L34_IfBlock1.trainPosition.d_max = 0;
  outC->_L34_IfBlock1.estimatedFrontEndPosition = 0;
  outC->_L34_IfBlock1.minSafeFrontEndPosition = 0;
  outC->_L34_IfBlock1.maxSafeFrontEndPostion = 0;
  outC->_L34_IfBlock1.LRBG.valid = kcg_true;
  outC->_L34_IfBlock1.LRBG.nid_c = 0;
  outC->_L34_IfBlock1.LRBG.nid_bg = 0;
  outC->_L34_IfBlock1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L34_IfBlock1.LRBG.location.nominal = 0;
  outC->_L34_IfBlock1.LRBG.location.d_min = 0;
  outC->_L34_IfBlock1.LRBG.location.d_max = 0;
  outC->_L34_IfBlock1.LRBG.seqNoOnTrack = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L34_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L34_IfBlock1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i47 = 0; i47 < 33; i47++) {
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].valid = kcg_true;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].nid_LRBG = 0;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].q_dir =
      Q_DIR_Reverse;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].d_link = 0;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].nid_c = 0;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].nid_bg = 0;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L34_IfBlock1.LRBG.infoFromPassing.linkedBGs[i47].q_locacc = 0;
  }
  outC->_L34_IfBlock1.LRBG.missed = kcg_true;
  outC->_L34_IfBlock1.prvLRBG.valid = kcg_true;
  outC->_L34_IfBlock1.prvLRBG.nid_c = 0;
  outC->_L34_IfBlock1.prvLRBG.nid_bg = 0;
  outC->_L34_IfBlock1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L34_IfBlock1.prvLRBG.location.nominal = 0;
  outC->_L34_IfBlock1.prvLRBG.location.d_min = 0;
  outC->_L34_IfBlock1.prvLRBG.location.d_max = 0;
  outC->_L34_IfBlock1.prvLRBG.seqNoOnTrack = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L34_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L34_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i48 = 0; i48 < 33; i48++) {
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].valid = kcg_true;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].nid_LRBG = 0;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].q_dir =
      Q_DIR_Reverse;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].d_link = 0;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].nid_c = 0;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].nid_bg = 0;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L34_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[i48].q_locacc = 0;
  }
  outC->_L34_IfBlock1.prvLRBG.missed = kcg_true;
  outC->_L34_IfBlock1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L34_IfBlock1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L34_IfBlock1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L34_IfBlock1.linkingIsUsedOnboard = kcg_true;
  outC->_L34_IfBlock1.estimatedRearEndPosition = 0;
  outC->_L34_IfBlock1.minSafeRearEndPosition = 0;
  outC->_L34_IfBlock1.maxSafeRearEndPosition = 0;
  for (i49 = 0; i49 < 7; i49++) {
    outC->_L35_IfBlock1.p41[i49].valid = kcg_true;
    outC->_L35_IfBlock1.p41[i49].q_dir = Q_DIR_Reverse;
    outC->_L35_IfBlock1.p41[i49].q_scale = Q_SCALE_10_cm_scale;
    outC->_L35_IfBlock1.p41[i49].d_leveltr = 0;
    outC->_L35_IfBlock1.p41[i49].m_leveltr = M_LEVELTR_Level_0;
    outC->_L35_IfBlock1.p41[i49].nid_ntc = 0;
    outC->_L35_IfBlock1.p41[i49].l_ackleveltr = 0;
  }
  for (i50 = 0; i50 < 7; i50++) {
    outC->_L35_IfBlock1.p46[i50].valid = kcg_true;
    outC->_L35_IfBlock1.p46[i50].q_dir = Q_DIR_Reverse;
    outC->_L35_IfBlock1.p46[i50].m_leveltr = M_LEVELTR_Level_0;
    outC->_L35_IfBlock1.p46[i50].nid_ntc = 0;
  }
  outC->_L35_IfBlock1.p12_received = kcg_true;
  outC->_L35_IfBlock1.p15_received = kcg_true;
  outC->_L35_IfBlock1.p21_received = kcg_true;
  outC->_L35_IfBlock1.p27_received = kcg_true;
  outC->_L35_IfBlock1.LRBG = 0;
  outC->_L35_IfBlock1.referenceLocation = 0;
  outC->_L36_IfBlock1 = M_LEVEL_Level_0;
  outC->_L37_IfBlock1.nid_engine = 0;
  outC->_L37_IfBlock1.nid_operational = 0;
  outC->_L37_IfBlock1.l_train = 0;
  outC->_L37_IfBlock1.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L37_IfBlock1.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L37_IfBlock1.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L37_IfBlock1.d_frontend_2_rearend.nominal = 0;
  outC->_L37_IfBlock1.d_frontend_2_rearend.d_min = 0;
  outC->_L37_IfBlock1.d_frontend_2_rearend.d_max = 0;
  outC->_L37_IfBlock1.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L37_IfBlock1.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L37_IfBlock1.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L37_IfBlock1.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L37_IfBlock1.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L37_IfBlock1.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->IfBlock1_clock = kcg_true;
  outC->init = kcg_true;
  outC->LRBGpositionNeeded = kcg_true;
  outC->level = M_LEVEL_Level_0;
  for (i51 = 0; i51 < 7; i51++) {
    outC->infoForLevelTransition.p41[i51].valid = kcg_true;
    outC->infoForLevelTransition.p41[i51].q_dir = Q_DIR_Reverse;
    outC->infoForLevelTransition.p41[i51].q_scale = Q_SCALE_10_cm_scale;
    outC->infoForLevelTransition.p41[i51].d_leveltr = 0;
    outC->infoForLevelTransition.p41[i51].m_leveltr = M_LEVELTR_Level_0;
    outC->infoForLevelTransition.p41[i51].nid_ntc = 0;
    outC->infoForLevelTransition.p41[i51].l_ackleveltr = 0;
  }
  for (i52 = 0; i52 < 7; i52++) {
    outC->infoForLevelTransition.p46[i52].valid = kcg_true;
    outC->infoForLevelTransition.p46[i52].q_dir = Q_DIR_Reverse;
    outC->infoForLevelTransition.p46[i52].m_leveltr = M_LEVELTR_Level_0;
    outC->infoForLevelTransition.p46[i52].nid_ntc = 0;
  }
  outC->infoForLevelTransition.p12_received = kcg_true;
  outC->infoForLevelTransition.p15_received = kcg_true;
  outC->infoForLevelTransition.p21_received = kcg_true;
  outC->infoForLevelTransition.p27_received = kcg_true;
  outC->infoForLevelTransition.LRBG = 0;
  outC->infoForLevelTransition.referenceLocation = 0;
  for (i53 = 0; i53 < 5; i53++) {
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].v_main = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].l_section = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].d_sectiontimerstoploc_k =
      0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i53].v_releaseol = 0;
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
  for (i54 = 0; i54 < 5; i54++) {
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].l_section = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].d_sectiontimerstoploc_k =
      0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i54].v_releaseol = 0;
  }
  for (i55 = 0; i55 < 7; i55++) {
    outC->Data_to_From_Track_Packets_at_ML.P_21[i55].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i55].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i55].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i55].d_gradient = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i55].q_gdir = Q_GDIR_downhill;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i55].g_a = 0;
  }
  outC->Data_to_From_Track_Packets_at_ML.P_27.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_27.d_static = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_27.v_static = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i56 = 0; i56 < 7; i56++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i56].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i56].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i56].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i56].nc_diff = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i56].v_diff = 0;
  }
  for (i58 = 0; i58 < 7; i58++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].d_static = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].v_static = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i57 = 0; i57 < 7; i57++) {
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].diffArray[i57].valid =
        kcg_true;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].diffArray[i57].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].diffArray[i57].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].diffArray[i57].nc_diff =
        0;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i58].diffArray[i57].v_diff =
        0;
    }
  }
  for (i59 = 0; i59 < 7; i59++) {
    outC->Data_to_From_Track_Packets_at_ML.P_41[i59].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i59].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i59].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i59].d_leveltr = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i59].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i59].nid_ntc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i59].l_ackleveltr = 0;
  }
  for (i60 = 0; i60 < 7; i60++) {
    outC->Data_to_From_Track_Packets_at_ML.P_46[i60].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i60].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i60].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i60].nid_ntc = 0;
  }
  for (i61 = 0; i61 < 7; i61++) {
    outC->Data_to_From_Track_Packets_at_ML.P_63[i61].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i61].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i61].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i61].nid_c = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i61].nid_bg = 0;
  }
  for (i62 = 0; i62 < 3; i62++) {
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].d_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].m_mamode =
      M_MAMODE_On_Sight;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].v_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].l_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].l_ackmamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i62].q_mamode =
      Q_MAMODE_as_the_EOA;
  }
  outC->Data_to_From_Track_Packets_at_ML.LRBG = 0;
  outC->Data_to_From_Track_Packets_at_ML.referenceLocation = 0;
  outC->outFilterEvents.pendingL1Transition = kcg_true;
  outC->outFilterEvents.pendingL12L3Transition = kcg_true;
  outC->outFilterEvents.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->outFilterEvents.emergencyStopAccepted = kcg_true;
  outC->outFilterEvents.lastAckTextMessageId = 0;
  outC->outFilterEvents.pendingNTCTransition = kcg_true;
  outC->outFilterEvents.SPPAndGradientOnBoard = kcg_true;
  outC->outFilterEvents.MACoverNotFullLength = kcg_true;
  outC->forLevelManagement.P12_received = kcg_true;
  outC->forLevelManagement.P15_received = kcg_true;
  outC->forLevelManagement.P21_received = kcg_true;
  outC->forLevelManagement.P27_received = kcg_true;
  /* dataForLevelTransition */
  dataForLevelTransition_init_xdebugSupport_Pkg(
    &outC->Context_dataForLevelTransition);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void combineForLevelChange_reset_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
  /* dataForLevelTransition */
  dataForLevelTransition_reset_xdebugSupport_Pkg(
    &outC->Context_dataForLevelTransition);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::combineForLevelChange */
void combineForLevelChange_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::combineForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* xdebugSupport_Pkg::combineForLevelChange::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_combineForLevelChange_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */
  static kcg_bool _2_LRBGpositionNeeded;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static dataCollectionForLevelTransition_T_xdebugSupport_Pkg _1_infoForLevelTransition;
  /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */
  static kcg_bool LRBGpositionNeeded;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static dataCollectionForLevelTransition_T_xdebugSupport_Pkg infoForLevelTransition;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static dataCollectionForLevelTransition_T_xdebugSupport_Pkg _3_infoForLevelTransition;
  /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */
  static kcg_bool _4_LRBGpositionNeeded;
  static dataCollectionForLevelTransition_T_xdebugSupport_Pkg noname;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static dataCollectionForLevelTransition_T_xdebugSupport_Pkg _5_infoForLevelTransition;
  /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */
  static kcg_bool _6_LRBGpositionNeeded;
  static kcg_bool _7_noname;
  static kcg_bool _8_noname;
  static P135_OBU_T_TM _9_noname;
  static P012_OBU_T_TM _10_noname;
  /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */
  static kcg_bool last_LRBGpositionNeeded;
  /* xdebugSupport_Pkg::combineForLevelChange::level */
  static M_LEVEL last_level;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static dataCollectionForLevelTransition_T_xdebugSupport_Pkg last_infoForLevelTransition;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L12, actualMessage);
  outC->_L31 = outC->_L12.valid;
  outC->msgToCheck = outC->_L31;
  outC->IfBlock1_clock = outC->msgToCheck;
  /* last_init_ck_infoForLevelTransition */ if (outC->init) {
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &last_infoForLevelTransition,
      (dataCollectionForLevelTransition_T_xdebugSupport_Pkg *)
        &cNoML_xdebugSupport_Pkg);
  }
  else {
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &last_infoForLevelTransition,
      &outC->infoForLevelTransition);
  }
  /* last_init_ck_level */ if (outC->init) {
    last_level = M_LEVEL_Level_0;
  }
  else {
    last_level = outC->level;
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L37, ModeLevel);
  outC->_L38 = outC->_L37.level;
  outC->level = outC->_L38;
  outC->_L39 = outC->level;
  outC->_L40 = last_level;
  outC->_L41 = outC->_L39 != outC->_L40;
  outC->_L43 = transitionPositionPassed;
  outC->_L42 = outC->_L41 | outC->_L43;
  outC->doReset = outC->_L42;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L1_IfBlock1,
      actualMessage);
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &outC->_L31_IfBlock1,
      &last_infoForLevelTransition);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L34_IfBlock1,
      trainPosition);
  }
  else {
    outC->else_clock_IfBlock1 = outC->doReset;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &outC->_L10_IfBlock1,
        (dataCollectionForLevelTransition_T_xdebugSupport_Pkg *)
          &cNoML_xdebugSupport_Pkg);
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &_5_infoForLevelTransition,
        &outC->_L10_IfBlock1);
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &infoForLevelTransition,
        &_5_infoForLevelTransition);
    }
    else {
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &outC->_L4_IfBlock1,
        &last_infoForLevelTransition);
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &_3_infoForLevelTransition,
        &outC->_L4_IfBlock1);
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &infoForLevelTransition,
        &_3_infoForLevelTransition);
    }
  }
  /* last_init_ck_LRBGpositionNeeded */ if (outC->init) {
    last_LRBGpositionNeeded = kcg_true;
  }
  else {
    last_LRBGpositionNeeded = outC->LRBGpositionNeeded;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L33_IfBlock1 = last_LRBGpositionNeeded;
    outC->_L36_IfBlock1 = outC->level;
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L37_IfBlock1,
      trainProperties);
    /* dataForLevelTransition */
    dataForLevelTransition_xdebugSupport_Pkg(
      &outC->_L1_IfBlock1,
      &outC->_L31_IfBlock1,
      &outC->_L34_IfBlock1,
      outC->_L33_IfBlock1,
      outC->_L36_IfBlock1,
      &outC->_L37_IfBlock1,
      &outC->Context_dataForLevelTransition);
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &outC->_L35_IfBlock1,
      &outC->Context_dataForLevelTransition.outstoredData);
    outC->_L32_IfBlock1 =
      outC->Context_dataForLevelTransition.outPositionNeeded;
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &_1_infoForLevelTransition,
      &outC->_L35_IfBlock1);
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &outC->infoForLevelTransition,
      &_1_infoForLevelTransition);
    _2_LRBGpositionNeeded = outC->_L32_IfBlock1;
    outC->LRBGpositionNeeded = _2_LRBGpositionNeeded;
  }
  else {
    kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
      &outC->infoForLevelTransition,
      &infoForLevelTransition);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
      outC->_L6_IfBlock1 = kcg_false;
      _6_LRBGpositionNeeded = outC->_L6_IfBlock1;
      LRBGpositionNeeded = _6_LRBGpositionNeeded;
    }
    else {
      outC->_L5_IfBlock1 = last_LRBGpositionNeeded;
      _4_LRBGpositionNeeded = outC->_L5_IfBlock1;
      LRBGpositionNeeded = _4_LRBGpositionNeeded;
    }
    outC->LRBGpositionNeeded = LRBGpositionNeeded;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &outC->_L8_IfBlock1,
        &last_infoForLevelTransition);
      kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
        &outC->_L9_IfBlock1,
        &outC->_L8_IfBlock1.p46);
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &outC->_L7_IfBlock1,
        &outC->_L10_IfBlock1);
      if (kcg_true) {
        kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
          &outC->_L7_IfBlock1.p46,
          &outC->_L9_IfBlock1);
      }
      kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
        &noname,
        &outC->_L7_IfBlock1);
    }
  }
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L112,
    &outC->infoForLevelTransition);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L103,
    &outC->_L112.p41);
  kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
    &outC->_L86,
    (P41_LevelTransitionOrder_T_Packet_Types_Pkg *)
      &cNoP41Element_xdebugSupport_Pkg);
  outC->_L110 = 0;
  if ((0 <= outC->_L110) & (outC->_L110 < 7)) {
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L90,
      &outC->_L103[outC->_L110]);
  }
  else {
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L90,
      &outC->_L86);
  }
  outC->_L85 = outC->_L90.valid;
  outC->p41valid = outC->_L85;
  outC->_L94 = outC->p41valid;
  outC->_L114 = outC->_L90.m_leveltr;
  outC->_L84 = M_LEVELTR_Level_2;
  outC->_L115 = outC->_L114 == outC->_L84;
  outC->_L102 = kcg_false;
  /* 7 */ if (outC->_L94) {
    outC->_L83 = outC->_L115;
  }
  else {
    outC->_L83 = outC->_L102;
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L96, inFilterEvents);
  outC->_L99 = outC->p41valid;
  outC->_L107 = outC->_L90.m_leveltr;
  outC->_L92 = M_LEVELTR_Level_3;
  outC->_L91 = outC->_L107 == outC->_L92;
  outC->_L100 = kcg_false;
  /* 6 */ if (outC->_L99) {
    outC->_L97 = outC->_L91;
  }
  else {
    outC->_L97 = outC->_L100;
  }
  outC->_L108 = outC->_L83 | outC->_L97;
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L101, &outC->_L96);
  if (kcg_true) {
    outC->_L101.pendingL12L3Transition = outC->_L108;
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L144, &outC->_L101);
  if (kcg_true) {
    outC->_L144.SPPAndGradientOnBoard = outC->_L108;
  }
  outC->_L104 = outC->p41valid;
  outC->_L89 = outC->_L90.m_leveltr;
  outC->_L113 = M_LEVELTR_Level_1;
  outC->_L105 = outC->_L89 == outC->_L113;
  outC->_L88 = kcg_false;
  /* 5 */ if (outC->_L104) {
    outC->_L98 = outC->_L105;
  }
  else {
    outC->_L98 = outC->_L88;
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L109, &outC->_L144);
  if (kcg_true) {
    outC->_L109.pendingL1Transition = outC->_L98;
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->outFilterEvents,
    &outC->_L109);
  outC->_L87 = outC->_L112.p12_received;
  outC->_L111 = outC->_L112.p15_received;
  outC->_L93 = outC->_L112.p21_received;
  outC->_L95 = outC->_L112.p27_received;
  outC->_L106.P12_received = outC->_L87;
  outC->_L106.P15_received = outC->_L111;
  outC->_L106.P21_received = outC->_L93;
  outC->_L106.P27_received = outC->_L95;
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->forLevelManagement,
    &outC->_L106);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L137, actualMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L119,
    &outC->_L137.packets);
  /* 1 */ Read_P012_TM(&outC->_L119, &outC->_L116, &outC->_L117);
  _7_noname = outC->_L116;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->_L120,
    (P80_ModeProfiles_T_Packet_Types_Pkg *)
      &Default_P80_legacy_xdebugSupport_Pkg);
  /* 1 */ Read_P027V1_Legacy_for_ML_TM_specific(&outC->_L119, &outC->_L122);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L123,
    (P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg *)
      &Default_P135_legacy_xdebugSupport_Pkg);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L130,
    (P12_Level1MovementAuthorities_T_Packet_Types_Pkg *)
      &Default_P12_legacy_xdebugSupport_Pkg);
  /* 1 */ Read_P137_Legacy_TM_specific(&outC->_L119, &outC->_L125);
  /* 1 */ Read_P138_Legacy_TM_specific(&outC->_L119, &outC->_L134);
  /* 1 */ Read_P139_Legacy_TM_specific(&outC->_L119, &outC->_L127);
  /* 1 */ Read_P015_Legacy_TM_specific(&outC->_L119, &outC->_L129);
  /* 1 */ Read_P021_Legacy_TM_specific(&outC->_L119, &outC->_L136);
  outC->_L147 = outC->LRBGpositionNeeded;
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L146,
    (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
      &cNoP41_xdebugSupport_Pkg);
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L138,
    &outC->infoForLevelTransition);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L139,
    &outC->_L138.p41);
  /* 8 */ if (outC->_L147) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L145,
      &outC->_L146);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L145,
      &outC->_L139);
  }
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L140,
    &outC->_L138.p46);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L128,
    (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *)
      &Default_P63_legacy_xdebugSupport_Pkg);
  outC->_L141 = outC->_L138.LRBG;
  outC->_L143 = outC->_L138.referenceLocation;
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L124.P_12,
    &outC->_L130);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L124.P_135,
    &outC->_L123);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L124.P_137,
    &outC->_L125);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L124.P_138,
    &outC->_L134);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L124.P_139,
    &outC->_L127);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L124.P_15,
    &outC->_L129);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L124.P_21,
    &outC->_L136);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L124.P_27,
    &outC->_L122);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L124.P_41,
    &outC->_L145);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L124.P_46,
    &outC->_L140);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L124.P_63,
    &outC->_L128);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L124.P_80, &outC->_L120);
  outC->_L124.LRBG = outC->_L141;
  outC->_L124.referenceLocation = outC->_L143;
  /* 1 */ Read_P135_TM(&outC->_L119, &outC->_L131, &outC->_L132);
  _8_noname = outC->_L131;
  kcg_copy_P135_OBU_T_TM(&_9_noname, &outC->_L132);
  kcg_copy_P012_OBU_T_TM(&_10_noname, &outC->_L117);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML,
    &outC->_L124);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** combineForLevelChange_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

