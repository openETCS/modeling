/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_StaticSpeedProfile_TA_SSP.h"

void Build_StaticSpeedProfile_reset_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC)
{
  outC->init = kcg_true;
  /* 1 */ SSP_Postprocessing_reset_TA_SSP(&outC->_3_Context_1);
  /* 1 */ SSP_Preprocessing_reset_TA_SSP(&outC->_2_Context_1);
  /* 1 */ Eval_LRBG_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ Read_P027V1_reset_TM_baseline2(&outC->Context_1);
}

/* TA_SSP::Build_StaticSpeedProfile */
void Build_StaticSpeedProfile_TA_SSP(
  /* TA_SSP::Build_StaticSpeedProfile::reset */kcg_bool reset,
  /* TA_SSP::Build_StaticSpeedProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP::Build_StaticSpeedProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP::Build_StaticSpeedProfile::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_Build_StaticSpeedProfile_TA_SSP *outC)
{
  StaticSpeedProfile_t_TrackAtlasTypes tmp2;
  StaticSpeedProfile_t_TrackAtlasTypes tmp1;
  kcg_bool tmp;
  StaticSpeedProfile_t_TrackAtlasTypes tmp3;
  StaticSpeedProfile_t_TrackAtlasTypes tmp4;
  kcg_bool tmp5;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L73,
    &outC->_L1.packets);
  /* 1 */ Read_P027V1_TM_baseline2(&outC->_L73, &outC->Context_1);
  outC->_L59 = outC->Context_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L60, &outC->Context_1.P027V1_out);
  if (outC->init) {
    outC->_L238 = 0;
  }
  else {
    outC->_L238 = outC->_L111;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L42, train_position);
  outC->_L111 = outC->_L42.LRBG.nid_bg;
  outC->_L239 = outC->_L238 != outC->_L111;
  outC->_L240 = outC->_L59 | outC->_L239;
  outC->tmp = outC->_L240;
  outC->tmp4 = outC->_L59;
  outC->_L202 = reset;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L107, MessageIn);
  /* 1 */ Eval_LRBG_TA_Lib_internal(&outC->_L107, &outC->_1_Context_1);
  outC->_L108 = outC->_1_Context_1.LRBG;
  outC->_L113 = outC->_L108 == outC->_L111;
  outC->_L112 = outC->_L42.prvLRBG.nid_bg;
  outC->_L109 = outC->_L108 == outC->_L112;
  outC->_L193 = outC->_L42.LRBG.location.nominal;
  outC->_L194 = outC->_L42.prvLRBG.location.nominal;
  if (outC->tmp4) {
    /* 1 */
    SSP_Preprocessing_TA_SSP(
      &outC->_L60,
      outC->_L202,
      outC->_L113,
      outC->_L109,
      outC->_L193,
      outC->_L194,
      &outC->_2_Context_1);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &tmp3,
      &outC->_2_Context_1.SSP);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L237, &tmp3);
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
  outC->_L209 = outC->_L42.prvLRBG.valid;
  outC->_L243 = train_length;
  if (outC->tmp) {
    /* 1 */
    SSP_Postprocessing_TA_SSP(
      &outC->_L237,
      outC->_L193,
      outC->_L194,
      outC->_L209,
      outC->_L243,
      &outC->_3_Context_1);
    tmp5 = outC->_3_Context_1.available;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &tmp4,
      &outC->_3_Context_1.SSP);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L242, &tmp4);
    outC->_L241 = tmp5;
  }
  else {
    if (outC->init) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
        &tmp1,
        (StaticSpeedProfile_t_TrackAtlasTypes *)
          &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
    }
    else {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp1, &outC->_L242);
    }
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L242, &tmp1);
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->_L241;
    }
    outC->_L241 = tmp;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L242);
  outC->available = outC->_L241;
  outC->updated = outC->_L59;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_StaticSpeedProfile_TA_SSP.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

