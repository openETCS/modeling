/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_StaticSpeedProfile_TA_SSP.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_StaticSpeedProfile_init_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->_L242[i].valid = kcg_true;
    outC->_L242[i].d_static_abs = 0;
    outC->_L242[i].d_static_LRBG = 0;
    outC->_L242[i].q_train_length_corr = kcg_true;
    outC->_L242[i].v_static = 0;
  }
  outC->_L241 = kcg_true;
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L237[i1].valid = kcg_true;
    outC->_L237[i1].d_static_abs = 0;
    outC->_L237[i1].d_static_LRBG = 0;
    outC->_L237[i1].q_train_length_corr = kcg_true;
    outC->_L237[i1].v_static = 0;
  }
  outC->_L111 = 0;
  outC->available = kcg_true;
  outC->updated = kcg_true;
  for (i2 = 0; i2 < 50; i2++) {
    outC->SSP[i2].valid = kcg_true;
    outC->SSP[i2].d_static_abs = 0;
    outC->SSP[i2].d_static_LRBG = 0;
    outC->SSP[i2].q_train_length_corr = kcg_true;
    outC->SSP[i2].v_static = 0;
  }
  /* 1 */ SSP_Postprocessing_init_TA_SSP(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_StaticSpeedProfile_reset_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC)
{
  outC->init = kcg_true;
  /* 1 */ SSP_Postprocessing_reset_TA_SSP(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_SSP::Build_StaticSpeedProfile */
void Build_StaticSpeedProfile_TA_SSP(
  /* TA_SSP::Build_StaticSpeedProfile::reset */ kcg_bool reset,
  /* TA_SSP::Build_StaticSpeedProfile::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP::Build_StaticSpeedProfile::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP::Build_StaticSpeedProfile::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_Build_StaticSpeedProfile_TA_SSP *outC)
{
  /* TA_SSP::Build_StaticSpeedProfile */
  static StaticSpeedProfile_t_TrackAtlasTypes tmp2;
  /* TA_SSP::Build_StaticSpeedProfile */
  static kcg_bool tmp1;
  /* TA_SSP::Build_StaticSpeedProfile */
  static StaticSpeedProfile_t_TrackAtlasTypes tmp;
  /* TA_SSP::Build_StaticSpeedProfile */
  static StaticSpeedProfile_t_TrackAtlasTypes _3_op_call;
  /* TA_SSP::Build_StaticSpeedProfile */
  static kcg_bool _4_op_call;
  /* TA_SSP::Build_StaticSpeedProfile */
  static StaticSpeedProfile_t_TrackAtlasTypes op_call;
  /* TA_SSP::Build_StaticSpeedProfile */
  static kcg_bool ck_every;
  /* TA_SSP::Build_StaticSpeedProfile */
  static kcg_bool _5_ck_every;
  static kcg_int noname;
  static kcg_bool _6_noname;
  /* TA_SSP::Build_StaticSpeedProfile::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_SSP::Build_StaticSpeedProfile::_L42 */
  static trainPosition_T_TrainPosition_Types_Pck _L42;
  /* TA_SSP::Build_StaticSpeedProfile::_L60 */
  static P027V1_OBU_T_TM_baseline2 _L60;
  /* TA_SSP::Build_StaticSpeedProfile::_L59 */
  static kcg_bool _L59;
  /* TA_SSP::Build_StaticSpeedProfile::_L73 */
  static CompressedPackets_T_Common_Types_Pkg _L73;
  /* TA_SSP::Build_StaticSpeedProfile::_L107 */
  static ReceivedMessage_T_Common_Types_Pkg _L107;
  /* TA_SSP::Build_StaticSpeedProfile::_L108 */
  static kcg_int _L108;
  /* TA_SSP::Build_StaticSpeedProfile::_L109 */
  static kcg_bool _L109;
  /* TA_SSP::Build_StaticSpeedProfile::_L112 */
  static NID_BG _L112;
  /* TA_SSP::Build_StaticSpeedProfile::_L113 */
  static kcg_bool _L113;
  /* TA_SSP::Build_StaticSpeedProfile::_L193 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L193;
  /* TA_SSP::Build_StaticSpeedProfile::_L194 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L194;
  /* TA_SSP::Build_StaticSpeedProfile::_L202 */
  static kcg_bool _L202;
  /* TA_SSP::Build_StaticSpeedProfile::_L209 */
  static kcg_bool _L209;
  /* TA_SSP::Build_StaticSpeedProfile::_L238 */
  static NID_BG _L238;
  /* TA_SSP::Build_StaticSpeedProfile::_L239 */
  static kcg_bool _L239;
  /* TA_SSP::Build_StaticSpeedProfile::_L240 */
  static kcg_bool _L240;
  /* TA_SSP::Build_StaticSpeedProfile::_L243 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L243;
  /* TA_SSP::Build_StaticSpeedProfile::_L244 */
  static kcg_int _L244;
  /* TA_SSP::Build_StaticSpeedProfile::_L245 */
  static kcg_bool _L245;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L73, &_L1.packets);
  /* 1 */ Read_P027V1_TM_baseline2(&_L73, &_L59, &_L60);
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
  _5_ck_every = _L59;
  _L202 = reset;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L107, MessageIn);
  /* 1 */ Eval_LRBG_TA_Lib_internal(&_L107, &_L245, &_L244, &_L108);
  _L113 = _L108 == outC->_L111;
  _L112 = _L42.prvLRBG.nid_bg;
  _L109 = _L108 == _L112;
  _L193 = _L42.LRBG.location.nominal;
  _L194 = _L42.prvLRBG.location.nominal;
  /* ck_Build_StaticSpeedProfile */ if (_5_ck_every) {
    /* 1 */
    SSP_Preprocessing_TA_SSP(
      &_L60,
      _L202,
      _L113,
      _L109,
      _L193,
      _L194,
      &op_call);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L237, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
        &tmp2,
        (StaticSpeedProfile_t_TrackAtlasTypes *)
          &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
    }
    else {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp2, &outC->_L237);
    }
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L237, &tmp2);
  }
  _L209 = _L42.prvLRBG.valid;
  _L243 = train_length;
  /* ck_Build_StaticSpeedProfile */ if (ck_every) {
    /* 1 */
    SSP_Postprocessing_TA_SSP(
      &outC->_L237,
      _L193,
      _L194,
      _L209,
      _L243,
      &outC->Context_1);
    _4_op_call = outC->Context_1.available;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &_3_op_call,
      &outC->Context_1.SSP);
  }
  outC->updated = _L59;
  /* ck_Build_StaticSpeedProfile */ if (ck_every) {
    outC->_L241 = _4_op_call;
  }
  else {
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L241;
    }
    outC->_L241 = tmp1;
  }
  outC->available = outC->_L241;
  /* ck_Build_StaticSpeedProfile */ if (ck_every) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L242, &_3_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
        &tmp,
        (StaticSpeedProfile_t_TrackAtlasTypes *)
          &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
    }
    else {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->_L242);
    }
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L242, &tmp);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L242);
  noname = _L244;
  _6_noname = _L245;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_StaticSpeedProfile_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

