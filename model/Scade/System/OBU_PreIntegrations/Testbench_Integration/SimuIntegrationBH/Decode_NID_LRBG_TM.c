/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_LRBG_TM.h"

/* TM::Decode_NID_LRBG */
void Decode_NID_LRBG_TM(
  /* TM::Decode_NID_LRBG::NID_LRBG_in */ NID_LRBG NID_LRBG_in,
  /* TM::Decode_NID_LRBG::NID_C_out */ NID_C *NID_C_out,
  /* TM::Decode_NID_LRBG::NID_BG_out */ NID_BG *NID_BG_out)
{
  /* TM::Decode_NID_LRBG::_L1 */
  static NID_LRBG _L1;
  /* TM::Decode_NID_LRBG::_L2 */
  static kcg_int _L2;
  /* TM::Decode_NID_LRBG::_L3 */
  static kcg_int _L3;
  /* TM::Decode_NID_LRBG::_L4 */
  static kcg_int _L4;
  
  _L1 = NID_LRBG_in;
  _L2 = 100000;
  _L3 = _L1 / _L2;
  *NID_C_out = _L3;
  _L4 = _L1 % _L2;
  *NID_BG_out = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Decode_NID_LRBG_TM.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

