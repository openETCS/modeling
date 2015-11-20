/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_L23_TA_MA.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_L23_init_TA_MA(outC_Build_MA_L23_TA_MA *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->_L247 = kcg_true;
  outC->_L246.valid = kcg_true;
  outC->_L246.Level = MA_L1_TrackAtlasTypes;
  outC->_L246.q_dir = Q_DIR_Reverse;
  outC->_L246.v_main = 0;
  outC->_L246.v_loa = 0;
  outC->_L246.t_loa_unlimited = kcg_true;
  outC->_L246.t_loa = 0;
  outC->_L246.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->_L246.sections[i].valid = kcg_true;
    outC->_L246.sections[i].q_endsection = kcg_true;
    outC->_L246.sections[i].l_section = 0;
    outC->_L246.sections[i].q_sectiontimer = kcg_true;
    outC->_L246.sections[i].t_sectiontimer = 0;
    outC->_L246.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->_L246.q_dangerpoint = kcg_true;
  outC->_L246.dangerpoint.d_DP_or_OL = 0;
  outC->_L246.dangerpoint.v_release = 0;
  outC->_L246.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L246.q_overlap = kcg_true;
  outC->_L246.overlap.d_DP_or_OL = 0;
  outC->_L246.overlap.v_release = 0;
  outC->_L246.overlap.calc_v_release_onboard = kcg_true;
  outC->_L246.q_endtimer = kcg_true;
  outC->_L246.endtimer_t.t_endtimer = 0;
  outC->_L246.endtimer_t.d_endtimerstoploc = 0;
  outC->_L242.valid = kcg_true;
  outC->_L242.Level = MA_L1_TrackAtlasTypes;
  outC->_L242.q_dir = Q_DIR_Reverse;
  outC->_L242.v_main = 0;
  outC->_L242.v_loa = 0;
  outC->_L242.t_loa_unlimited = kcg_true;
  outC->_L242.t_loa = 0;
  outC->_L242.n_iter = 0;
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L242.sections[i1].valid = kcg_true;
    outC->_L242.sections[i1].q_endsection = kcg_true;
    outC->_L242.sections[i1].l_section = 0;
    outC->_L242.sections[i1].q_sectiontimer = kcg_true;
    outC->_L242.sections[i1].t_sectiontimer = 0;
    outC->_L242.sections[i1].d_sectiontimerstoploc = 0;
  }
  outC->_L242.q_dangerpoint = kcg_true;
  outC->_L242.dangerpoint.d_DP_or_OL = 0;
  outC->_L242.dangerpoint.v_release = 0;
  outC->_L242.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L242.q_overlap = kcg_true;
  outC->_L242.overlap.d_DP_or_OL = 0;
  outC->_L242.overlap.v_release = 0;
  outC->_L242.overlap.calc_v_release_onboard = kcg_true;
  outC->_L242.q_endtimer = kcg_true;
  outC->_L242.endtimer_t.t_endtimer = 0;
  outC->_L242.endtimer_t.d_endtimerstoploc = 0;
  outC->_L237.valid = kcg_true;
  outC->_L237.Level = MA_L1_TrackAtlasTypes;
  outC->_L237.q_dir = Q_DIR_Reverse;
  outC->_L237.v_main = 0;
  outC->_L237.v_loa = 0;
  outC->_L237.t_loa_unlimited = kcg_true;
  outC->_L237.t_loa = 0;
  outC->_L237.n_iter = 0;
  for (i2 = 0; i2 < 10; i2++) {
    outC->_L237.sections[i2].valid = kcg_true;
    outC->_L237.sections[i2].q_endsection = kcg_true;
    outC->_L237.sections[i2].l_section = 0;
    outC->_L237.sections[i2].q_sectiontimer = kcg_true;
    outC->_L237.sections[i2].t_sectiontimer = 0;
    outC->_L237.sections[i2].d_sectiontimerstoploc = 0;
  }
  outC->_L237.q_dangerpoint = kcg_true;
  outC->_L237.dangerpoint.d_DP_or_OL = 0;
  outC->_L237.dangerpoint.v_release = 0;
  outC->_L237.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L237.q_overlap = kcg_true;
  outC->_L237.overlap.d_DP_or_OL = 0;
  outC->_L237.overlap.v_release = 0;
  outC->_L237.overlap.calc_v_release_onboard = kcg_true;
  outC->_L237.q_endtimer = kcg_true;
  outC->_L237.endtimer_t.t_endtimer = 0;
  outC->_L237.endtimer_t.d_endtimerstoploc = 0;
  outC->_L111 = 0;
  outC->currentEOA = 0;
  outC->MA_absolute.valid = kcg_true;
  outC->MA_absolute.Level = MA_L1_TrackAtlasTypes;
  outC->MA_absolute.q_dir = Q_DIR_Reverse;
  outC->MA_absolute.v_main = 0;
  outC->MA_absolute.v_loa = 0;
  outC->MA_absolute.t_loa_unlimited = kcg_true;
  outC->MA_absolute.t_loa = 0;
  outC->MA_absolute.n_iter = 0;
  for (i3 = 0; i3 < 10; i3++) {
    outC->MA_absolute.sections[i3].valid = kcg_true;
    outC->MA_absolute.sections[i3].q_endsection = kcg_true;
    outC->MA_absolute.sections[i3].l_section = 0;
    outC->MA_absolute.sections[i3].q_sectiontimer = kcg_true;
    outC->MA_absolute.sections[i3].t_sectiontimer = 0;
    outC->MA_absolute.sections[i3].d_sectiontimerstoploc = 0;
  }
  outC->MA_absolute.q_dangerpoint = kcg_true;
  outC->MA_absolute.dangerpoint.d_DP_or_OL = 0;
  outC->MA_absolute.dangerpoint.v_release = 0;
  outC->MA_absolute.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_overlap = kcg_true;
  outC->MA_absolute.overlap.d_DP_or_OL = 0;
  outC->MA_absolute.overlap.v_release = 0;
  outC->MA_absolute.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_endtimer = kcg_true;
  outC->MA_absolute.endtimer_t.t_endtimer = 0;
  outC->MA_absolute.endtimer_t.d_endtimerstoploc = 0;
  outC->available = kcg_true;
  outC->updated = kcg_true;
  /* 1 */ MA_L23_Postprocessing_init_TA_MA(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_L23_reset_TA_MA(outC_Build_MA_L23_TA_MA *outC)
{
  outC->init = kcg_true;
  /* 1 */ MA_L23_Postprocessing_reset_TA_MA(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA::Build_MA_L23 */
void Build_MA_L23_TA_MA(
  /* TA_MA::Build_MA_L23::reset */ kcg_bool reset,
  /* TA_MA::Build_MA_L23::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA_L23::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Build_MA_L23::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_MA::Build_MA_L23::reject_new_MA */ kcg_bool reject_new_MA,
  /* TA_MA::Build_MA_L23::updatedEOA_from_EM */ kcg_bool updatedEOA_from_EM,
  /* TA_MA::Build_MA_L23::newEOA_from_EM */ L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  outC_Build_MA_L23_TA_MA *outC)
{
  /* TA_MA::Build_MA_L23 */
  static MovementAuthority_t_TrackAtlasTypes tmp3;
  /* TA_MA::Build_MA_L23 */
  static kcg_bool tmp2;
  /* TA_MA::Build_MA_L23 */
  static MovementAuthority_t_TrackAtlasTypes tmp1;
  /* TA_MA::Build_MA_L23 */
  static MovementAuthority_t_TrackAtlasTypes tmp;
  /* TA_MA::Build_MA_L23 */
  static kcg_bool _4_op_call;
  /* TA_MA::Build_MA_L23 */
  static MovementAuthority_t_TrackAtlasTypes _5_op_call;
  /* TA_MA::Build_MA_L23 */
  static MovementAuthority_t_TrackAtlasTypes _6_op_call;
  /* TA_MA::Build_MA_L23 */
  static MovementAuthority_t_TrackAtlasTypes op_call;
  /* TA_MA::Build_MA_L23 */
  static kcg_bool ck_every;
  /* TA_MA::Build_MA_L23 */
  static kcg_bool _7_ck_every;
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  static kcg_bool _8_noname;
  static kcg_bool _9_noname;
  static MovementAuthority_t_TrackAtlasTypes _10_noname;
  static kcg_int _11_noname;
  static kcg_bool _12_noname;
  /* TA_MA::Build_MA_L23::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_MA::Build_MA_L23::_L42 */
  static trainPosition_T_TrainPosition_Types_Pck _L42;
  /* TA_MA::Build_MA_L23::_L60 */
  static P015_OBU_T_TM _L60;
  /* TA_MA::Build_MA_L23::_L59 */
  static kcg_bool _L59;
  /* TA_MA::Build_MA_L23::_L73 */
  static CompressedPackets_T_Common_Types_Pkg _L73;
  /* TA_MA::Build_MA_L23::_L107 */
  static ReceivedMessage_T_Common_Types_Pkg _L107;
  /* TA_MA::Build_MA_L23::_L108 */
  static kcg_int _L108;
  /* TA_MA::Build_MA_L23::_L109 */
  static kcg_bool _L109;
  /* TA_MA::Build_MA_L23::_L112 */
  static NID_BG _L112;
  /* TA_MA::Build_MA_L23::_L113 */
  static kcg_bool _L113;
  /* TA_MA::Build_MA_L23::_L193 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L193;
  /* TA_MA::Build_MA_L23::_L194 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L194;
  /* TA_MA::Build_MA_L23::_L238 */
  static NID_BG _L238;
  /* TA_MA::Build_MA_L23::_L239 */
  static kcg_bool _L239;
  /* TA_MA::Build_MA_L23::_L240 */
  static kcg_bool _L240;
  /* TA_MA::Build_MA_L23::_L244 */
  static P003V1_OBU_T_TM_baseline2 _L244;
  /* TA_MA::Build_MA_L23::_L250 */
  static kcg_bool _L250;
  /* TA_MA::Build_MA_L23::_L249 */
  static kcg_bool _L249;
  /* TA_MA::Build_MA_L23::_L248 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L248;
  /* TA_MA::Build_MA_L23::_L202 */
  static kcg_bool _L202;
  /* TA_MA::Build_MA_L23::_L252 */
  static kcg_int _L252;
  /* TA_MA::Build_MA_L23::_L253 */
  static kcg_bool _L253;
  /* TA_MA::Build_MA_L23::_L254 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L254;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L73, &_L1.packets);
  /* 1 */ Read_P015_TM(&_L73, &_L59, &_L60);
  /* fby_1_init_1 */ if (outC->init) {
    _L238 = 0;
  }
  else {
    _L238 = outC->_L111;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L42, train_position);
  outC->_L111 = _L42.LRBG.nid_bg;
  _L239 = _L238 != outC->_L111;
  _L240 = _L59 | _L239;
  ck_every = _L240;
  _7_ck_every = _L59;
  _L202 = reset;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L107, MessageIn);
  /* 1 */ Eval_LRBG_TA_Lib_internal(&_L107, &_L253, &_L252, &_L108);
  _L113 = _L108 == outC->_L111;
  _L112 = _L42.prvLRBG.nid_bg;
  _L109 = _L108 == _L112;
  _L193 = _L42.LRBG.location.nominal;
  _L194 = _L42.prvLRBG.location.nominal;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L244, NV_in);
  /* ck_Build_MA_L23 */ if (_7_ck_every) {
    /* 1 */
    MA_L23_Preprocessing_TA_MA(
      &_L60,
      _L202,
      _L113,
      _L109,
      _L193,
      _L194,
      &_L244,
      &op_call);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L237, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &tmp3,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(&tmp3, &outC->_L237);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L237, &tmp3);
  }
  /* ck_Build_MA_L23 */ if (ck_every) {
    /* 1 */ MA_L23_Postprocessing_TA_MA(&outC->_L237, _L193, &outC->Context_1);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &_6_op_call,
      &outC->Context_1.MA_at_LRBG);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &_5_op_call,
      &outC->Context_1.MA_absolute);
    _4_op_call = outC->Context_1.MA_available;
  }
  outC->updated = _L59;
  /* ck_Build_MA_L23 */ if (ck_every) {
    outC->_L247 = _4_op_call;
  }
  else {
    if (outC->init) {
      tmp2 = kcg_false;
    }
    else {
      tmp2 = outC->_L247;
    }
    outC->_L247 = tmp2;
  }
  outC->available = outC->_L247;
  /* ck_Build_MA_L23 */ if (ck_every) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L246, &_5_op_call);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L242, &_6_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &tmp1,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(&tmp1, &outC->_L246);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L246, &tmp1);
    if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &tmp,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(&tmp, &outC->_L242);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L242, &tmp);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_absolute,
    &outC->_L246);
  _L248 = newEOA_from_EM;
  noname = _L248;
  _L250 = updatedEOA_from_EM;
  _8_noname = _L250;
  _L249 = reject_new_MA;
  _9_noname = _L249;
  _L254 = /* 1 */ Get_EOA_TA_MA(&outC->_L246);
  outC->currentEOA = _L254;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_10_noname, &outC->_L242);
  _11_noname = _L252;
  _12_noname = _L253;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_L23_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

