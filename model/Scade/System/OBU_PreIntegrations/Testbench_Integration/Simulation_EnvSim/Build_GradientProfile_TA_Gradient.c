/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_GradientProfile_TA_Gradient.h"

void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  outC->init = kcg_true;
  /* 1 */ GP_Postprocessing_reset_TA_Gradient(&outC->Context_1);
}

/* TA_Gradient::Build_GradientProfile */
void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::reset */kcg_bool reset,
  /* TA_Gradient::Build_GradientProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  /* TA_Gradient::Build_GradientProfile::_L60 */
  static P021_OBU_T_TM _L60;
  /* TA_Gradient::Build_GradientProfile::_L108 */
  static kcg_int _L108;
  /* TA_Gradient::Build_GradientProfile::_L240 */
  static kcg_bool _L240;
  /* TA_Gradient::Build_GradientProfile::_L243 */
  static kcg_int _L243;
  /* TA_Gradient::Build_GradientProfile::_L244 */
  static kcg_bool _L244;
  
  /* 1 */ Read_P021_TM(&(*MessageIn).packets, &outC->updated, &_L60);
  if (outC->init) {
    _L243 = 0;
  }
  else {
    _L243 = outC->rem__L111;
  }
  _L240 = outC->updated | (_L243 != (*train_position).LRBG.nid_bg);
  /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn, &_L244, &_L243, &_L108);
  if (outC->updated) {
    /* 1 */
    GP_Preprocessing_TA_Gradient(
      &_L60,
      reset,
      (kcg_bool) (_L108 == (*train_position).LRBG.nid_bg),
      (kcg_bool) (_L108 == (*train_position).prvLRBG.nid_bg),
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L237,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  if (_L240) {
    /* 1 */
    GP_Postprocessing_TA_Gradient(
      &outC->_L237,
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      (*train_position).prvLRBG.valid,
      &outC->Context_1);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &outC->Context_1.GP);
    outC->available = outC->Context_1.available;
  }
  else if (outC->init) {
    outC->available = kcg_false;
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->GP,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  outC->init = kcg_false;
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfile_TA_Gradient.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

