/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlas_TrackAtlas.h"

#ifndef KCG_USER_DEFINED_INIT
void TrackAtlas_init_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
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
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->bus_out[i1].Message.valid = kcg_true;
    outC->bus_out[i1].Message.nid_message = 0;
    outC->bus_out[i1].Message.l_message = 0;
    outC->bus_out[i1].Message.t_train = 0;
    outC->bus_out[i1].Message.nid_engine = 0;
    outC->bus_out[i1].Message.field1 = 0;
    outC->bus_out[i1].Message.field2 = 0;
    outC->bus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->bus_out[i1].OptionalPackets[i] = 0;
    }
  }
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
  for (i3 = 0; i3 < 1; i3++) {
    outC->message147.packets.p3.aNID_RADIO[i3].valid = kcg_true;
    for (i2 = 0; i2 < 15; i2++) {
      outC->message147.packets.p3.aNID_RADIO[i3].telephoneNumber[i2] = 0;
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
  for (i4 = 0; i4 < 4; i4++) {
    outC->message147.packets.p11.tractionIdentity[i4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[i4].nid_ctraction = 0;
  }
  outC->message147.packets.p11.nIter_ntc = 0;
  for (i5 = 0; i5 < 5; i5++) {
    outC->message147.packets.p11.nid_ntc[i5] = 0;
  }
  for (i6 = 0; i6 < 110; i6++) {
    outC->MRSP[i6].valid = kcg_true;
    outC->MRSP[i6].Loc_Abs = 0;
    outC->MRSP[i6].Loc_LRBG = 0;
    outC->MRSP[i6].MRS = 0;
  }
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.Level = MA_L1_TrackAtlasTypes;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.v_main = 0;
  outC->MA_onboard_out.v_loa = 0;
  outC->MA_onboard_out.t_loa_unlimited = kcg_true;
  outC->MA_onboard_out.t_loa = 0;
  outC->MA_onboard_out.n_iter = 0;
  for (i7 = 0; i7 < 10; i7++) {
    outC->MA_onboard_out.sections[i7].valid = kcg_true;
    outC->MA_onboard_out.sections[i7].q_endsection = kcg_true;
    outC->MA_onboard_out.sections[i7].l_section = 0;
    outC->MA_onboard_out.sections[i7].q_sectiontimer = kcg_true;
    outC->MA_onboard_out.sections[i7].t_sectiontimer = 0;
    outC->MA_onboard_out.sections[i7].d_sectiontimerstoploc = 0;
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
  for (i8 = 0; i8 < 10; i8++) {
    outC->to_Supervision.MA.sections[i8].valid = kcg_true;
    outC->to_Supervision.MA.sections[i8].q_endsection = kcg_true;
    outC->to_Supervision.MA.sections[i8].l_section = 0;
    outC->to_Supervision.MA.sections[i8].q_sectiontimer = kcg_true;
    outC->to_Supervision.MA.sections[i8].t_sectiontimer = 0;
    outC->to_Supervision.MA.sections[i8].d_sectiontimerstoploc = 0;
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
  for (i9 = 0; i9 < 50; i9++) {
    outC->to_Supervision.GradientProfile[i9].valid = kcg_true;
    outC->to_Supervision.GradientProfile[i9].Loc_Absolute = 0;
    outC->to_Supervision.GradientProfile[i9].Loc_LRBG = 0;
    outC->to_Supervision.GradientProfile[i9].Gradient = 0;
    outC->to_Supervision.GradientProfile[i9].L_Gradient = 0;
  }
  outC->to_Supervision.freshMRSP = kcg_true;
  for (i10 = 0; i10 < 110; i10++) {
    outC->to_Supervision.MRSP[i10].valid = kcg_true;
    outC->to_Supervision.MRSP[i10].Loc_Abs = 0;
    outC->to_Supervision.MRSP[i10].Loc_LRBG = 0;
    outC->to_Supervision.MRSP[i10].MRS = 0;
  }
  for (i11 = 0; i11 < 50; i11++) {
    outC->to_DMI.GradientProfile[i11].valid = kcg_true;
    outC->to_DMI.GradientProfile[i11].begin_section = 0;
    outC->to_DMI.GradientProfile[i11].end_section = 0;
    outC->to_DMI.GradientProfile[i11].gradient = 0;
  }
  outC->to_DMI.Gradient_profile_updated = kcg_true;
  for (i12 = 0; i12 < 110; i12++) {
    outC->to_DMI.MRSP[i12].valid = kcg_true;
    outC->to_DMI.MRSP[i12].Loc_Abs = 0;
    outC->to_DMI.MRSP[i12].Loc_LRBG = 0;
    outC->to_DMI.MRSP[i12].MRS = 0;
  }
  outC->to_DMI.MRSP_updated = kcg_true;
  for (i13 = 0; i13 < 5; i13++) {
    outC->To_ModeAndLevel.train_packets.P_12[i13].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_12[i13].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_12[i13].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_12[i13].v_main = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i13].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i13].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i13].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_12[i13].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_12[i13].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i13].v_releaseol = 0;
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
  for (i14 = 0; i14 < 5; i14++) {
    outC->To_ModeAndLevel.train_packets.P_15[i14].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_15[i14].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_15[i14].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_15[i14].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i14].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i14].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i14].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_15[i14].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_15[i14].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i14].v_releaseol = 0;
  }
  for (i15 = 0; i15 < 7; i15++) {
    outC->To_ModeAndLevel.train_packets.P_21[i15].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_21[i15].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_21[i15].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_21[i15].d_gradient = 0;
    outC->To_ModeAndLevel.train_packets.P_21[i15].q_gdir = Q_GDIR_downhill;
    outC->To_ModeAndLevel.train_packets.P_21[i15].g_a = 0;
  }
  outC->To_ModeAndLevel.train_packets.P_27.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_27.d_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.v_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i16 = 0; i16 < 7; i16++) {
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i16].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i16].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i16].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i16].nc_diff = 0;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i16].v_diff = 0;
  }
  for (i18 = 0; i18 < 7; i18++) {
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].d_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].v_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i17 = 0; i17 < 7; i17++) {
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].diffArray[i17].valid =
        kcg_true;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].diffArray[i17].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].diffArray[i17].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].diffArray[i17].nc_diff =
        0;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i18].diffArray[i17].v_diff =
        0;
    }
  }
  for (i19 = 0; i19 < 7; i19++) {
    outC->To_ModeAndLevel.train_packets.P_41[i19].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_41[i19].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_41[i19].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_41[i19].d_leveltr = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i19].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_41[i19].nid_ntc = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i19].l_ackleveltr = 0;
  }
  for (i20 = 0; i20 < 7; i20++) {
    outC->To_ModeAndLevel.train_packets.P_46[i20].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_46[i20].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_46[i20].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_46[i20].nid_ntc = 0;
  }
  for (i21 = 0; i21 < 7; i21++) {
    outC->To_ModeAndLevel.train_packets.P_63[i21].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_63[i21].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_63[i21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->To_ModeAndLevel.train_packets.P_63[i21].nid_c = 0;
    outC->To_ModeAndLevel.train_packets.P_63[i21].nid_bg = 0;
  }
  for (i22 = 0; i22 < 3; i22++) {
    outC->To_ModeAndLevel.train_packets.P_80[i22].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_80[i22].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_80[i22].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_80[i22].d_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i22].m_mamode = M_MAMODE_On_Sight;
    outC->To_ModeAndLevel.train_packets.P_80[i22].v_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i22].l_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i22].l_ackmamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i22].q_mamode =
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
  for (i23 = 0; i23 < 32; i23++) {
    outC->NV_raw_out.nid_c_list[i23].valid = kcg_true;
    outC->NV_raw_out.nid_c_list[i23].nid_c = 0;
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
  for (i24 = 0; i24 < 32; i24++) {
    outC->NV_raw_out.n_iter_n_list[i24].valid = kcg_true;
    outC->NV_raw_out.n_iter_n_list[i24].v_nvkvint_n = 0;
    outC->NV_raw_out.n_iter_n_list[i24].m_nvkvint_n_12 = 0.0;
    outC->NV_raw_out.n_iter_n_list[i24].m_nvkvint_n_23 = 0.0;
  }
  outC->NV_raw_out.n_iter_k = 0;
  for (i26 = 0; i26 < 32; i26++) {
    outC->NV_raw_out.n_iter_k_list[i26].valid = kcg_true;
    outC->NV_raw_out.n_iter_k_list[i26].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->NV_raw_out.n_iter_k_list[i26].a_nvp12_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i26].a_nvp23_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i26].v_nvkvint_k = 0;
    outC->NV_raw_out.n_iter_k_list[i26].m_nvkvint_k_12 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i26].m_nvkvint_k_23 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i26].n_iter_k_m = 0;
    for (i25 = 0; i25 < 32; i25++) {
      outC->NV_raw_out.n_iter_k_list[i26].n_iter_k_m_list[i25].valid = kcg_true;
      outC->NV_raw_out.n_iter_k_list[i26].n_iter_k_m_list[i25].v_nvkvint_k_m =
        0;
      outC->NV_raw_out.n_iter_k_list[i26].n_iter_k_m_list[i25].m_nvkvint_km_12 =
        0.0;
      outC->NV_raw_out.n_iter_k_list[i26].n_iter_k_m_list[i25].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->NV_raw_out.l_nvkrint = L_NVKRINT_0m;
  outC->NV_raw_out.m_nvkrint = 0.0;
  outC->NV_raw_out.n_iter_l = 0;
  for (i27 = 0; i27 < 32; i27++) {
    outC->NV_raw_out.n_iter_l_list[i27].valid = kcg_true;
    outC->NV_raw_out.n_iter_l_list[i27].l_nvkrint_l = L_NVKRINT_0m;
    outC->NV_raw_out.n_iter_l_list[i27].m_nvkrint_l = 0.0;
  }
  outC->NV_raw_out.m_nvktint = 0.0;
  /* 1 */ TrackAtlasETCS_init_TrackAtlas(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  /* 1 */ TrackAtlasETCS_reset_TrackAtlas(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TrackAtlas::TrackAtlas */
void TrackAtlas_TrackAtlas(
  /* TrackAtlas::TrackAtlas::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlas::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlas::TrainData_in */ FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlas::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlas::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TrackAtlas::TrackAtlas::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlas::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlas::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlas::fromDriverToMA_R */ Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlas::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlas::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlas::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlas::t_train */ T_TRAIN t_train,
  /* TrackAtlas::TrackAtlas::P203V1_onboard */ P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlas::PermanentDataP003 */ P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  /* TrackAtlas::TrackAtlas::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_TrackAtlas_TrackAtlas *outC)
{
  /* TrackAtlas::TrackAtlas::_L11 */
  static kcg_bool _L11;
  /* TrackAtlas::TrackAtlas::_L10 */
  static kcg_bool _L10;
  /* TrackAtlas::TrackAtlas::_L9 */
  static kcg_bool _L9;
  /* TrackAtlas::TrackAtlas::_L8 */
  static Radio_TrainTrack_Message_T_TM_transitional _L8;
  /* TrackAtlas::TrackAtlas::_L5 */
  static MovementAuthority_t_TrackAtlasTypes _L5;
  /* TrackAtlas::TrackAtlas::_L4 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L4;
  /* TrackAtlas::TrackAtlas::_L3 */
  static DataForDMI_t_TrackAtlasTypes _L3;
  /* TrackAtlas::TrackAtlas::_L2 */
  static DataForModeAndLevel_t_TrackAtlasTypes _L2;
  /* TrackAtlas::TrackAtlas::_L1 */
  static P003_OBU_T_TM _L1;
  /* TrackAtlas::TrackAtlas::_L12 */
  static ReceivedMessage_T_Common_Types_Pkg _L12;
  /* TrackAtlas::TrackAtlas::_L13 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L13;
  /* TrackAtlas::TrackAtlas::_L14 */
  static FromTIU_t_TrackAtlasTypes _L14;
  /* TrackAtlas::TrackAtlas::_L15 */
  static trainPosition_T_TrainPosition_Types_Pck _L15;
  /* TrackAtlas::TrackAtlas::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TrackAtlas::TrackAtlas::_L17 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L17;
  /* TrackAtlas::TrackAtlas::_L18 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L18;
  /* TrackAtlas::TrackAtlas::_L19 */
  static odometry_T_Obu_BasicTypes_Pkg _L19;
  /* TrackAtlas::TrackAtlas::_L20 */
  static Driver2MAR_T_MA_Request _L20;
  /* TrackAtlas::TrackAtlas::_L21 */
  static trainProperties_T_TrainPosition_Types_Pck _L21;
  /* TrackAtlas::TrackAtlas::_L22 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L22;
  /* TrackAtlas::TrackAtlas::_L23 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L23;
  /* TrackAtlas::TrackAtlas::_L24 */
  static T_TRAIN _L24;
  /* TrackAtlas::TrackAtlas::_L25 */
  static P203V1_OBU_T_TM_baseline2 _L25;
  /* TrackAtlas::TrackAtlas::_L26 */
  static P003_permanent_data_T_TM_baseline2 _L26;
  /* TrackAtlas::TrackAtlas::_L59 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L59;
  /* TrackAtlas::TrackAtlas::_L63 */
  static M_MODE _L63;
  /* TrackAtlas::TrackAtlas::_L62 */
  static M_MODE _L62;
  /* TrackAtlas::TrackAtlas::_L61 */
  static kcg_bool _L61;
  /* TrackAtlas::TrackAtlas::_L60 */
  static MRSP_Profile_t_TrackAtlasTypes _L60;
  /* TrackAtlas::TrackAtlas::_L76 */
  static kcg_bool _L76;
  /* TrackAtlas::TrackAtlas::_L80 */
  static kcg_bool _L80;
  /* TrackAtlas::TrackAtlas::_L81 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L81;
  /* TrackAtlas::TrackAtlas::_L82 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L82;
  /* TrackAtlas::TrackAtlas::_L83 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L83;
  /* TrackAtlas::TrackAtlas::_L84 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L84;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L12, MessageIn);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L13, ModeAndLevel_in);
  _L14 = TrainData_in;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L15, TrainPositionIn);
  _L16 = train_length;
  _L17 = SystemTime;
  _L18 = preindicationLocation;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L19, odometry);
  kcg_copy_Driver2MAR_T_MA_Request(&_L20, fromDriverToMA_R);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L21, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L22, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L23, packet1);
  _L24 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L84, bus_in);
  kcg_copy_P203V1_OBU_T_TM_baseline2(&_L25, P203V1_onboard);
  kcg_copy_P003_permanent_data_T_TM_baseline2(&_L26, PermanentDataP003);
  /* 1 */
  TrackAtlasETCS_TrackAtlas(
    &_L12,
    &_L13,
    _L14,
    &_L15,
    _L16,
    _L17,
    _L18,
    &_L19,
    &_L20,
    &_L21,
    &_L22,
    &_L23,
    _L24,
    &_L84,
    &_L25,
    &_L26,
    &outC->Context_1);
  _L76 = outC->Context_1.SSP_available;
  kcg_copy_P003_OBU_T_TM(&_L1, &outC->Context_1.NV_raw_out);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &_L2,
    &outC->Context_1.To_ModeAndLevel);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&_L3, &outC->Context_1.to_DMI);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &_L4,
    &outC->Context_1.to_Supervision);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &_L5,
    &outC->Context_1.MA_onboard_out);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L83,
    &outC->Context_1.bus_out);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &_L8,
    &outC->Context_1.message147);
  _L9 = outC->Context_1.ces_accepted;
  _L10 = outC->Context_1.ces_revoked;
  _L11 = outC->Context_1.trip_train;
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &_L1);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->To_ModeAndLevel, &_L2);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &_L3);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L59, ModeAndLevel_in);
  _L62 = _L59.Mode;
  _L63 = Mode_NTC_TrackAtlas;
  _L61 = _L62 != _L63;
  _L80 = _L61 & _L76;
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &_L82,
    (DataForSupervision_nextGen_t_TrackAtlasTypes *)
      &NTC_values_to_supervision_TrackAtlas);
  /* 1 */ if (_L80) {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(&_L81, &_L4);
  }
  else {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(&_L81, &_L82);
  }
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &_L81);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA_onboard_out, &_L5);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&outC->message147, &_L8);
  outC->ces_accepted = _L9;
  outC->ces_revoked = _L10;
  outC->trip_train = _L11;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L60, &_L81.MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &_L60);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->bus_out, &_L83);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackAtlas_TrackAtlas.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

