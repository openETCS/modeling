/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Postprocessing_TA_SSP.h"

#ifndef KCG_USER_DEFINED_INIT
void SSP_Postprocessing_init_TA_SSP(outC_SSP_Postprocessing_TA_SSP *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->_L4[i].valid = kcg_true;
    outC->_L4[i].d_static_abs = 0;
    outC->_L4[i].d_static_LRBG = 0;
    outC->_L4[i].q_train_length_corr = kcg_true;
    outC->_L4[i].v_static = 0;
  }
  for (i1 = 0; i1 < 50; i1++) {
    outC->SSP[i1].valid = kcg_true;
    outC->SSP[i1].d_static_abs = 0;
    outC->SSP[i1].d_static_LRBG = 0;
    outC->SSP[i1].q_train_length_corr = kcg_true;
    outC->SSP[i1].v_static = 0;
  }
  outC->available = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Postprocessing_reset_TA_SSP(outC_SSP_Postprocessing_TA_SSP *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_SSP::SSP_Postprocessing */
void SSP_Postprocessing_TA_SSP(
  /* TA_SSP::SSP_Postprocessing::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Postprocessing_TA_SSP *outC)
{
  /* TA_SSP::SSP_Postprocessing::_L7 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* TA_SSP::SSP_Postprocessing::_L6 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* TA_SSP::SSP_Postprocessing::_L2 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L2;
  /* TA_SSP::SSP_Postprocessing::_L3 */
  static kcg_bool _L3;
  /* TA_SSP::SSP_Postprocessing::_L1 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L1;
  /* TA_SSP::SSP_Postprocessing::_L8 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L8;
  /* TA_SSP::SSP_Postprocessing::_L9 */
  static kcg_bool _L9;
  /* TA_SSP::SSP_Postprocessing::_L10 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L10;
  
  /* fby_1_init_1 */ if (outC->init) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &_L1,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L1, &outC->_L4);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L8, Profile_in);
  _L7 = pos_LRBG;
  _L6 = pos_prvLRBG;
  _L9 = there_is_prvLRBG;
  _L10 = train_length;
  /* 1 */
  SSP_Position_SSP_with_BGs_TA_SSP(
    &_L8,
    _L7,
    _L6,
    _L9,
    _L10,
    &_L1,
    &_L2,
    &_L3,
    &outC->_L4);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &_L2);
  outC->available = _L3;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Postprocessing_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

