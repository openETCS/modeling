/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchEmergencyBrakeMsg_EVC_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void patchEmergencyBrakeMsg_init_EVC_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_Support_Pkg *outC)
{
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
  
  for (i = 0; i < 5; i++) {
    outC->_L8.train_packets.P_12[i].valid = kcg_true;
    outC->_L8.train_packets.P_12[i].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_12[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_12[i].v_main = 0;
    outC->_L8.train_packets.P_12[i].v_loa = 0;
    outC->_L8.train_packets.P_12[i].t_loa = 0;
    outC->_L8.train_packets.P_12[i].l_section = 0;
    outC->_L8.train_packets.P_12[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_12[i].t_sectiontimer_k = 0;
    outC->_L8.train_packets.P_12[i].d_sectiontimerstoploc_k = 0;
    outC->_L8.train_packets.P_12[i].l_endsection = 0;
    outC->_L8.train_packets.P_12[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_12[i].t_sectiontimer = 0;
    outC->_L8.train_packets.P_12[i].d_sectiontimerstoploc = 0;
    outC->_L8.train_packets.P_12[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L8.train_packets.P_12[i].t_endtimer = 0;
    outC->_L8.train_packets.P_12[i].d_endtimerstartloc = 0;
    outC->_L8.train_packets.P_12[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L8.train_packets.P_12[i].d_dp = 0;
    outC->_L8.train_packets.P_12[i].v_releasedp = 0;
    outC->_L8.train_packets.P_12[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L8.train_packets.P_12[i].d_startol = 0;
    outC->_L8.train_packets.P_12[i].t_ol = 0;
    outC->_L8.train_packets.P_12[i].d_ol = 0;
    outC->_L8.train_packets.P_12[i].v_releaseol = 0;
  }
  outC->_L8.train_packets.P_135.valid = kcg_true;
  outC->_L8.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_137.valid = kcg_true;
  outC->_L8.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L8.train_packets.P_138.valid = kcg_true;
  outC->_L8.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.train_packets.P_138.d_startreverse = 0;
  outC->_L8.train_packets.P_138.l_reversearea = 0;
  outC->_L8.train_packets.P_139.valid = kcg_true;
  outC->_L8.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.train_packets.P_139.d_reverse = 0;
  outC->_L8.train_packets.P_139.v_reverse = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->_L8.train_packets.P_15[i1].valid = kcg_true;
    outC->_L8.train_packets.P_15[i1].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_15[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_15[i1].v_loa = 0;
    outC->_L8.train_packets.P_15[i1].t_loa = 0;
    outC->_L8.train_packets.P_15[i1].l_section = 0;
    outC->_L8.train_packets.P_15[i1].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_15[i1].t_sectiontimer_k = 0;
    outC->_L8.train_packets.P_15[i1].d_sectiontimerstoploc_k = 0;
    outC->_L8.train_packets.P_15[i1].l_endsection = 0;
    outC->_L8.train_packets.P_15[i1].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_15[i1].t_sectiontimer = 0;
    outC->_L8.train_packets.P_15[i1].d_sectiontimerstoploc = 0;
    outC->_L8.train_packets.P_15[i1].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L8.train_packets.P_15[i1].t_endtimer = 0;
    outC->_L8.train_packets.P_15[i1].d_endtimerstartloc = 0;
    outC->_L8.train_packets.P_15[i1].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L8.train_packets.P_15[i1].d_dp = 0;
    outC->_L8.train_packets.P_15[i1].v_releasedp = 0;
    outC->_L8.train_packets.P_15[i1].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L8.train_packets.P_15[i1].d_startol = 0;
    outC->_L8.train_packets.P_15[i1].t_ol = 0;
    outC->_L8.train_packets.P_15[i1].d_ol = 0;
    outC->_L8.train_packets.P_15[i1].v_releaseol = 0;
  }
  for (i2 = 0; i2 < 7; i2++) {
    outC->_L8.train_packets.P_21[i2].valid = kcg_true;
    outC->_L8.train_packets.P_21[i2].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_21[i2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_21[i2].d_gradient = 0;
    outC->_L8.train_packets.P_21[i2].q_gdir = Q_GDIR_downhill;
    outC->_L8.train_packets.P_21[i2].g_a = 0;
  }
  outC->_L8.train_packets.P_27.valid = kcg_true;
  outC->_L8.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.train_packets.P_27.d_static = 0;
  outC->_L8.train_packets.P_27.v_static = 0;
  outC->_L8.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i3 = 0; i3 < 7; i3++) {
    outC->_L8.train_packets.P_27.diffArray[i3].valid = kcg_true;
    outC->_L8.train_packets.P_27.diffArray[i3].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L8.train_packets.P_27.diffArray[i3].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L8.train_packets.P_27.diffArray[i3].nc_diff = 0;
    outC->_L8.train_packets.P_27.diffArray[i3].v_diff = 0;
  }
  for (i5 = 0; i5 < 7; i5++) {
    outC->_L8.train_packets.P_27.SSPArray[i5].valid = kcg_true;
    outC->_L8.train_packets.P_27.SSPArray[i5].d_static = 0;
    outC->_L8.train_packets.P_27.SSPArray[i5].v_static = 0;
    outC->_L8.train_packets.P_27.SSPArray[i5].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i4 = 0; i4 < 7; i4++) {
      outC->_L8.train_packets.P_27.SSPArray[i5].diffArray[i4].valid = kcg_true;
      outC->_L8.train_packets.P_27.SSPArray[i5].diffArray[i4].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L8.train_packets.P_27.SSPArray[i5].diffArray[i4].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L8.train_packets.P_27.SSPArray[i5].diffArray[i4].nc_diff = 0;
      outC->_L8.train_packets.P_27.SSPArray[i5].diffArray[i4].v_diff = 0;
    }
  }
  for (i6 = 0; i6 < 7; i6++) {
    outC->_L8.train_packets.P_41[i6].valid = kcg_true;
    outC->_L8.train_packets.P_41[i6].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_41[i6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_41[i6].d_leveltr = 0;
    outC->_L8.train_packets.P_41[i6].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8.train_packets.P_41[i6].nid_ntc = 0;
    outC->_L8.train_packets.P_41[i6].l_ackleveltr = 0;
  }
  for (i7 = 0; i7 < 7; i7++) {
    outC->_L8.train_packets.P_46[i7].valid = kcg_true;
    outC->_L8.train_packets.P_46[i7].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_46[i7].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8.train_packets.P_46[i7].nid_ntc = 0;
  }
  for (i8 = 0; i8 < 7; i8++) {
    outC->_L8.train_packets.P_63[i8].valid = kcg_true;
    outC->_L8.train_packets.P_63[i8].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_63[i8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.train_packets.P_63[i8].nid_c = 0;
    outC->_L8.train_packets.P_63[i8].nid_bg = 0;
  }
  for (i9 = 0; i9 < 3; i9++) {
    outC->_L8.train_packets.P_80[i9].valid = kcg_true;
    outC->_L8.train_packets.P_80[i9].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_80[i9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_80[i9].d_mamode = 0;
    outC->_L8.train_packets.P_80[i9].m_mamode = M_MAMODE_On_Sight;
    outC->_L8.train_packets.P_80[i9].v_mamode = 0;
    outC->_L8.train_packets.P_80[i9].l_mamode = 0;
    outC->_L8.train_packets.P_80[i9].l_ackmamode = 0;
    outC->_L8.train_packets.P_80[i9].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L8.train_packets.LRBG = 0;
  outC->_L8.train_packets.referenceLocation = 0;
  outC->_L8.train_messages.Mess_15 = kcg_true;
  outC->_L8.train_messages.Mess_16 = kcg_true;
  outC->_L8.train_messages.Mess_2 = kcg_true;
  outC->_L8.train_messages.Mess_27 = kcg_true;
  outC->_L8.train_messages.Mess_28 = kcg_true;
  outC->_L8.train_messages.Mess_6 = kcg_true;
  outC->_L8.p12 = kcg_true;
  outC->_L8.p15 = kcg_true;
  outC->_L8.p21 = kcg_true;
  outC->_L8.p27 = kcg_true;
  outC->_L5.Mess_15 = kcg_true;
  outC->_L5.Mess_16 = kcg_true;
  outC->_L5.Mess_2 = kcg_true;
  outC->_L5.Mess_27 = kcg_true;
  outC->_L5.Mess_28 = kcg_true;
  outC->_L5.Mess_6 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3.Mess_15 = kcg_true;
  outC->_L3.Mess_16 = kcg_true;
  outC->_L3.Mess_2 = kcg_true;
  outC->_L3.Mess_27 = kcg_true;
  outC->_L3.Mess_28 = kcg_true;
  outC->_L3.Mess_6 = kcg_true;
  outC->_L2.Mess_15 = kcg_true;
  outC->_L2.Mess_16 = kcg_true;
  outC->_L2.Mess_2 = kcg_true;
  outC->_L2.Mess_27 = kcg_true;
  outC->_L2.Mess_28 = kcg_true;
  outC->_L2.Mess_6 = kcg_true;
  for (i10 = 0; i10 < 5; i10++) {
    outC->_L1.train_packets.P_12[i10].valid = kcg_true;
    outC->_L1.train_packets.P_12[i10].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_12[i10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_12[i10].v_main = 0;
    outC->_L1.train_packets.P_12[i10].v_loa = 0;
    outC->_L1.train_packets.P_12[i10].t_loa = 0;
    outC->_L1.train_packets.P_12[i10].l_section = 0;
    outC->_L1.train_packets.P_12[i10].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_12[i10].t_sectiontimer_k = 0;
    outC->_L1.train_packets.P_12[i10].d_sectiontimerstoploc_k = 0;
    outC->_L1.train_packets.P_12[i10].l_endsection = 0;
    outC->_L1.train_packets.P_12[i10].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_12[i10].t_sectiontimer = 0;
    outC->_L1.train_packets.P_12[i10].d_sectiontimerstoploc = 0;
    outC->_L1.train_packets.P_12[i10].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1.train_packets.P_12[i10].t_endtimer = 0;
    outC->_L1.train_packets.P_12[i10].d_endtimerstartloc = 0;
    outC->_L1.train_packets.P_12[i10].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1.train_packets.P_12[i10].d_dp = 0;
    outC->_L1.train_packets.P_12[i10].v_releasedp = 0;
    outC->_L1.train_packets.P_12[i10].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1.train_packets.P_12[i10].d_startol = 0;
    outC->_L1.train_packets.P_12[i10].t_ol = 0;
    outC->_L1.train_packets.P_12[i10].d_ol = 0;
    outC->_L1.train_packets.P_12[i10].v_releaseol = 0;
  }
  outC->_L1.train_packets.P_135.valid = kcg_true;
  outC->_L1.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_137.valid = kcg_true;
  outC->_L1.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1.train_packets.P_138.valid = kcg_true;
  outC->_L1.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.train_packets.P_138.d_startreverse = 0;
  outC->_L1.train_packets.P_138.l_reversearea = 0;
  outC->_L1.train_packets.P_139.valid = kcg_true;
  outC->_L1.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.train_packets.P_139.d_reverse = 0;
  outC->_L1.train_packets.P_139.v_reverse = 0;
  for (i11 = 0; i11 < 5; i11++) {
    outC->_L1.train_packets.P_15[i11].valid = kcg_true;
    outC->_L1.train_packets.P_15[i11].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_15[i11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_15[i11].v_loa = 0;
    outC->_L1.train_packets.P_15[i11].t_loa = 0;
    outC->_L1.train_packets.P_15[i11].l_section = 0;
    outC->_L1.train_packets.P_15[i11].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_15[i11].t_sectiontimer_k = 0;
    outC->_L1.train_packets.P_15[i11].d_sectiontimerstoploc_k = 0;
    outC->_L1.train_packets.P_15[i11].l_endsection = 0;
    outC->_L1.train_packets.P_15[i11].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_15[i11].t_sectiontimer = 0;
    outC->_L1.train_packets.P_15[i11].d_sectiontimerstoploc = 0;
    outC->_L1.train_packets.P_15[i11].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1.train_packets.P_15[i11].t_endtimer = 0;
    outC->_L1.train_packets.P_15[i11].d_endtimerstartloc = 0;
    outC->_L1.train_packets.P_15[i11].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1.train_packets.P_15[i11].d_dp = 0;
    outC->_L1.train_packets.P_15[i11].v_releasedp = 0;
    outC->_L1.train_packets.P_15[i11].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1.train_packets.P_15[i11].d_startol = 0;
    outC->_L1.train_packets.P_15[i11].t_ol = 0;
    outC->_L1.train_packets.P_15[i11].d_ol = 0;
    outC->_L1.train_packets.P_15[i11].v_releaseol = 0;
  }
  for (i12 = 0; i12 < 7; i12++) {
    outC->_L1.train_packets.P_21[i12].valid = kcg_true;
    outC->_L1.train_packets.P_21[i12].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_21[i12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_21[i12].d_gradient = 0;
    outC->_L1.train_packets.P_21[i12].q_gdir = Q_GDIR_downhill;
    outC->_L1.train_packets.P_21[i12].g_a = 0;
  }
  outC->_L1.train_packets.P_27.valid = kcg_true;
  outC->_L1.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.train_packets.P_27.d_static = 0;
  outC->_L1.train_packets.P_27.v_static = 0;
  outC->_L1.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i13 = 0; i13 < 7; i13++) {
    outC->_L1.train_packets.P_27.diffArray[i13].valid = kcg_true;
    outC->_L1.train_packets.P_27.diffArray[i13].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1.train_packets.P_27.diffArray[i13].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1.train_packets.P_27.diffArray[i13].nc_diff = 0;
    outC->_L1.train_packets.P_27.diffArray[i13].v_diff = 0;
  }
  for (i15 = 0; i15 < 7; i15++) {
    outC->_L1.train_packets.P_27.SSPArray[i15].valid = kcg_true;
    outC->_L1.train_packets.P_27.SSPArray[i15].d_static = 0;
    outC->_L1.train_packets.P_27.SSPArray[i15].v_static = 0;
    outC->_L1.train_packets.P_27.SSPArray[i15].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i14 = 0; i14 < 7; i14++) {
      outC->_L1.train_packets.P_27.SSPArray[i15].diffArray[i14].valid =
        kcg_true;
      outC->_L1.train_packets.P_27.SSPArray[i15].diffArray[i14].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1.train_packets.P_27.SSPArray[i15].diffArray[i14].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1.train_packets.P_27.SSPArray[i15].diffArray[i14].nc_diff = 0;
      outC->_L1.train_packets.P_27.SSPArray[i15].diffArray[i14].v_diff = 0;
    }
  }
  for (i16 = 0; i16 < 7; i16++) {
    outC->_L1.train_packets.P_41[i16].valid = kcg_true;
    outC->_L1.train_packets.P_41[i16].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_41[i16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_41[i16].d_leveltr = 0;
    outC->_L1.train_packets.P_41[i16].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1.train_packets.P_41[i16].nid_ntc = 0;
    outC->_L1.train_packets.P_41[i16].l_ackleveltr = 0;
  }
  for (i17 = 0; i17 < 7; i17++) {
    outC->_L1.train_packets.P_46[i17].valid = kcg_true;
    outC->_L1.train_packets.P_46[i17].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_46[i17].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1.train_packets.P_46[i17].nid_ntc = 0;
  }
  for (i18 = 0; i18 < 7; i18++) {
    outC->_L1.train_packets.P_63[i18].valid = kcg_true;
    outC->_L1.train_packets.P_63[i18].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_63[i18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.train_packets.P_63[i18].nid_c = 0;
    outC->_L1.train_packets.P_63[i18].nid_bg = 0;
  }
  for (i19 = 0; i19 < 3; i19++) {
    outC->_L1.train_packets.P_80[i19].valid = kcg_true;
    outC->_L1.train_packets.P_80[i19].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_80[i19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_80[i19].d_mamode = 0;
    outC->_L1.train_packets.P_80[i19].m_mamode = M_MAMODE_On_Sight;
    outC->_L1.train_packets.P_80[i19].v_mamode = 0;
    outC->_L1.train_packets.P_80[i19].l_mamode = 0;
    outC->_L1.train_packets.P_80[i19].l_ackmamode = 0;
    outC->_L1.train_packets.P_80[i19].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1.train_packets.LRBG = 0;
  outC->_L1.train_packets.referenceLocation = 0;
  outC->_L1.train_messages.Mess_15 = kcg_true;
  outC->_L1.train_messages.Mess_16 = kcg_true;
  outC->_L1.train_messages.Mess_2 = kcg_true;
  outC->_L1.train_messages.Mess_27 = kcg_true;
  outC->_L1.train_messages.Mess_28 = kcg_true;
  outC->_L1.train_messages.Mess_6 = kcg_true;
  outC->_L1.p12 = kcg_true;
  outC->_L1.p15 = kcg_true;
  outC->_L1.p21 = kcg_true;
  outC->_L1.p27 = kcg_true;
  for (i20 = 0; i20 < 5; i20++) {
    outC->outToML.train_packets.P_12[i20].valid = kcg_true;
    outC->outToML.train_packets.P_12[i20].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_12[i20].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_12[i20].v_main = 0;
    outC->outToML.train_packets.P_12[i20].v_loa = 0;
    outC->outToML.train_packets.P_12[i20].t_loa = 0;
    outC->outToML.train_packets.P_12[i20].l_section = 0;
    outC->outToML.train_packets.P_12[i20].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_12[i20].t_sectiontimer_k = 0;
    outC->outToML.train_packets.P_12[i20].d_sectiontimerstoploc_k = 0;
    outC->outToML.train_packets.P_12[i20].l_endsection = 0;
    outC->outToML.train_packets.P_12[i20].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_12[i20].t_sectiontimer = 0;
    outC->outToML.train_packets.P_12[i20].d_sectiontimerstoploc = 0;
    outC->outToML.train_packets.P_12[i20].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->outToML.train_packets.P_12[i20].t_endtimer = 0;
    outC->outToML.train_packets.P_12[i20].d_endtimerstartloc = 0;
    outC->outToML.train_packets.P_12[i20].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->outToML.train_packets.P_12[i20].d_dp = 0;
    outC->outToML.train_packets.P_12[i20].v_releasedp = 0;
    outC->outToML.train_packets.P_12[i20].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->outToML.train_packets.P_12[i20].d_startol = 0;
    outC->outToML.train_packets.P_12[i20].t_ol = 0;
    outC->outToML.train_packets.P_12[i20].d_ol = 0;
    outC->outToML.train_packets.P_12[i20].v_releaseol = 0;
  }
  outC->outToML.train_packets.P_135.valid = kcg_true;
  outC->outToML.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_137.valid = kcg_true;
  outC->outToML.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->outToML.train_packets.P_138.valid = kcg_true;
  outC->outToML.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->outToML.train_packets.P_138.d_startreverse = 0;
  outC->outToML.train_packets.P_138.l_reversearea = 0;
  outC->outToML.train_packets.P_139.valid = kcg_true;
  outC->outToML.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->outToML.train_packets.P_139.d_reverse = 0;
  outC->outToML.train_packets.P_139.v_reverse = 0;
  for (i21 = 0; i21 < 5; i21++) {
    outC->outToML.train_packets.P_15[i21].valid = kcg_true;
    outC->outToML.train_packets.P_15[i21].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_15[i21].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_15[i21].v_loa = 0;
    outC->outToML.train_packets.P_15[i21].t_loa = 0;
    outC->outToML.train_packets.P_15[i21].l_section = 0;
    outC->outToML.train_packets.P_15[i21].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_15[i21].t_sectiontimer_k = 0;
    outC->outToML.train_packets.P_15[i21].d_sectiontimerstoploc_k = 0;
    outC->outToML.train_packets.P_15[i21].l_endsection = 0;
    outC->outToML.train_packets.P_15[i21].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_15[i21].t_sectiontimer = 0;
    outC->outToML.train_packets.P_15[i21].d_sectiontimerstoploc = 0;
    outC->outToML.train_packets.P_15[i21].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->outToML.train_packets.P_15[i21].t_endtimer = 0;
    outC->outToML.train_packets.P_15[i21].d_endtimerstartloc = 0;
    outC->outToML.train_packets.P_15[i21].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->outToML.train_packets.P_15[i21].d_dp = 0;
    outC->outToML.train_packets.P_15[i21].v_releasedp = 0;
    outC->outToML.train_packets.P_15[i21].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->outToML.train_packets.P_15[i21].d_startol = 0;
    outC->outToML.train_packets.P_15[i21].t_ol = 0;
    outC->outToML.train_packets.P_15[i21].d_ol = 0;
    outC->outToML.train_packets.P_15[i21].v_releaseol = 0;
  }
  for (i22 = 0; i22 < 7; i22++) {
    outC->outToML.train_packets.P_21[i22].valid = kcg_true;
    outC->outToML.train_packets.P_21[i22].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_21[i22].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_21[i22].d_gradient = 0;
    outC->outToML.train_packets.P_21[i22].q_gdir = Q_GDIR_downhill;
    outC->outToML.train_packets.P_21[i22].g_a = 0;
  }
  outC->outToML.train_packets.P_27.valid = kcg_true;
  outC->outToML.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->outToML.train_packets.P_27.d_static = 0;
  outC->outToML.train_packets.P_27.v_static = 0;
  outC->outToML.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i23 = 0; i23 < 7; i23++) {
    outC->outToML.train_packets.P_27.diffArray[i23].valid = kcg_true;
    outC->outToML.train_packets.P_27.diffArray[i23].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->outToML.train_packets.P_27.diffArray[i23].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->outToML.train_packets.P_27.diffArray[i23].nc_diff = 0;
    outC->outToML.train_packets.P_27.diffArray[i23].v_diff = 0;
  }
  for (i25 = 0; i25 < 7; i25++) {
    outC->outToML.train_packets.P_27.SSPArray[i25].valid = kcg_true;
    outC->outToML.train_packets.P_27.SSPArray[i25].d_static = 0;
    outC->outToML.train_packets.P_27.SSPArray[i25].v_static = 0;
    outC->outToML.train_packets.P_27.SSPArray[i25].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i24 = 0; i24 < 7; i24++) {
      outC->outToML.train_packets.P_27.SSPArray[i25].diffArray[i24].valid =
        kcg_true;
      outC->outToML.train_packets.P_27.SSPArray[i25].diffArray[i24].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->outToML.train_packets.P_27.SSPArray[i25].diffArray[i24].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->outToML.train_packets.P_27.SSPArray[i25].diffArray[i24].nc_diff = 0;
      outC->outToML.train_packets.P_27.SSPArray[i25].diffArray[i24].v_diff = 0;
    }
  }
  for (i26 = 0; i26 < 7; i26++) {
    outC->outToML.train_packets.P_41[i26].valid = kcg_true;
    outC->outToML.train_packets.P_41[i26].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_41[i26].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_41[i26].d_leveltr = 0;
    outC->outToML.train_packets.P_41[i26].m_leveltr = M_LEVELTR_Level_0;
    outC->outToML.train_packets.P_41[i26].nid_ntc = 0;
    outC->outToML.train_packets.P_41[i26].l_ackleveltr = 0;
  }
  for (i27 = 0; i27 < 7; i27++) {
    outC->outToML.train_packets.P_46[i27].valid = kcg_true;
    outC->outToML.train_packets.P_46[i27].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_46[i27].m_leveltr = M_LEVELTR_Level_0;
    outC->outToML.train_packets.P_46[i27].nid_ntc = 0;
  }
  for (i28 = 0; i28 < 7; i28++) {
    outC->outToML.train_packets.P_63[i28].valid = kcg_true;
    outC->outToML.train_packets.P_63[i28].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_63[i28].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->outToML.train_packets.P_63[i28].nid_c = 0;
    outC->outToML.train_packets.P_63[i28].nid_bg = 0;
  }
  for (i29 = 0; i29 < 3; i29++) {
    outC->outToML.train_packets.P_80[i29].valid = kcg_true;
    outC->outToML.train_packets.P_80[i29].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_80[i29].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_80[i29].d_mamode = 0;
    outC->outToML.train_packets.P_80[i29].m_mamode = M_MAMODE_On_Sight;
    outC->outToML.train_packets.P_80[i29].v_mamode = 0;
    outC->outToML.train_packets.P_80[i29].l_mamode = 0;
    outC->outToML.train_packets.P_80[i29].l_ackmamode = 0;
    outC->outToML.train_packets.P_80[i29].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->outToML.train_packets.LRBG = 0;
  outC->outToML.train_packets.referenceLocation = 0;
  outC->outToML.train_messages.Mess_15 = kcg_true;
  outC->outToML.train_messages.Mess_16 = kcg_true;
  outC->outToML.train_messages.Mess_2 = kcg_true;
  outC->outToML.train_messages.Mess_27 = kcg_true;
  outC->outToML.train_messages.Mess_28 = kcg_true;
  outC->outToML.train_messages.Mess_6 = kcg_true;
  outC->outToML.p12 = kcg_true;
  outC->outToML.p15 = kcg_true;
  outC->outToML.p21 = kcg_true;
  outC->outToML.p27 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void patchEmergencyBrakeMsg_reset_EVC_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_Support_Pkg::patchEmergencyBrakeMsg */
void patchEmergencyBrakeMsg_EVC_Support_Pkg(
  /* EVC_Support_Pkg::patchEmergencyBrakeMsg::inFromTA */ DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  outC_patchEmergencyBrakeMsg_EVC_Support_Pkg *outC)
{
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L1, inFromTA);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L2,
    &outC->_L1.train_messages);
  outC->_L4 = kcg_false;
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    &outC->_L2);
  if (kcg_true) {
    outC->_L3.Mess_15 = outC->_L4;
  }
  outC->_L6 = kcg_false;
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L5,
    &outC->_L3);
  if (kcg_true) {
    outC->_L5.Mess_15 = outC->_L6;
  }
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L8, &outC->_L1);
  if (kcg_true) {
    kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
      &outC->_L8.train_messages,
      &outC->_L5);
  }
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->outToML, &outC->_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** patchEmergencyBrakeMsg_EVC_Support_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

