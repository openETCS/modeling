/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_SSP_TA_SpeedProfiles.h"

void SP_SSP_reset_TA_SpeedProfiles(outC_SP_SSP_TA_SpeedProfiles *outC)
{
  outC->init = kcg_true;
}

/* TA_SpeedProfiles::SP_SSP */
void SP_SSP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_SSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_SSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SpeedProfiles::SP_SSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_SP_SSP_TA_SpeedProfiles *outC)
{
  /* TA_SpeedProfiles::SP_SSP::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TA_SpeedProfiles::SP_SSP::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP last_SSP;
  /* TA_SpeedProfiles::SP_SSP::newLRBG_only */ kcg_bool newLRBG_only;
  /* TA_SpeedProfiles::SP_SSP::P27V1_local */ P027V1_OBU_T_TM_baseline2 P27V1_local;
  /* TA_SpeedProfiles::SP_SSP::_L108 */ kcg_int _L108;
  /* TA_SpeedProfiles::SP_SSP::_L134 */ kcg_bool _L134;
  
  if (outC->init) {
    kcg_copy_SSP_cat_t_TA_MRSP(
      &last_SSP,
      (SSP_cat_t_TA_MRSP *) &DEFAULT_SSP_cat_TA_MRSP);
  }
  else {
    kcg_copy_SSP_cat_t_TA_MRSP(&last_SSP, &outC->SSP);
  }
  /* 1 */
  Read_P027V1_TM_baseline2(
    &(*MessageIn).packets,
    &_1_else_clock_IfBlock1,
    &P27V1_local);
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
    /* 1 */ Update_LRBG_only_TA_SSP(&last_SSP, train_position, &outC->SSP);
    outC->updated = kcg_true;
  }
  else if (_2_else_clock_IfBlock1) {
    /* 1 */
    Update_SSP_only_TA_SSP(&last_SSP, &P27V1_local, train_length, &outC->SSP);
    outC->updated = kcg_true;
  }
  else {
    _1_else_clock_IfBlock1 = (_L108 == (*train_position).prvLRBG.nid_bg) &
      _L134;
    if (_1_else_clock_IfBlock1) {
      /* 1 */
      Update_SSP_then_LRBG_TA_SSP(
        &last_SSP,
        &P27V1_local,
        train_length,
        train_position,
        &outC->SSP);
      outC->updated = kcg_true;
    }
    else {
      else_clock_IfBlock1 = _L134 & (_L108 == (*train_position).LRBG.nid_bg);
      if (else_clock_IfBlock1) {
        /* 1 */
        Update_LRBG_then_SSP_TA_SSP(
          &last_SSP,
          &P27V1_local,
          train_length,
          train_position,
          &outC->SSP);
        outC->updated = kcg_true;
      }
      else {
        kcg_copy_SSP_cat_t_TA_MRSP(&outC->SSP, &last_SSP);
        outC->updated = kcg_false;
      }
    }
  }
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_SSP_TA_SpeedProfiles.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

