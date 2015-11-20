/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_L23_TA_MA.h"

void Build_MA_L23_reset_TA_MA(outC_Build_MA_L23_TA_MA *outC)
{
  outC->init = kcg_true;
  /* 1 */ MA_L23_Postprocessing_reset_TA_MA(&outC->Context_1);
}

/* TA_MA::Build_MA_L23 */
void Build_MA_L23_TA_MA(
  /* TA_MA::Build_MA_L23::reset */kcg_bool reset,
  /* TA_MA::Build_MA_L23::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA_L23::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Build_MA_L23::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_MA::Build_MA_L23::reject_new_MA */kcg_bool reject_new_MA,
  /* TA_MA::Build_MA_L23::updatedEOA_from_EM */kcg_bool updatedEOA_from_EM,
  /* TA_MA::Build_MA_L23::newEOA_from_EM */L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  outC_Build_MA_L23_TA_MA *outC)
{
  /* TA_MA::Build_MA_L23::_L60 */
  static P015_OBU_T_TM _L60;
  /* TA_MA::Build_MA_L23::_L108 */
  static kcg_int _L108;
  /* TA_MA::Build_MA_L23::_L240 */
  static kcg_bool _L240;
  /* TA_MA::Build_MA_L23::_L252 */
  static kcg_int _L252;
  /* TA_MA::Build_MA_L23::_L253 */
  static kcg_bool _L253;
  
  /* 1 */ Read_P015_TM(&(*MessageIn).packets, &outC->updated, &_L60);
  if (outC->init) {
    _L252 = 0;
  }
  else {
    _L252 = outC->rem__L111;
  }
  _L240 = outC->updated | (_L252 != (*train_position).LRBG.nid_bg);
  /* 1 */ Eval_LRBG_TA_Lib_internal(MessageIn, &_L253, &_L252, &_L108);
  if (outC->updated) {
    /* 1 */
    MA_L23_Preprocessing_TA_MA(
      &_L60,
      reset,
      (kcg_bool) (_L108 == (*train_position).LRBG.nid_bg),
      (kcg_bool) (_L108 == (*train_position).prvLRBG.nid_bg),
      (*train_position).LRBG.location.nominal,
      (*train_position).prvLRBG.location.nominal,
      NV_in,
      &outC->_L237);
  }
  else if (outC->init) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->_L237,
      (MovementAuthority_t_TrackAtlasTypes *)
        &DEFAULT_MovementAuthority_TrackAtlasTypes);
  }
  if (_L240) {
    /* 1 */
    MA_L23_Postprocessing_TA_MA(
      &outC->_L237,
      (*train_position).LRBG.location.nominal,
      &outC->Context_1);
    outC->available = outC->Context_1.MA_available;
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MA_absolute,
      &outC->Context_1.MA_absolute);
  }
  else if (outC->init) {
    outC->available = kcg_false;
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MA_absolute,
      (MovementAuthority_t_TrackAtlasTypes *)
        &DEFAULT_MovementAuthority_TrackAtlasTypes);
  }
  else {
    outC->available = outC->rem_available;
  }
  outC->init = kcg_false;
  outC->currentEOA = /* 1 */ Get_EOA_TA_MA(&outC->MA_absolute);
  outC->rem_available = outC->available;
  outC->rem__L111 = (*train_position).LRBG.nid_bg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_L23_TA_MA.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

