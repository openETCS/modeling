/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_realToV_int */
V_internal_Type_Obu_BasicTypes_Pkg TransformV_realToV_int_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_realToV_int::v_real */ V_internal_real_Type_SDM_Types_Pkg v_real)
{
  /* SDM_Types_Pkg::TransformV_realToV_int::_L3 */
  static kcg_real _L3;
  /* SDM_Types_Pkg::TransformV_realToV_int::_L2 */
  static kcg_int _L2;
  /* SDM_Types_Pkg::TransformV_realToV_int::_L1 */
  static kcg_real _L1;
  /* SDM_Types_Pkg::TransformV_realToV_int::_L4 */
  static V_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_Types_Pkg::TransformV_realToV_int::v_int */
  static V_internal_Type_Obu_BasicTypes_Pkg v_int;
  
  _L1 = 3.6;
  _L4 = v_real;
  _L3 = _L4 * _L1;
  _L2 = (kcg_int) _L3;
  v_int = _L2;
  return v_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_realToV_int_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

