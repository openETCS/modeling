/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::sub_2_odoDistances */
void sub_2_odoDistances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_2 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_1 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::distance */ LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L1 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L1;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L2 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L2;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L5 */
  static kcg_int _L5;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L17 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L17;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L16 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L16;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L15 */
  static kcg_int _L15;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L14 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L22 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L22;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L21 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L20 */
  static kcg_int _L20;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L19 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L19;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L18 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L18;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L23 */
  static kcg_int _L23;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L24 */
  static kcg_int _L24;
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L31 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L31;
  
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L1, odo_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L2, odo_1);
  _L3 = _L1.o_nominal;
  _L4 = _L2.o_nominal;
  _L5 = _L3 - _L4;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L16, odo_2);
  _L14 = _L16.o_min;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L17, odo_1);
  _L13 = _L17.o_min;
  _L15 = _L14 - _L13;
  _L23 = _L15 - _L5;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L19, odo_2);
  _L22 = _L19.o_max;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L18, odo_1);
  _L21 = _L18.o_max;
  _L20 = _L22 - _L21;
  _L24 = _L20 - _L5;
  _L31.nominal = _L5;
  _L31.d_min = _L23;
  _L31.d_max = _L24;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(distance, &_L31);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sub_2_odoDistances_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

