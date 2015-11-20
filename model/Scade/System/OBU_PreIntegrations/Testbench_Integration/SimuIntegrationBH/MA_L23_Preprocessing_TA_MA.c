/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Preprocessing_TA_MA.h"

/* TA_MA::MA_L23_Preprocessing */
void MA_L23_Preprocessing_TA_MA(
  /* TA_MA::MA_L23_Preprocessing::p15 */ P015_OBU_T_TM *p15,
  /* TA_MA::MA_L23_Preprocessing::reset */ kcg_bool reset,
  /* TA_MA::MA_L23_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_MA::MA_L23_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::MA_L23_Preprocessing::MA */ MovementAuthority_t_TrackAtlasTypes *MA)
{
  static kcg_bool noname;
  /* TA_MA::MA_L23_Preprocessing::_L1 */
  static P015_OBU_T_TM _L1;
  /* TA_MA::MA_L23_Preprocessing::_L18 */
  static kcg_bool _L18;
  /* TA_MA::MA_L23_Preprocessing::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TA_MA::MA_L23_Preprocessing::_L15 */
  static kcg_bool _L15;
  /* TA_MA::MA_L23_Preprocessing::_L14 */
  static MovementAuthority_t_TrackAtlasTypes _L14;
  /* TA_MA::MA_L23_Preprocessing::_L13 */
  static MovementAuthority_t_TrackAtlasTypes _L13;
  /* TA_MA::MA_L23_Preprocessing::_L11 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* TA_MA::MA_L23_Preprocessing::_L21 */
  static kcg_bool _L21;
  /* TA_MA::MA_L23_Preprocessing::_L22 */
  static P003V1_OBU_T_TM_baseline2 _L22;
  
  kcg_copy_P015_OBU_T_TM(&_L1, p15);
  _L11 = pos_LRBG;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L22, NV_in);
  /* 1 */ MA_Convert_P15_to_DistanceProfile_TA_MA(&_L1, &_L22, &_L14);
  _L18 = msg_prvLRBG;
  _L15 = msg_LRBG;
  _L16 = pos_prvLRBG;
  /* 1 */ MoveMAAbsolute_TA_Lib_internal(&_L14, _L18, _L15, _L11, _L16, &_L13);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(MA, &_L13);
  _L21 = reset;
  noname = _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_L23_Preprocessing_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

