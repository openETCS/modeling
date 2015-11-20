/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* TM_conversions::DECODE_NID_LRBG */
void DECODE_NID_LRBG_TM_conversions(
  /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */ NID_LRBG nid_lrbg,
  /* TM_conversions::DECODE_NID_LRBG::nid_c */ NID_C *nid_c,
  /* TM_conversions::DECODE_NID_LRBG::nid_bg */ NID_BG *nid_bg)
{
  /* TM_conversions::DECODE_NID_LRBG::_L1 */
  static NID_LRBG _L1;
  /* TM_conversions::DECODE_NID_LRBG::_L2 */
  static NID_C _L2;
  /* TM_conversions::DECODE_NID_LRBG::_L3 */
  static NID_BG _L3;
  /* TM_conversions::DECODE_NID_LRBG::_L4 */
  static kcg_int _L4;
  /* TM_conversions::DECODE_NID_LRBG::_L5 */
  static kcg_int _L5;
  /* TM_conversions::DECODE_NID_LRBG::_L7 */
  static kcg_int _L7;
  /* TM_conversions::DECODE_NID_LRBG::_L6 */
  static NID_LRBG _L6;
  
  _L1 = nid_lrbg;
  _L6 = nid_lrbg;
  _L5 = 100000;
  _L7 = _L6 % _L5;
  _L3 = /* 1 */ CAST_Int_to_NID_BG_TM_conversions(_L7);
  *nid_bg = _L3;
  _L4 = _L1 / _L5;
  _L2 = /* 1 */ CAST_Int_to_NID_C_TM_conversions(_L4);
  *nid_c = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DECODE_NID_LRBG_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

