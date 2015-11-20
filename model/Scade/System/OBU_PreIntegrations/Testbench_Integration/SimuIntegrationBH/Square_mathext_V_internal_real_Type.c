/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Square_mathext_V_internal_real_Type.h"

/* mathext::Square */
kcg_real Square_mathext_V_internal_real_Type(
  /* mathext::Square::Square_In */ kcg_real Square_In)
{
  /* mathext::Square::_L1 */
  static kcg_real _L1;
  /* mathext::Square::_L2 */
  static kcg_real _L2;
  /* mathext::Square::Square_Out */
  static kcg_real Square_Out;
  
  _L1 = Square_In;
  _L2 = _L1 * _L1;
  Square_Out = _L2;
  return Square_Out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Square_mathext_V_internal_real_Type.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

