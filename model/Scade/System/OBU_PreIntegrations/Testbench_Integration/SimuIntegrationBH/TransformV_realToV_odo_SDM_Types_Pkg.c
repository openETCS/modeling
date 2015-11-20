/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_realToV_odo */
V_odometry_Type_Obu_BasicTypes_Pkg TransformV_realToV_odo_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_real */ V_internal_real_Type_SDM_Types_Pkg v_real)
{
  /* SDM_Types_Pkg::TransformV_realToV_odo::_L3 */
  static kcg_real _L3;
  /* SDM_Types_Pkg::TransformV_realToV_odo::_L2 */
  static kcg_int _L2;
  /* SDM_Types_Pkg::TransformV_realToV_odo::_L1 */
  static kcg_real _L1;
  /* SDM_Types_Pkg::TransformV_realToV_odo::_L4 */
  static V_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_odo */
  static V_odometry_Type_Obu_BasicTypes_Pkg v_odo;
  
  _L1 = 100.0;
  _L4 = v_real;
  _L3 = _L4 * _L1;
  _L2 = (kcg_int) _L3;
  v_odo = _L2;
  return v_odo;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_realToV_odo_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

