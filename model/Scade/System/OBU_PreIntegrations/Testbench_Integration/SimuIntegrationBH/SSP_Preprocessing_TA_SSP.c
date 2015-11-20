/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Preprocessing_TA_SSP.h"

/* TA_SSP::SSP_Preprocessing */
void SSP_Preprocessing_TA_SSP(
  /* TA_SSP::SSP_Preprocessing::p27v1 */ P027V1_OBU_T_TM_baseline2 *p27v1,
  /* TA_SSP::SSP_Preprocessing::reset */ kcg_bool reset,
  /* TA_SSP::SSP_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_SSP::SSP_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::SSP */ StaticSpeedProfile_t_TrackAtlasTypes *SSP)
{
  static kcg_bool noname;
  /* TA_SSP::SSP_Preprocessing::_L1 */
  static P027V1_OBU_T_TM_baseline2 _L1;
  /* TA_SSP::SSP_Preprocessing::_L18 */
  static kcg_bool _L18;
  /* TA_SSP::SSP_Preprocessing::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TA_SSP::SSP_Preprocessing::_L15 */
  static kcg_bool _L15;
  /* TA_SSP::SSP_Preprocessing::_L14 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L14;
  /* TA_SSP::SSP_Preprocessing::_L13 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L13;
  /* TA_SSP::SSP_Preprocessing::_L11 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* TA_SSP::SSP_Preprocessing::_L21 */
  static kcg_bool _L21;
  
  kcg_copy_P027V1_OBU_T_TM_baseline2(&_L1, p27v1);
  _L11 = pos_LRBG;
  /* 1 */ SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(&_L1, &_L14);
  _L18 = msg_prvLRBG;
  _L15 = msg_LRBG;
  _L16 = pos_prvLRBG;
  /* 1 */
  MoveSSPSectionsAbsolute_TA_Lib_internal(&_L14, _L18, _L15, _L11, _L16, &_L13);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(SSP, &_L13);
  _L21 = reset;
  noname = _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Preprocessing_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

