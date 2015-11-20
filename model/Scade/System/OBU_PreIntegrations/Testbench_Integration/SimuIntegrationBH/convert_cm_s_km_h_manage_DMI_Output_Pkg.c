/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convert_cm_s_km_h_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::convert_cm_s_km_h */
V_internal_Type_Obu_BasicTypes_Pkg convert_cm_s_km_h_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::cm_s */ V_odometry_Type_Obu_BasicTypes_Pkg cm_s)
{
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L1 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L3 */
  static kcg_int _L3;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L4 */
  static kcg_int _L4;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L5 */
  static kcg_int _L5;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L6 */
  static kcg_int _L6;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L7 */
  static kcg_bool _L7;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L8 */
  static kcg_int _L8;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L9 */
  static kcg_int _L9;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::_L10 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L10;
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::km_h */
  static V_internal_Type_Obu_BasicTypes_Pkg km_h;
  
  _L1 = cm_s;
  _L8 = 0;
  _L7 = _L1 >= _L8;
  _L4 = 36;
  _L3 = _L1 * _L4;
  _L6 = 1000;
  _L5 = _L3 / _L6;
  _L10 = cm_s;
  /* 1 */ if (_L7) {
    _L9 = _L5;
  }
  else {
    _L9 = _L10;
  }
  km_h = _L9;
  return km_h;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** convert_cm_s_km_h_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

