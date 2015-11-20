/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "interpolateMfromA_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::interpolateMfromA */
A_internal_Type_Obu_BasicTypes_Pkg interpolateMfromA_SDMConversionModelPkg(
  /* SDMConversionModelPkg::interpolateMfromA::a */ A_internal_Type_Obu_BasicTypes_Pkg a,
  /* SDMConversionModelPkg::interpolateMfromA::a12 */ A_internal_Type_Obu_BasicTypes_Pkg a12,
  /* SDMConversionModelPkg::interpolateMfromA::a23 */ A_internal_Type_Obu_BasicTypes_Pkg a23,
  /* SDMConversionModelPkg::interpolateMfromA::m12 */ A_internal_Type_Obu_BasicTypes_Pkg m12,
  /* SDMConversionModelPkg::interpolateMfromA::m23 */ A_internal_Type_Obu_BasicTypes_Pkg m23)
{
  /* SDMConversionModelPkg::interpolateMfromA::m */
  static A_internal_Type_Obu_BasicTypes_Pkg m1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::then::_L1 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L1_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::m */
  static A_internal_Type_Obu_BasicTypes_Pkg m;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L13 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L13_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L12 */
  static kcg_int _L12_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L11 */
  static kcg_int _L11_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L10 */
  static kcg_int _L10_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L9 */
  static kcg_int _L9_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L8 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L8_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L7 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L7_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L6 */
  static kcg_int _L6_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L4 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L4_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L5 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L5_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L3 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L3_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L2 */
  static kcg_int _L2_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::else::_L1 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L15_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::m */
  static A_internal_Type_Obu_BasicTypes_Pkg m2;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1::else::then::_L1 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L14_IfBlock1;
  /* SDMConversionModelPkg::interpolateMfromA::m */
  static A_internal_Type_Obu_BasicTypes_Pkg m3;
  /* SDMConversionModelPkg::interpolateMfromA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* SDMConversionModelPkg::interpolateMfromA::m */
  static A_internal_Type_Obu_BasicTypes_Pkg m6;
  
  IfBlock1_clock = a <= a12;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = m12;
    m1 = _L1_IfBlock1;
    m6 = m1;
  }
  else {
    else_clock_IfBlock1 = a23 <= a;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L14_IfBlock1 = m23;
      m3 = _L14_IfBlock1;
      m = m3;
    }
    else {
      _L13_IfBlock1 = m12;
      _L7_IfBlock1 = m23;
      _L8_IfBlock1 = m12;
      _L9_IfBlock1 = _L7_IfBlock1 - _L8_IfBlock1;
      _L15_IfBlock1 = a;
      _L3_IfBlock1 = a12;
      _L2_IfBlock1 = _L15_IfBlock1 - _L3_IfBlock1;
      _L10_IfBlock1 = _L9_IfBlock1 * _L2_IfBlock1;
      _L4_IfBlock1 = a23;
      _L5_IfBlock1 = a12;
      _L6_IfBlock1 = _L4_IfBlock1 - _L5_IfBlock1;
      _L11_IfBlock1 = _L10_IfBlock1 / _L6_IfBlock1;
      _L12_IfBlock1 = _L13_IfBlock1 + _L11_IfBlock1;
      m2 = _L12_IfBlock1;
      m = m2;
    }
    m6 = m;
  }
  return m6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** interpolateMfromA_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

