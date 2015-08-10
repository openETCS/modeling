/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_GradientProfile_TA_Gradient.h"

void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  outC->init = kcg_true;
}

/* TA_Gradient::Build_GradientProfile */
void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  /* TA_Gradient::Build_GradientProfile::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes last_GP;
  /* TA_Gradient::Build_GradientProfile::newLRBG_only */ kcg_bool newLRBG_only;
  /* TA_Gradient::Build_GradientProfile::P21_local */ P021_OBU_T_TM P21_local;
  /* TA_Gradient::Build_GradientProfile::_L108 */ kcg_int _L108;
  /* TA_Gradient::Build_GradientProfile::_L134 */ kcg_bool _L134;
  
  if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &last_GP,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&last_GP, &outC->GP);
  }
  /* 1 */
  Read_P021_TM(&(*MessageIn).packets, &_1_else_clock_IfBlock1, &P21_local);
  if (outC->init) {
    _L108 = 0;
  }
  else {
    _L108 = outC->rem__L111;
  }
  else_clock_IfBlock1 = (*train_position).LRBG.nid_bg != _L108;
  _L134 = _1_else_clock_IfBlock1 & else_clock_IfBlock1;
  newLRBG_only = !_1_else_clock_IfBlock1 & else_clock_IfBlock1;
  if (newLRBG_only) {
  }
  else {
    _2_else_clock_IfBlock1 = _1_else_clock_IfBlock1 & !else_clock_IfBlock1;
  }
  _L108 = /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn);
  if (newLRBG_only) {
    /* 1 */ Update_LRBG_only_TA_Gradient(&last_GP, train_position, &outC->GP);
    outC->updated = kcg_true;
  }
  else if (_2_else_clock_IfBlock1) {
    /* 1 */ Update_GP_only_TA_Gradient(&last_GP, &P21_local, &outC->GP);
    outC->updated = kcg_true;
  }
  else {
    _1_else_clock_IfBlock1 = (_L108 == (*train_position).prvLRBG.nid_bg) &
      _L134;
    if (_1_else_clock_IfBlock1) {
      /* 1 */
      Update_GP_then_LRBG_TA_Gradient(
        &last_GP,
        &P21_local,
        train_position,
        &outC->GP);
      outC->updated = kcg_true;
    }
    else {
      else_clock_IfBlock1 = _L134 & (_L108 == (*train_position).LRBG.nid_bg);
      if (else_clock_IfBlock1) {
        /* 1 */
        Update_LRBG_then_GP_TA_Gradient(
          &last_GP,
          &P21_local,
          train_position,
          &outC->GP);
        outC->updated = kcg_true;
      }
      else {
        kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &last_GP);
        outC->updated = kcg_false;
      }
    }
  }
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfile_TA_Gradient.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

