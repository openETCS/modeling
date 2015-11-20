/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Postprocessing_TA_Gradient.h"

#ifndef KCG_USER_DEFINED_INIT
void GP_Postprocessing_init_TA_Gradient(
  outC_GP_Postprocessing_TA_Gradient *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->_L4[i].valid = kcg_true;
    outC->_L4[i].Loc_Absolute = 0;
    outC->_L4[i].Loc_LRBG = 0;
    outC->_L4[i].Gradient = 0;
    outC->_L4[i].L_Gradient = 0;
  }
  for (i1 = 0; i1 < 50; i1++) {
    outC->GP[i1].valid = kcg_true;
    outC->GP[i1].Loc_Absolute = 0;
    outC->GP[i1].Loc_LRBG = 0;
    outC->GP[i1].Gradient = 0;
    outC->GP[i1].L_Gradient = 0;
  }
  outC->available = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Postprocessing_reset_TA_Gradient(
  outC_GP_Postprocessing_TA_Gradient *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_Gradient::GP_Postprocessing */
void GP_Postprocessing_TA_Gradient(
  /* TA_Gradient::GP_Postprocessing::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Postprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Postprocessing::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient *outC)
{
  /* TA_Gradient::GP_Postprocessing::_L7 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* TA_Gradient::GP_Postprocessing::_L6 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* TA_Gradient::GP_Postprocessing::_L2 */
  static GradientProfile_t_TrackAtlasTypes _L2;
  /* TA_Gradient::GP_Postprocessing::_L3 */
  static kcg_bool _L3;
  /* TA_Gradient::GP_Postprocessing::_L1 */
  static GradientProfile_t_TrackAtlasTypes _L1;
  /* TA_Gradient::GP_Postprocessing::_L8 */
  static GradientProfile_t_TrackAtlasTypes _L8;
  /* TA_Gradient::GP_Postprocessing::_L9 */
  static kcg_bool _L9;
  
  /* fby_1_init_1 */ if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &_L1,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L1, &outC->_L4);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L8, Profile_in);
  _L7 = pos_LRBG;
  _L6 = pos_prvLRBG;
  _L9 = there_is_prvLRBG;
  /* 1 */
  GP_Position_GP_with_BGs_TA_Gradient(
    &_L8,
    _L7,
    _L6,
    _L9,
    &_L1,
    &_L2,
    &_L3,
    &outC->_L4);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &_L2);
  outC->available = _L3;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Postprocessing_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

