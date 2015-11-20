/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_LRBG */
NID_LRBG CAST_Int_to_NID_LRBG_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_LRBG::Int_in */ kcg_int Int_in)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_NID_LRBG::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_NID_LRBG::_L5 */
  static kcg_int _L5;
  /* TM_conversions::CAST_Int_to_NID_LRBG::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_Int_to_NID_LRBG::_L3 */
  static kcg_int _L3;
  /* TM_conversions::CAST_Int_to_NID_LRBG::_L2 */
  static kcg_bool _L2;
  /* TM_conversions::CAST_Int_to_NID_LRBG::NID_LRBG_out */
  static NID_LRBG NID_LRBG_out;
  
  _L1 = Int_in;
  NID_LRBG_out = _L1;
  _L5 = 0;
  _L4 = _L1 < _L5;
  noname = _L4;
  _L3 = 16777215;
  _L2 = _L1 > _L3;
  _1_noname = _L2;
  return NID_LRBG_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_LRBG_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

