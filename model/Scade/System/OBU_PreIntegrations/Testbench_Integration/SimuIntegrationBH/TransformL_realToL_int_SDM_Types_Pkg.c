/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformL_realToL_int */
L_internal_Type_Obu_BasicTypes_Pkg TransformL_realToL_int_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformL_realToL_int::loc_real */ L_internal_real_Type_SDM_Types_Pkg loc_real)
{
  /* SDM_Types_Pkg::TransformL_realToL_int::_L3 */
  static kcg_real _L3;
  /* SDM_Types_Pkg::TransformL_realToL_int::_L2 */
  static kcg_int _L2;
  /* SDM_Types_Pkg::TransformL_realToL_int::_L1 */
  static kcg_real _L1;
  /* SDM_Types_Pkg::TransformL_realToL_int::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_Types_Pkg::TransformL_realToL_int::loc_int */
  static L_internal_Type_Obu_BasicTypes_Pkg loc_int;
  
  _L4 = loc_real;
  _L3 = 100.0;
  _L1 = _L4 * _L3;
  _L2 = (kcg_int) _L1;
  loc_int = _L2;
  return loc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformL_realToL_int_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

