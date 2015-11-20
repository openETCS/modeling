/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Preprocessing_TA_Gradient.h"

/* TA_Gradient::GP_Preprocessing */
void GP_Preprocessing_TA_Gradient(
  /* TA_Gradient::GP_Preprocessing::p21 */ P021_OBU_T_TM *p21,
  /* TA_Gradient::GP_Preprocessing::reset */ kcg_bool reset,
  /* TA_Gradient::GP_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Gradient::GP_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::GP */ GradientProfile_t_TrackAtlasTypes *GP)
{
  static kcg_bool noname;
  /* TA_Gradient::GP_Preprocessing::_L1 */
  static P021_OBU_T_TM _L1;
  /* TA_Gradient::GP_Preprocessing::_L18 */
  static kcg_bool _L18;
  /* TA_Gradient::GP_Preprocessing::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TA_Gradient::GP_Preprocessing::_L15 */
  static kcg_bool _L15;
  /* TA_Gradient::GP_Preprocessing::_L14 */
  static GradientProfile_t_TrackAtlasTypes _L14;
  /* TA_Gradient::GP_Preprocessing::_L13 */
  static GradientProfile_t_TrackAtlasTypes _L13;
  /* TA_Gradient::GP_Preprocessing::_L11 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* TA_Gradient::GP_Preprocessing::_L21 */
  static kcg_bool _L21;
  
  kcg_copy_P021_OBU_T_TM(&_L1, p21);
  _L11 = pos_LRBG;
  /* 1 */ GP_Convert_P21_to_DistanceProfile_TA_Gradient(&_L1, &_L14);
  _L18 = msg_prvLRBG;
  _L15 = msg_LRBG;
  _L16 = pos_prvLRBG;
  /* 1 */
  MoveGPSectionsAbsolute_TA_Lib_internal(&_L14, _L18, _L15, _L11, _L16, &_L13);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GP, &_L13);
  _L21 = reset;
  noname = _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Preprocessing_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

