/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_GradientProfile_TA_Gradient.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_GradientProfile_init_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->_L242[i].valid = kcg_true;
    outC->_L242[i].Loc_Absolute = 0;
    outC->_L242[i].Loc_LRBG = 0;
    outC->_L242[i].Gradient = 0;
    outC->_L242[i].L_Gradient = 0;
  }
  outC->_L241 = kcg_true;
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L237[i1].valid = kcg_true;
    outC->_L237[i1].Loc_Absolute = 0;
    outC->_L237[i1].Loc_LRBG = 0;
    outC->_L237[i1].Gradient = 0;
    outC->_L237[i1].L_Gradient = 0;
  }
  outC->_L111 = 0;
  outC->available = kcg_true;
  outC->updated = kcg_true;
  for (i2 = 0; i2 < 50; i2++) {
    outC->GP[i2].valid = kcg_true;
    outC->GP[i2].Loc_Absolute = 0;
    outC->GP[i2].Loc_LRBG = 0;
    outC->GP[i2].Gradient = 0;
    outC->GP[i2].L_Gradient = 0;
  }
  /* 1 */ GP_Postprocessing_init_TA_Gradient(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  outC->init = kcg_true;
  /* 1 */ GP_Postprocessing_reset_TA_Gradient(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_Gradient::Build_GradientProfile */
void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::reset */ kcg_bool reset,
  /* TA_Gradient::Build_GradientProfile::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  /* TA_Gradient::Build_GradientProfile */
  static GradientProfile_t_TrackAtlasTypes tmp2;
  /* TA_Gradient::Build_GradientProfile */
  static kcg_bool tmp1;
  /* TA_Gradient::Build_GradientProfile */
  static GradientProfile_t_TrackAtlasTypes tmp;
  /* TA_Gradient::Build_GradientProfile */
  static GradientProfile_t_TrackAtlasTypes _3_op_call;
  /* TA_Gradient::Build_GradientProfile */
  static kcg_bool _4_op_call;
  /* TA_Gradient::Build_GradientProfile */
  static GradientProfile_t_TrackAtlasTypes op_call;
  /* TA_Gradient::Build_GradientProfile */
  static kcg_bool ck_every;
  /* TA_Gradient::Build_GradientProfile */
  static kcg_bool _5_ck_every;
  static kcg_int noname;
  static kcg_bool _6_noname;
  /* TA_Gradient::Build_GradientProfile::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_Gradient::Build_GradientProfile::_L42 */
  static trainPosition_T_TrainPosition_Types_Pck _L42;
  /* TA_Gradient::Build_GradientProfile::_L60 */
  static P021_OBU_T_TM _L60;
  /* TA_Gradient::Build_GradientProfile::_L59 */
  static kcg_bool _L59;
  /* TA_Gradient::Build_GradientProfile::_L73 */
  static CompressedPackets_T_Common_Types_Pkg _L73;
  /* TA_Gradient::Build_GradientProfile::_L107 */
  static ReceivedMessage_T_Common_Types_Pkg _L107;
  /* TA_Gradient::Build_GradientProfile::_L108 */
  static kcg_int _L108;
  /* TA_Gradient::Build_GradientProfile::_L109 */
  static kcg_bool _L109;
  /* TA_Gradient::Build_GradientProfile::_L112 */
  static NID_BG _L112;
  /* TA_Gradient::Build_GradientProfile::_L113 */
  static kcg_bool _L113;
  /* TA_Gradient::Build_GradientProfile::_L193 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L193;
  /* TA_Gradient::Build_GradientProfile::_L194 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L194;
  /* TA_Gradient::Build_GradientProfile::_L202 */
  static kcg_bool _L202;
  /* TA_Gradient::Build_GradientProfile::_L209 */
  static kcg_bool _L209;
  /* TA_Gradient::Build_GradientProfile::_L238 */
  static NID_BG _L238;
  /* TA_Gradient::Build_GradientProfile::_L239 */
  static kcg_bool _L239;
  /* TA_Gradient::Build_GradientProfile::_L240 */
  static kcg_bool _L240;
  /* TA_Gradient::Build_GradientProfile::_L243 */
  static kcg_int _L243;
  /* TA_Gradient::Build_GradientProfile::_L244 */
  static kcg_bool _L244;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L73, &_L1.packets);
  /* 1 */ Read_P021_TM(&_L73, &_L59, &_L60);
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
  /* 1 */ Eval_LRBG_TA_Lib_internal(&_L107, &_L244, &_L243, &_L108);
  _L113 = _L108 == outC->_L111;
  _L112 = _L42.prvLRBG.nid_bg;
  _L109 = _L108 == _L112;
  _L193 = _L42.LRBG.location.nominal;
  _L194 = _L42.prvLRBG.location.nominal;
  /* ck_Build_GradientProfile */ if (_5_ck_every) {
    /* 1 */
    GP_Preprocessing_TA_Gradient(
      &_L60,
      _L202,
      _L113,
      _L109,
      _L193,
      _L194,
      &op_call);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L237, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_GradientProfile_t_TrackAtlasTypes(
        &tmp2,
        (GradientProfile_t_TrackAtlasTypes *)
          &DEFAULT_GradientProfile_TrackAtlasTypes);
    }
    else {
      kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp2, &outC->_L237);
    }
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L237, &tmp2);
  }
  _L209 = _L42.prvLRBG.valid;
  /* ck_Build_GradientProfile */ if (ck_every) {
    /* 1 */
    GP_Postprocessing_TA_Gradient(
      &outC->_L237,
      _L193,
      _L194,
      _L209,
      &outC->Context_1);
    _4_op_call = outC->Context_1.available;
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &_3_op_call,
      &outC->Context_1.GP);
  }
  outC->updated = _L59;
  /* ck_Build_GradientProfile */ if (ck_every) {
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
  /* ck_Build_GradientProfile */ if (ck_every) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L242, &_3_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_GradientProfile_t_TrackAtlasTypes(
        &tmp,
        (GradientProfile_t_TrackAtlasTypes *)
          &DEFAULT_GradientProfile_TrackAtlasTypes);
    }
    else {
      kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, &outC->_L242);
    }
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L242, &tmp);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &outC->_L242);
  noname = _L243;
  _6_noname = _L244;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_GradientProfile_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

