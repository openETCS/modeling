/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
kcg_bool checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */ OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta)
{
  /* math::Abs::A_Output */
  static kcg_int A_Output_1;
  /* math::Abs::A_Input */
  static kcg_int A_Input_1;
  /* math::Abs::_L8 */
  static kcg_int _L8_1;
  /* math::Abs::_L5 */
  static kcg_int _L5_1;
  /* math::Abs::_L3 */
  static kcg_int _L3_1;
  /* math::Abs::_L2 */
  static kcg_int _L2_1;
  /* math::Abs::_L1 */
  static kcg_bool _L1_1;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L2 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L2;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L3 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L3;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L6 */
  static kcg_int _L6;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L7 */
  static kcg_int _L7;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L8 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L8;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L10 */
  static kcg_bool _L10;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::isLessThanOrEqual */
  static kcg_bool isLessThanOrEqual;
  
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L2, odo_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L3, odo_1);
  _L4 = _L2.o_nominal;
  _L5 = _L3.o_nominal;
  _L6 = _L4 - _L5;
  _L8_1 = 0;
  A_Input_1 = _L6;
  _L5_1 = A_Input_1;
  _L1_1 = _L8_1 <= _L5_1;
  _L3_1 = - _L5_1;
  /* 2 */ if (_L1_1) {
    _L2_1 = _L5_1;
  }
  else {
    _L2_1 = _L3_1;
  }
  A_Output_1 = _L2_1;
  _L7 = A_Output_1;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L8, maxDelta);
  _L9 = _L8.o_nominal;
  _L10 = _L7 <= _L9;
  isLessThanOrEqual = _L10;
  return isLessThanOrEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

