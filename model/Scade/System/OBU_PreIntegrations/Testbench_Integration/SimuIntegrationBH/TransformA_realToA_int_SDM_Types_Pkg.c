/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformA_realToA_int */
A_internal_Type_Obu_BasicTypes_Pkg TransformA_realToA_int_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformA_realToA_int::acc_real */ A_internal_real_Type_SDM_Types_Pkg acc_real)
{
  /* SDM_Types_Pkg::TransformA_realToA_int::_L1 */
  static A_internal_real_Type_SDM_Types_Pkg _L1;
  /* SDM_Types_Pkg::TransformA_realToA_int::_L3 */
  static kcg_real _L3;
  /* SDM_Types_Pkg::TransformA_realToA_int::_L4 */
  static kcg_real _L4;
  /* SDM_Types_Pkg::TransformA_realToA_int::_L5 */
  static kcg_int _L5;
  /* SDM_Types_Pkg::TransformA_realToA_int::acc_int */
  static A_internal_Type_Obu_BasicTypes_Pkg acc_int;
  
  _L1 = acc_real;
  _L4 = 100.0;
  _L3 = _L1 * _L4;
  _L5 = (kcg_int) _L3;
  acc_int = _L5;
  return acc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformA_realToA_int_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

