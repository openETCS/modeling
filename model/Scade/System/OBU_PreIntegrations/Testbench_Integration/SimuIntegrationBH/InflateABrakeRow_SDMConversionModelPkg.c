/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeRow_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeRow */
void InflateABrakeRow_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeRow::Akku */ A_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* SDMConversionModelPkg::InflateABrakeRow::A */ A_internal_Type_Obu_BasicTypes_Pkg A,
  /* SDMConversionModelPkg::InflateABrakeRow::Akku_out */ A_internal_Type_Obu_BasicTypes_Pkg *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeRow::ASafeRow */ ASafeRow_T_CalcBrakingCurves_types *ASafeRow)
{
  static kcg_int i;
  /* SDMConversionModelPkg::InflateABrakeRow::_L1 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* SDMConversionModelPkg::InflateABrakeRow::_L2 */
  static A_internal_real_Type_SDM_Types_Pkg _L2;
  /* SDMConversionModelPkg::InflateABrakeRow::_L3 */
  static array_real_100 _L3;
  /* SDMConversionModelPkg::InflateABrakeRow::_L4 */
  static kcg_bool _L4;
  /* SDMConversionModelPkg::InflateABrakeRow::_L5 */
  static kcg_int _L5;
  /* SDMConversionModelPkg::InflateABrakeRow::_L6 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* SDMConversionModelPkg::InflateABrakeRow::_L7 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L7;
  
  _L1 = A;
  _L5 = 0;
  _L4 = _L1 > _L5;
  _L7 = Akku;
  /* 1 */ if (_L4) {
    _L6 = _L1;
  }
  else {
    _L6 = _L7;
  }
  _L2 = /* 1 */ TransformA_intToA_real_SDM_Types_Pkg(_L6);
  /* pow */ for (i = 0; i < 100; i++) {
    _L3[i] = _L2;
  }
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(ASafeRow, &_L3);
  *Akku_out = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeRow_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

