/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlasETCS_TrackAtlas.h"

#ifndef KCG_USER_DEFINED_INIT
void TrackAtlasETCS_init_TrackAtlas(outC_TrackAtlasETCS_TrackAtlas *outC)
{
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
  
  outC->init = kcg_true;
  outC->_L94 = 0;
  outC->trip_train = kcg_true;
  outC->ces_revoked = kcg_true;
  outC->ces_accepted = kcg_true;
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = 0;
  outC->message147.header.t_train = 0;
  outC->message147.header.nid_engine = 0;
  outC->message147.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message147.header.xT_TRAIN = 0;
  outC->message147.header.xNID_EM = 0;
  outC->message147.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message147.header.xNID_TEXTMESSAGE = 0;
  outC->message147.packets.p0.valid = kcg_true;
  outC->message147.packets.p0.packet0.NID_PACKET = 0;
  outC->message147.packets.p0.packet0.L_PACKET = 0;
  outC->message147.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p0.packet0.NID_LRBG = 0;
  outC->message147.packets.p0.packet0.D_LRBG = 0;
  outC->message147.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->message147.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->message147.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p0.packet0.L_TRAININT = 0;
  outC->message147.packets.p0.packet0.V_TRAIN = 0;
  outC->message147.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message147.packets.p0.packet0.NID_NTC = 0;
  outC->message147.packets.p1.valid = kcg_true;
  outC->message147.packets.p1.packet1.NID_PACKET = 0;
  outC->message147.packets.p1.packet1.L_PACKET = 0;
  outC->message147.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p1.packet1.NID_LRBG = 0;
  outC->message147.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->message147.packets.p1.packet1.D_LRBG = 0;
  outC->message147.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->message147.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->message147.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p1.packet1.L_TRAININT = 0;
  outC->message147.packets.p1.packet1.V_TRAIN = 0;
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = 0;
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->message147.packets.p3.aNID_RADIO[i1].valid = kcg_true;
    for (i = 0; i < 15; i++) {
      outC->message147.packets.p3.aNID_RADIO[i1].telephoneNumber[i] = 0;
    }
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = 0;
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = 0;
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message147.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message147.packets.p11.l_train = 0;
  outC->message147.packets.p11.v_maxtrain = 0;
  outC->message147.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = 0;
  outC->message147.packets.p11.nIter_tractionIdentity = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->message147.packets.p11.tractionIdentity[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[i2].nid_ctraction = 0;
  }
  outC->message147.packets.p11.nIter_ntc = 0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->message147.packets.p11.nid_ntc[i3] = 0;
  }
  for (i5 = 0; i5 < 5; i5++) {
    outC->bus_out[i5].Message.valid = kcg_true;
    outC->bus_out[i5].Message.nid_message = 0;
    outC->bus_out[i5].Message.l_message = 0;
    outC->bus_out[i5].Message.t_train = 0;
    outC->bus_out[i5].Message.nid_engine = 0;
    outC->bus_out[i5].Message.field1 = 0;
    outC->bus_out[i5].Message.field2 = 0;
    outC->bus_out[i5].Message.field3 = 0;
    for (i4 = 0; i4 < 50; i4++) {
      outC->bus_out[i5].OptionalPackets[i4] = 0;
    }
  }
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.Level = MA_L1_TrackAtlasTypes;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.v_main = 0;
  outC->MA_onboard_out.v_loa = 0;
  outC->MA_onboard_out.t_loa_unlimited = kcg_true;
  outC->MA_onboard_out.t_loa = 0;
  outC->MA_onboard_out.n_iter = 0;
  for (i6 = 0; i6 < 10; i6++) {
    outC->MA_onboard_out.sections[i6].valid = kcg_true;
    outC->MA_onboard_out.sections[i6].q_endsection = kcg_true;
    outC->MA_onboard_out.sections[i6].l_section = 0;
    outC->MA_onboard_out.sections[i6].q_sectiontimer = kcg_true;
    outC->MA_onboard_out.sections[i6].t_sectiontimer = 0;
    outC->MA_onboard_out.sections[i6].d_sectiontimerstoploc = 0;
  }
  outC->MA_onboard_out.q_dangerpoint = kcg_true;
  outC->MA_onboard_out.dangerpoint.d_DP_or_OL = 0;
  outC->MA_onboard_out.dangerpoint.v_release = 0;
  outC->MA_onboard_out.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_overlap = kcg_true;
  outC->MA_onboard_out.overlap.d_DP_or_OL = 0;
  outC->MA_onboard_out.overlap.v_release = 0;
  outC->MA_onboard_out.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_endtimer = kcg_true;
  outC->MA_onboard_out.endtimer_t.t_endtimer = 0;
  outC->MA_onboard_out.endtimer_t.d_endtimerstoploc = 0;
  outC->to_Supervision.freshMA = kcg_true;
  outC->to_Supervision.MA.valid = kcg_true;
  outC->to_Supervision.MA.Level = MA_L1_TrackAtlasTypes;
  outC->to_Supervision.MA.q_dir = Q_DIR_Reverse;
  outC->to_Supervision.MA.v_main = 0;
  outC->to_Supervision.MA.v_loa = 0;
  outC->to_Supervision.MA.t_loa_unlimited = kcg_true;
  outC->to_Supervision.MA.t_loa = 0;
  outC->to_Supervision.MA.n_iter = 0;
  for (i7 = 0; i7 < 10; i7++) {
    outC->to_Supervision.MA.sections[i7].valid = kcg_true;
    outC->to_Supervision.MA.sections[i7].q_endsection = kcg_true;
    outC->to_Supervision.MA.sections[i7].l_section = 0;
    outC->to_Supervision.MA.sections[i7].q_sectiontimer = kcg_true;
    outC->to_Supervision.MA.sections[i7].t_sectiontimer = 0;
    outC->to_Supervision.MA.sections[i7].d_sectiontimerstoploc = 0;
  }
  outC->to_Supervision.MA.q_dangerpoint = kcg_true;
  outC->to_Supervision.MA.dangerpoint.d_DP_or_OL = 0;
  outC->to_Supervision.MA.dangerpoint.v_release = 0;
  outC->to_Supervision.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->to_Supervision.MA.q_overlap = kcg_true;
  outC->to_Supervision.MA.overlap.d_DP_or_OL = 0;
  outC->to_Supervision.MA.overlap.v_release = 0;
  outC->to_Supervision.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->to_Supervision.MA.q_endtimer = kcg_true;
  outC->to_Supervision.MA.endtimer_t.t_endtimer = 0;
  outC->to_Supervision.MA.endtimer_t.d_endtimerstoploc = 0;
  outC->to_Supervision.freshGradientProfile = kcg_true;
  for (i8 = 0; i8 < 50; i8++) {
    outC->to_Supervision.GradientProfile[i8].valid = kcg_true;
    outC->to_Supervision.GradientProfile[i8].Loc_Absolute = 0;
    outC->to_Supervision.GradientProfile[i8].Loc_LRBG = 0;
    outC->to_Supervision.GradientProfile[i8].Gradient = 0;
    outC->to_Supervision.GradientProfile[i8].L_Gradient = 0;
  }
  outC->to_Supervision.freshMRSP = kcg_true;
  for (i9 = 0; i9 < 110; i9++) {
    outC->to_Supervision.MRSP[i9].valid = kcg_true;
    outC->to_Supervision.MRSP[i9].Loc_Abs = 0;
    outC->to_Supervision.MRSP[i9].Loc_LRBG = 0;
    outC->to_Supervision.MRSP[i9].MRS = 0;
  }
  for (i10 = 0; i10 < 50; i10++) {
    outC->to_DMI.GradientProfile[i10].valid = kcg_true;
    outC->to_DMI.GradientProfile[i10].begin_section = 0;
    outC->to_DMI.GradientProfile[i10].end_section = 0;
    outC->to_DMI.GradientProfile[i10].gradient = 0;
  }
  outC->to_DMI.Gradient_profile_updated = kcg_true;
  for (i11 = 0; i11 < 110; i11++) {
    outC->to_DMI.MRSP[i11].valid = kcg_true;
    outC->to_DMI.MRSP[i11].Loc_Abs = 0;
    outC->to_DMI.MRSP[i11].Loc_LRBG = 0;
    outC->to_DMI.MRSP[i11].MRS = 0;
  }
  outC->to_DMI.MRSP_updated = kcg_true;
  for (i12 = 0; i12 < 5; i12++) {
    outC->To_ModeAndLevel.train_packets.P_12[i12].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_12[i12].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_12[i12].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_12[i12].v_main = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i12].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i12].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i12].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_12[i12].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_12[i12].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i12].v_releaseol = 0;
  }
  outC->To_ModeAndLevel.train_packets.P_135.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_137.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->To_ModeAndLevel.train_packets.P_138.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_138.d_startreverse = 0;
  outC->To_ModeAndLevel.train_packets.P_138.l_reversearea = 0;
  outC->To_ModeAndLevel.train_packets.P_139.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_139.d_reverse = 0;
  outC->To_ModeAndLevel.train_packets.P_139.v_reverse = 0;
  for (i13 = 0; i13 < 5; i13++) {
    outC->To_ModeAndLevel.train_packets.P_15[i13].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_15[i13].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_15[i13].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_15[i13].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i13].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i13].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i13].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_15[i13].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_15[i13].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i13].v_releaseol = 0;
  }
  for (i14 = 0; i14 < 7; i14++) {
    outC->To_ModeAndLevel.train_packets.P_21[i14].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_21[i14].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_21[i14].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_21[i14].d_gradient = 0;
    outC->To_ModeAndLevel.train_packets.P_21[i14].q_gdir = Q_GDIR_downhill;
    outC->To_ModeAndLevel.train_packets.P_21[i14].g_a = 0;
  }
  outC->To_ModeAndLevel.train_packets.P_27.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_27.d_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.v_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i15 = 0; i15 < 7; i15++) {
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i15].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i15].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i15].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i15].nc_diff = 0;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i15].v_diff = 0;
  }
  for (i17 = 0; i17 < 7; i17++) {
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].d_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].v_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i16 = 0; i16 < 7; i16++) {
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].diffArray[i16].valid =
        kcg_true;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].diffArray[i16].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].diffArray[i16].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].diffArray[i16].nc_diff =
        0;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i17].diffArray[i16].v_diff =
        0;
    }
  }
  for (i18 = 0; i18 < 7; i18++) {
    outC->To_ModeAndLevel.train_packets.P_41[i18].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_41[i18].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_41[i18].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_41[i18].d_leveltr = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i18].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_41[i18].nid_ntc = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i18].l_ackleveltr = 0;
  }
  for (i19 = 0; i19 < 7; i19++) {
    outC->To_ModeAndLevel.train_packets.P_46[i19].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_46[i19].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_46[i19].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_46[i19].nid_ntc = 0;
  }
  for (i20 = 0; i20 < 7; i20++) {
    outC->To_ModeAndLevel.train_packets.P_63[i20].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_63[i20].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_63[i20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->To_ModeAndLevel.train_packets.P_63[i20].nid_c = 0;
    outC->To_ModeAndLevel.train_packets.P_63[i20].nid_bg = 0;
  }
  for (i21 = 0; i21 < 3; i21++) {
    outC->To_ModeAndLevel.train_packets.P_80[i21].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_80[i21].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_80[i21].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_80[i21].d_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i21].m_mamode = M_MAMODE_On_Sight;
    outC->To_ModeAndLevel.train_packets.P_80[i21].v_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i21].l_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i21].l_ackmamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i21].q_mamode =
      Q_MAMODE_as_the_EOA;
  }
  outC->To_ModeAndLevel.train_packets.LRBG = 0;
  outC->To_ModeAndLevel.train_packets.referenceLocation = 0;
  outC->To_ModeAndLevel.train_messages.Mess_15 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_16 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_2 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_27 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_28 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_6 = kcg_true;
  outC->To_ModeAndLevel.p12 = kcg_true;
  outC->To_ModeAndLevel.p15 = kcg_true;
  outC->To_ModeAndLevel.p21 = kcg_true;
  outC->To_ModeAndLevel.p27 = kcg_true;
  outC->NV_raw_out.valid = kcg_true;
  outC->NV_raw_out.nid_packet = 0;
  outC->NV_raw_out.q_dir = Q_DIR_Reverse;
  outC->NV_raw_out.q_scale = Q_SCALE_10_cm_scale;
  outC->NV_raw_out.d_validnv = 0;
  outC->NV_raw_out.nid_c = 0;
  outC->NV_raw_out.n_iter_nid_c = 0;
  for (i22 = 0; i22 < 32; i22++) {
    outC->NV_raw_out.nid_c_list[i22].valid = kcg_true;
    outC->NV_raw_out.nid_c_list[i22].nid_c = 0;
  }
  outC->NV_raw_out.v_nvshunt = 0;
  outC->NV_raw_out.v_nvstff = 0;
  outC->NV_raw_out.v_nvonsight = 0;
  outC->NV_raw_out.v_nvlimsuperv = 0;
  outC->NV_raw_out.v_nvunfit = 0;
  outC->NV_raw_out.v_nvrel = 0;
  outC->NV_raw_out.d_nvroll = 0;
  outC->NV_raw_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->NV_raw_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->NV_raw_out.q_nvguiperm = Q_NVGUIPERM_No;
  outC->NV_raw_out.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->NV_raw_out.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->NV_raw_out.v_nvallowovtrp = 0;
  outC->NV_raw_out.v_nvsupovtrp = 0;
  outC->NV_raw_out.d_nvovtrp = 0;
  outC->NV_raw_out.t_nvovtrp = 0;
  outC->NV_raw_out.d_nvpotrp = 0;
  outC->NV_raw_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->NV_raw_out.t_nvcontact = 0;
  outC->NV_raw_out.m_nvderun = M_NVDERUN_No;
  outC->NV_raw_out.d_nvstff = 0;
  outC->NV_raw_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->NV_raw_out.a_nvmaxredadh1 = 0.0;
  outC->NV_raw_out.a_nvmaxredadh2 = 0.0;
  outC->NV_raw_out.a_nvmaxredadh3 = 0.0;
  outC->NV_raw_out.q_nvlocacc = 0;
  outC->NV_raw_out.m_nvavadh = 0.0;
  outC->NV_raw_out.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->NV_raw_out.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->NV_raw_out.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->NV_raw_out.a_nvp12 = 0.0;
  outC->NV_raw_out.a_nvp23 = 0.0;
  outC->NV_raw_out.v_nvkvint = 0;
  outC->NV_raw_out.m_nvkvint_12 = 0.0;
  outC->NV_raw_out.m_nvkvint_23 = 0.0;
  outC->NV_raw_out.n_iter_n = 0;
  for (i23 = 0; i23 < 32; i23++) {
    outC->NV_raw_out.n_iter_n_list[i23].valid = kcg_true;
    outC->NV_raw_out.n_iter_n_list[i23].v_nvkvint_n = 0;
    outC->NV_raw_out.n_iter_n_list[i23].m_nvkvint_n_12 = 0.0;
    outC->NV_raw_out.n_iter_n_list[i23].m_nvkvint_n_23 = 0.0;
  }
  outC->NV_raw_out.n_iter_k = 0;
  for (i25 = 0; i25 < 32; i25++) {
    outC->NV_raw_out.n_iter_k_list[i25].valid = kcg_true;
    outC->NV_raw_out.n_iter_k_list[i25].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->NV_raw_out.n_iter_k_list[i25].a_nvp12_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i25].a_nvp23_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i25].v_nvkvint_k = 0;
    outC->NV_raw_out.n_iter_k_list[i25].m_nvkvint_k_12 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i25].m_nvkvint_k_23 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i25].n_iter_k_m = 0;
    for (i24 = 0; i24 < 32; i24++) {
      outC->NV_raw_out.n_iter_k_list[i25].n_iter_k_m_list[i24].valid = kcg_true;
      outC->NV_raw_out.n_iter_k_list[i25].n_iter_k_m_list[i24].v_nvkvint_k_m =
        0;
      outC->NV_raw_out.n_iter_k_list[i25].n_iter_k_m_list[i24].m_nvkvint_km_12 =
        0.0;
      outC->NV_raw_out.n_iter_k_list[i25].n_iter_k_m_list[i24].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->NV_raw_out.l_nvkrint = L_NVKRINT_0m;
  outC->NV_raw_out.m_nvkrint = 0.0;
  outC->NV_raw_out.n_iter_l = 0;
  for (i26 = 0; i26 < 32; i26++) {
    outC->NV_raw_out.n_iter_l_list[i26].valid = kcg_true;
    outC->NV_raw_out.n_iter_l_list[i26].l_nvkrint_l = L_NVKRINT_0m;
    outC->NV_raw_out.n_iter_l_list[i26].m_nvkrint_l = 0.0;
  }
  outC->NV_raw_out.m_nvktint = 0.0;
  outC->SSP_available = kcg_true;
  /* 1 */ Manage_MA_Request_init_TA_MA_Request(&outC->_4_Context_1);
  /* 1 */ Build_GradientProfile_init_TA_Gradient(&outC->_3_Context_1);
  /* 1 */ Build_MRSP_init_TA_MRSP(&outC->_2_Context_1);
  /* 6 */ Build_MA_L23_init_TA_MA(&outC->Context_6);
  /* 1 */ Manage_EmergencyStop_init_TA_EmergencyStop(&outC->_1_Context_1);
  /* 1 */ StoreRaw_NV_init_TA_Storage(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackAtlasETCS_reset_TrackAtlas(outC_TrackAtlasETCS_TrackAtlas *outC)
{
  outC->init = kcg_true;
  /* 1 */ Manage_MA_Request_reset_TA_MA_Request(&outC->_4_Context_1);
  /* 1 */ Build_GradientProfile_reset_TA_Gradient(&outC->_3_Context_1);
  /* 1 */ Build_MRSP_reset_TA_MRSP(&outC->_2_Context_1);
  /* 6 */ Build_MA_L23_reset_TA_MA(&outC->Context_6);
  /* 1 */ Manage_EmergencyStop_reset_TA_EmergencyStop(&outC->_1_Context_1);
  /* 1 */ StoreRaw_NV_reset_TA_Storage(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TrackAtlas::TrackAtlasETCS */
void TrackAtlasETCS_TrackAtlas(
  /* TrackAtlas::TrackAtlasETCS::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlasETCS::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlasETCS::TrainData_in */ FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlasETCS::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlasETCS::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TrackAtlas::TrackAtlasETCS::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlasETCS::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlasETCS::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlasETCS::fromDriverToMA_R */ Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlasETCS::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlasETCS::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlasETCS::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlasETCS::t_train */ T_TRAIN t_train,
  /* TrackAtlas::TrackAtlasETCS::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* TrackAtlas::TrackAtlasETCS::P203V1_onboard */ P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlasETCS::PermanentDataP003 */ P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_TrackAtlasETCS_TrackAtlas *outC)
{
  static kcg_int i1;
  /* TrackAtlas::TrackAtlasETCS */
  static MRSP_Profile_t_TrackAtlasTypes acc;
  /* TrackAtlas::TrackAtlasETCS */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_bool noname;
  static kcg_bool _2_noname;
  static FromTIU_t_TrackAtlasTypes _3_noname;
  static MRSP_Profile_t_TrackAtlasTypes _4_noname;
  static kcg_int _5_noname;
  /* TrackAtlas::TrackAtlasETCS::MovementAuthority_Local */
  static MovementAuthority_t_TrackAtlasTypes MovementAuthority_Local;
  /* TrackAtlas::TrackAtlasETCS::valid_MA */
  static kcg_bool valid_MA;
  /* TrackAtlas::TrackAtlasETCS::valid_SSP */
  static kcg_bool valid_SSP;
  /* TrackAtlas::TrackAtlasETCS::valid_GP */
  static kcg_bool valid_GP;
  /* TrackAtlas::TrackAtlasETCS::SSP */
  static StaticSpeedProfile_t_TrackAtlasTypes SSP;
  /* TrackAtlas::TrackAtlasETCS::MRSP_export */
  static MRSP_Profile_t_TrackAtlasTypes MRSP_export;
  /* TrackAtlas::TrackAtlasETCS::MRSP_to_DMI */
  static MRSP_Profile_t_TrackAtlasTypes MRSP_to_DMI;
  /* TrackAtlas::TrackAtlasETCS::bus1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus bus1;
  /* TrackAtlas::TrackAtlasETCS::EoA */
  static L_internal_Type_Obu_BasicTypes_Pkg EoA;
  /* TrackAtlas::TrackAtlasETCS::_L17 */
  static kcg_bool _L17;
  /* TrackAtlas::TrackAtlasETCS::_L16 */
  static kcg_bool _L16;
  /* TrackAtlas::TrackAtlasETCS::_L19 */
  static MRSP_Profile_t_TrackAtlasTypes _L19;
  /* TrackAtlas::TrackAtlasETCS::_L22 */
  static kcg_bool _L22;
  /* TrackAtlas::TrackAtlasETCS::_L21 */
  static P003V1_OBU_T_TM_baseline2 _L21;
  /* TrackAtlas::TrackAtlasETCS::_L20 */
  static kcg_bool _L20;
  /* TrackAtlas::TrackAtlasETCS::_L23 */
  static ReceivedMessage_T_Common_Types_Pkg _L23;
  /* TrackAtlas::TrackAtlasETCS::_L24 */
  static ReceivedMessage_T_Common_Types_Pkg _L24;
  /* TrackAtlas::TrackAtlasETCS::_L25 */
  static trainPosition_T_TrainPosition_Types_Pck _L25;
  /* TrackAtlas::TrackAtlasETCS::_L26 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L26;
  /* TrackAtlas::TrackAtlasETCS::_L27 */
  static FromTIU_t_TrackAtlasTypes _L27;
  /* TrackAtlas::TrackAtlasETCS::_L31 */
  static GradientProfile_for_DMI_t_TrackAtlasTypes _L31;
  /* TrackAtlas::TrackAtlasETCS::_L32 */
  static kcg_bool _L32;
  /* TrackAtlas::TrackAtlasETCS::_L34 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L34;
  /* TrackAtlas::TrackAtlasETCS::_L35 */
  static DataForDMI_t_TrackAtlasTypes _L35;
  /* TrackAtlas::TrackAtlasETCS::_L50 */
  static P003_OBU_T_TM _L50;
  /* TrackAtlas::TrackAtlasETCS::_L51 */
  static P203V1_OBU_T_TM_baseline2 _L51;
  /* TrackAtlas::TrackAtlasETCS::_L52 */
  static P003_permanent_data_T_TM_baseline2 _L52;
  /* TrackAtlas::TrackAtlasETCS::_L73 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L73;
  /* TrackAtlas::TrackAtlasETCS::_L72 */
  static kcg_bool _L72;
  /* TrackAtlas::TrackAtlasETCS::_L71 */
  static trainProperties_T_TrainPosition_Types_Pck _L71;
  /* TrackAtlas::TrackAtlasETCS::_L70 */
  static Driver2MAR_T_MA_Request _L70;
  /* TrackAtlas::TrackAtlasETCS::_L69 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L69;
  /* TrackAtlas::TrackAtlasETCS::_L68 */
  static odometry_T_Obu_BasicTypes_Pkg _L68;
  /* TrackAtlas::TrackAtlasETCS::_L66 */
  static T_TRAIN _L66;
  /* TrackAtlas::TrackAtlasETCS::_L65 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L65;
  /* TrackAtlas::TrackAtlasETCS::_L64 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L64;
  /* TrackAtlas::TrackAtlasETCS::_L75 */
  static ReceivedMessage_T_Common_Types_Pkg _L75;
  /* TrackAtlas::TrackAtlasETCS::_L74 */
  static trainPosition_T_TrainPosition_Types_Pck _L74;
  /* TrackAtlas::TrackAtlasETCS::_L76 */
  static MovementAuthority_t_TrackAtlasTypes _L76;
  /* TrackAtlas::TrackAtlasETCS::_L78 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L78;
  /* TrackAtlas::TrackAtlasETCS::_L77 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L77;
  /* TrackAtlas::TrackAtlasETCS::_L79 */
  static ReceivedMessage_T_Common_Types_Pkg _L79;
  /* TrackAtlas::TrackAtlasETCS::_L80 */
  static kcg_bool _L80;
  /* TrackAtlas::TrackAtlasETCS::_L82 */
  static kcg_bool _L82;
  /* TrackAtlas::TrackAtlasETCS::_L83 */
  static kcg_bool _L83;
  /* TrackAtlas::TrackAtlasETCS::_L84 */
  static kcg_bool _L84;
  /* TrackAtlas::TrackAtlasETCS::_L85 */
  static kcg_bool _L85;
  /* TrackAtlas::TrackAtlasETCS::_L86 */
  static DataForModeAndLevel_t_TrackAtlasTypes _L86;
  /* TrackAtlas::TrackAtlasETCS::_L93 */
  static kcg_bool _L93;
  /* TrackAtlas::TrackAtlasETCS::_L92 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L92;
  /* TrackAtlas::TrackAtlasETCS::_L91 */
  static kcg_bool _L91;
  /* TrackAtlas::TrackAtlasETCS::_L90 */
  static kcg_bool _L90;
  /* TrackAtlas::TrackAtlasETCS::_L89 */
  static kcg_bool _L89;
  /* TrackAtlas::TrackAtlasETCS::_L88 */
  static Radio_TrainTrack_Message_T_TM_transitional _L88;
  /* TrackAtlas::TrackAtlasETCS::_L87 */
  static kcg_bool _L87;
  /* TrackAtlas::TrackAtlasETCS::_L95 */
  static T_TRAIN _L95;
  /* TrackAtlas::TrackAtlasETCS::_L96 */
  static trainProperties_T_TrainPosition_Types_Pck _L96;
  /* TrackAtlas::TrackAtlasETCS::_L97 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L97;
  /* TrackAtlas::TrackAtlasETCS::_L98 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L98;
  /* TrackAtlas::TrackAtlasETCS::_L99 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L99;
  /* TrackAtlas::TrackAtlasETCS::_L100 */
  static kcg_bool _L100;
  /* TrackAtlas::TrackAtlasETCS::_L103 */
  static kcg_bool _L103;
  /* TrackAtlas::TrackAtlasETCS::_L102 */
  static kcg_bool _L102;
  /* TrackAtlas::TrackAtlasETCS::_L101 */
  static GradientProfile_t_TrackAtlasTypes _L101;
  /* TrackAtlas::TrackAtlasETCS::_L104 */
  static kcg_bool _L104;
  /* TrackAtlas::TrackAtlasETCS::_L105 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L105;
  /* TrackAtlas::TrackAtlasETCS::_L111 */
  static MRSP_Profile_t_TrackAtlasTypes _L111;
  /* TrackAtlas::TrackAtlasETCS::_L112 */
  static kcg_bool _L112;
  /* TrackAtlas::TrackAtlasETCS::_L113 */
  static kcg_bool _L113;
  /* TrackAtlas::TrackAtlasETCS::_L114 */
  static kcg_bool _L114;
  /* TrackAtlas::TrackAtlasETCS::_L115 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L115;
  /* TrackAtlas::TrackAtlasETCS::_L120 */
  static MRSP_Profile_t_TrackAtlasTypes _L120;
  /* TrackAtlas::TrackAtlasETCS::_L121 */
  static kcg_bool _L121;
  /* TrackAtlas::TrackAtlasETCS::_L122 */
  static array_170789 _L122;
  /* TrackAtlas::TrackAtlasETCS::_L123 */
  static FromTIU_t_TrackAtlasTypes _L123;
  /* TrackAtlas::TrackAtlasETCS::_L30 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L30;
  /* TrackAtlas::TrackAtlasETCS::_L119 */
  static MRSP_Profile_t_TrackAtlasTypes _L119;
  /* TrackAtlas::TrackAtlasETCS::_L118 */
  static kcg_int _L118;
  /* TrackAtlas::TrackAtlasETCS::_L129 */
  static MRSP_Profile_t_TrackAtlasTypes _L129;
  /* TrackAtlas::TrackAtlasETCS::_L131 */
  static MRSP_Profile_t_TrackAtlasTypes _L131;
  /* TrackAtlas::TrackAtlasETCS::_L134 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L134;
  /* TrackAtlas::TrackAtlasETCS::_L137 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L137;
  /* TrackAtlas::TrackAtlasETCS::_L139 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L139;
  /* TrackAtlas::TrackAtlasETCS::_L67 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L67;
  /* TrackAtlas::TrackAtlasETCS::_L140 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L140;
  /* TrackAtlas::TrackAtlasETCS::_L142 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L142;
  /* TrackAtlas::TrackAtlasETCS::_L150 */
  static MRSP_Profile_t_TrackAtlasTypes _L150;
  /* TrackAtlas::TrackAtlasETCS::_L151 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L151;
  
  /* fby_1_init_1 */ if (outC->init) {
    _L99 = 0;
  }
  else {
    _L99 = outC->_L94;
  }
  _L104 = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L24, MessageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L23, MessageIn);
  /* 1 */ StoreRaw_NV_TA_Storage(&_L23, &outC->Context_1);
  _L20 = outC->Context_1.vald_NV;
  _L22 = outC->Context_1.new_NV;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L21, &outC->Context_1.NV_onboard_out);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L25, TrainPositionIn);
  _L95 = t_train;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L96, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L97, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L98, packet1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L137, bus_in);
  /* 1 */
  Manage_EmergencyStop_TA_EmergencyStop(
    &_L24,
    _L95,
    &_L96,
    &_L97,
    &_L98,
    &_L25,
    _L99,
    &_L137,
    &outC->_1_Context_1);
  _L87 = outC->_1_Context_1.rejectNewMA;
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &_L88,
    &outC->_1_Context_1.message147);
  _L89 = outC->_1_Context_1.tripTrain;
  _L90 = outC->_1_Context_1.cesAccepted;
  _L91 = outC->_1_Context_1.updateEOA;
  _L92 = outC->_1_Context_1.newEOA;
  _L93 = outC->_1_Context_1.cesRevoked;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L134,
    &outC->_1_Context_1.bus_out);
  /* 6 */
  Build_MA_L23_TA_MA(
    _L104,
    &_L24,
    &_L21,
    &_L25,
    _L87,
    _L91,
    _L92,
    &outC->Context_6);
  _L16 = outC->Context_6.updated;
  _L17 = outC->Context_6.available;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &MovementAuthority_Local,
    &outC->Context_6.MA_absolute);
  outC->_L94 = outC->Context_6.currentEOA;
  _L123 = TrainData_in;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L26, ModeAndLevel_in);
  _L30 = train_length;
  /* 1 */
  Build_MRSP_TA_MRSP(&_L24, _L123, &_L26, _L30, &_L25, &outC->_2_Context_1);
  _L32 = outC->_2_Context_1.newMRSP;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L19, &outC->_2_Context_1.MRSP);
  _L100 = outC->_2_Context_1.SSP_available;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &_L105,
    &outC->_2_Context_1.SSP);
  noname = _L20;
  _2_noname = _L22;
  _L27 = TrainData_in;
  _3_noname = _L27;
  EoA = outC->_L94;
  _L142 = EoA;
  /* 1 */
  Build_GradientProfile_TA_Gradient(_L104, &_L24, &_L25, &outC->_3_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L101, &outC->_3_Context_1.GP);
  _L102 = outC->_3_Context_1.updated;
  _L103 = outC->_3_Context_1.available;
  /* 1 */ GradientProfile_to_DMI_TA_Export(_L142, &_L101, &_L31);
  _L151 = EoA;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &_L120,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&SSP, &_L105);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L115, &SSP);
  /* pow */ for (i1 = 0; i1 < 110; i1++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L122[i1], &_L115);
  }
  _L121 = kcg_true;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L119, &_L120);
  /* 1 */ if (_L121) {
    /* 1 */ for (i = 0; i < 110; i++) {
      kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&acc, &_L119);
      /* 1 */ SSP_to_MRSP_TA_Export(i, &acc, &_L122[i], &cond_iterw, &_L119);
      _L118 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L118 = 0;
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&MRSP_export, &_L119);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L129, &MRSP_export);
  /* 1 */ MRSP_to_DMI_TA_Export(_L151, &_L129, &_L150);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&MRSP_to_DMI, &_L150);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L131, &MRSP_to_DMI);
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &_L35.GradientProfile,
    &_L31);
  _L35.Gradient_profile_updated = _L102;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L35.MRSP, &_L131);
  _L35.MRSP_updated = _L32;
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &_L35);
  kcg_copy_P203V1_OBU_T_TM_baseline2(&_L51, P203V1_onboard);
  kcg_copy_P003_permanent_data_T_TM_baseline2(&_L52, PermanentDataP003);
  /* 1 */
  C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(&_L21, &_L51, &_L52, &_L50);
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &_L50);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &MovementAuthority_Local);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L111, &MRSP_export);
  _L34.freshMA = _L16;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &_L34.MA,
    &MovementAuthority_Local);
  _L34.freshGradientProfile = _L102;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L34.GradientProfile, &_L101);
  _L34.freshMRSP = _L32;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L34.MRSP, &_L111);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &_L34);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L79, MessageIn);
  _L80 = kcg_false;
  valid_GP = _L103;
  _L112 = valid_GP;
  valid_MA = _L17;
  _L113 = valid_MA;
  valid_SSP = _L100;
  _L114 = valid_SSP;
  /* 1 */
  TA_to_ML_TA_Export(
    &_L79,
    _L80,
    _L112,
    _L113,
    _L114,
    &_L77,
    &_L78,
    &_L85,
    &_L84,
    &_L83,
    &_L82);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L86.train_packets,
    &_L77);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &_L86.train_messages,
    &_L78);
  _L86.p12 = _L85;
  _L86.p15 = _L84;
  _L86.p21 = _L83;
  _L86.p27 = _L82;
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->To_ModeAndLevel, &_L86);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L64, packet0);
  _L65 = preindicationLocation;
  _L66 = t_train;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L68, odometry);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L69, packet1);
  kcg_copy_Driver2MAR_T_MA_Request(&_L70, fromDriverToMA_R);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L71, trainProps);
  _L72 = kcg_false;
  _L73 = SystemTime;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L74, TrainPositionIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L75, MessageIn);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L76, &MovementAuthority_Local);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&outC->message147, &_L88);
  outC->ces_accepted = _L90;
  outC->ces_revoked = _L93;
  outC->trip_train = _L89;
  outC->SSP_available = _L100;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_4_noname, &_L19);
  _5_noname = _L118;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&bus1, &_L134);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L139, &bus1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L140, ModeAndLevel_in);
  /* 1 */
  Manage_MA_Request_TA_MA_Request(
    &_L74,
    _L73,
    &_L75,
    _L65,
    &_L68,
    &_L76,
    &_L70,
    _L72,
    &_L71,
    &_L64,
    &_L69,
    _L66,
    &_L139,
    &_L140,
    &outC->_4_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L67,
    &outC->_4_Context_1.bus_out);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->bus_out, &_L67);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackAtlasETCS_TrackAtlas.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

