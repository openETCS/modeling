/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformT_intToT_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformT_intToT_real */
T_internal_real_Type_SDM_Types_Pkg TransformT_intToT_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformT_intToT_real::time_int */ T_internal_Type_Obu_BasicTypes_Pkg time_int)
{
  /* SDM_Types_Pkg::TransformT_intToT_real::_L1 */
  static kcg_real _L1;
  /* SDM_Types_Pkg::TransformT_intToT_real::_L2 */
  static kcg_real _L2;
  /* SDM_Types_Pkg::TransformT_intToT_real::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* SDM_Types_Pkg::TransformT_intToT_real::_L4 */
  static kcg_real _L4;
  /* SDM_Types_Pkg::TransformT_intToT_real::time_real */
  static T_internal_real_Type_SDM_Types_Pkg time_real;
  
  _L3 = time_int;
  _L1 = (kcg_real) _L3;
  _L4 = 1000.0;
  _L2 = _L1 / _L4;
  time_real = _L2;
  return time_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformT_intToT_real_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

