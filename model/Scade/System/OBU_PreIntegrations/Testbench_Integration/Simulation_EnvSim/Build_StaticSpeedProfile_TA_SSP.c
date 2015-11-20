/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_StaticSpeedProfile_TA_SSP.h"

void Build_StaticSpeedProfile_reset_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC)
{
  outC->init = kcg_true;
  /* 1 */ SSP_Postprocessing_reset_TA_SSP(&outC->Context_1);
}

/* TA_SSP::Build_StaticSpeedProfile */
void Build_StaticSpeedProfile_TA_SSP(
  /* TA_SSP::Build_StaticSpeedProfile::reset */kcg_bool reset,
  /* TA_SSP::Build_StaticSpeedProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP::Build_StaticSpeedProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP::Build_StaticSpeedProfile::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_Build_StaticSpeedProfile_TA_SSP *outC)
{
  /* TA_SSP::Build_StaticSpeedProfile::_L60 */
  static P027V1_OBU_T_TM_baseline2 _L60;
  /* TA_SSP::Build_StaticSpeedProfile::_L108 */
  static kcg_int _L108;
  /* TA_SSP::Build_StaticSpeedProfile::_L240 */
  static kcg_bool _L240;
  /* TA_SSP::Build_StaticSpeedProfile::_L244 */
  static kcg_int _L244;
  /* TA_SSP::Build_StaticSpeedProfile::_L245 */
  static kcg_bool _L245;
  
  /* 1 */
  Read_P027V1_TM_baseline2(&(*MessageIn).packets, &outC->updated, &_L60);
  if (outC->init) {
    _L244 = 0;
  }
  else {
    _L244 = outC->rem__L111;
  }
  _L240 = outC->updated | (_L244 != (*train_position).LRBG.nid_bg);
  /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn, &_L245, &_L244, &_L108);
  if (outC->updated) {
    /* 1 */
    SSP_Preprocessing_TA_SSP(
      &_L60,
      reset,
      (kcg_bool) (_L108 == (*train_position).LRBG.nid_bg),
      (kcg_bool) (_L108 == (*train_position).prvLRBG.nid_bg),
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L237,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  if (_L240) {
    /* 1 */
    SSP_Postprocessing_TA_SSP(
      &outC->_L237,
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      (*train_position).prvLRBG.valid,
      train_length,
      &outC->Context_1);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->SSP,
      &outC->Context_1.SSP);
    outC->available = outC->Context_1.available;
  }
  else if (outC->init) {
    outC->available = kcg_false;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->SSP,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  outC->init = kcg_false;
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_StaticSpeedProfile_TA_SSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

