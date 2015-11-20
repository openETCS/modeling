/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::overlapOf_2_Locations */
void overlapOf_2_Locations_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::overlap */ kcg_bool *overlap)
{
  /* math::Min::Mi_Output */
  static kcg_int Mi_Output_1;
  /* math::Min::I2 */
  static kcg_int I2_11;
  /* math::Min::I1 */
  static kcg_int I1_12;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_int _L24_1;
  /* math::Min::_L22 */
  static kcg_int _L22_1;
  /* math::Min::_L21 */
  static kcg_int _L21_1;
  /* math::Max::Ma_Output */
  static kcg_int Ma_Output_1;
  /* math::Max::I2 */
  static kcg_int I2_1;
  /* math::Max::I1 */
  static kcg_int I1_1;
  /* math::Max::_L4 */
  static kcg_int _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_int _L2_1;
  /* math::Max::_L1 */
  static kcg_int _L1_1;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L2;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L6 */
  static kcg_int _L6;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L7 */
  static kcg_int _L7;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L10 */
  static kcg_int _L10;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L19 */
  static kcg_int _L19;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L18 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L18;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L17 */
  static kcg_int _L17;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L15 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L15;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L14 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L12 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L12;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L11 */
  static kcg_int _L11;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L20 */
  static kcg_bool _L20;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L21 */
  static kcg_int _L21;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L22 */
  static kcg_int _L22;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L23 */
  static kcg_int _L23;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L24 */
  static kcg_int _L24;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L31 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L31;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L32 */
  static kcg_int _L32;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L33 */
  static kcg_int _L33;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L1, loc_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L2, loc_2);
  _L3 = _L1.d_max;
  _L5 = _L1.nominal;
  _L6 = _L3 + _L5;
  _L8 = _L2.d_max;
  _L9 = _L2.nominal;
  _L7 = _L8 + _L9;
  I1_12 = _L6;
  _L21_1 = I1_12;
  I2_11 = _L7;
  _L22_1 = I2_11;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L10 = Mi_Output_1;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L12, loc_1);
  _L14 = _L12.d_min;
  _L16 = _L12.nominal;
  _L11 = _L14 + _L16;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L18, loc_2);
  _L13 = _L18.d_min;
  _L15 = _L18.nominal;
  _L17 = _L13 + _L15;
  I1_1 = _L11;
  _L1_1 = I1_1;
  I2_1 = _L17;
  _L2_1 = I2_1;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L19 = Ma_Output_1;
  _L20 = _L10 >= _L19;
  *overlap = _L20;
  _L21 = _L10 - _L19;
  _L23 = 2;
  _L22 = _L21 / _L23;
  _L24 = _L22 + _L19;
  _L33 = _L19 - _L24;
  _L32 = _L10 - _L24;
  _L31.nominal = _L24;
  _L31.d_min = _L33;
  _L31.d_max = _L32;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(loc, &_L31);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** overlapOf_2_Locations_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

