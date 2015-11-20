/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::limitPositive */
kcg_real limitPositive_SDM_Types_Pkg(
  /* SDM_Types_Pkg::limitPositive::in */ kcg_real in)
{
  /* math::Max::Ma_Output */
  static kcg_real Ma_Output_1;
  /* math::Max::I2 */
  static kcg_real I2_1;
  /* math::Max::I1 */
  static kcg_real I1_1;
  /* math::Max::_L4 */
  static kcg_real _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_real _L2_1;
  /* math::Max::_L1 */
  static kcg_real _L1_1;
  /* SDM_Types_Pkg::limitPositive::_L1 */
  static kcg_real _L1;
  /* SDM_Types_Pkg::limitPositive::_L2 */
  static kcg_real _L2;
  /* SDM_Types_Pkg::limitPositive::_L3 */
  static kcg_real _L3;
  /* SDM_Types_Pkg::limitPositive::limited */
  static kcg_real limited;
  
  _L2 = in;
  I1_1 = _L2;
  _L1_1 = I1_1;
  _L3 = 0.0;
  I2_1 = _L3;
  _L2_1 = I2_1;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L1 = Ma_Output_1;
  limited = _L1;
  return limited;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** limitPositive_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

