/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_odoToV_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_odoToV_real */
V_internal_real_Type_SDM_Types_Pkg TransformV_odoToV_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_odoToV_real::v_odo */ V_odometry_Type_Obu_BasicTypes_Pkg v_odo)
{
  /* SDM_Types_Pkg::TransformV_odoToV_real::_L1 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1;
  /* SDM_Types_Pkg::TransformV_odoToV_real::_L2 */
  static kcg_real _L2;
  /* SDM_Types_Pkg::TransformV_odoToV_real::_L3 */
  static kcg_real _L3;
  /* SDM_Types_Pkg::TransformV_odoToV_real::_L4 */
  static kcg_real _L4;
  /* SDM_Types_Pkg::TransformV_odoToV_real::v_real */
  static V_internal_real_Type_SDM_Types_Pkg v_real;
  
  _L1 = v_odo;
  _L2 = (kcg_real) _L1;
  _L4 = 100.0;
  _L3 = _L2 / _L4;
  v_real = _L3;
  return v_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_odoToV_real_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

