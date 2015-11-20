/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeRow_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeRow */
void InflateABrakeRow_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeRow::Akku */A_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* SDMConversionModelPkg::InflateABrakeRow::A */A_internal_Type_Obu_BasicTypes_Pkg A,
  /* SDMConversionModelPkg::InflateABrakeRow::Akku_out */A_internal_Type_Obu_BasicTypes_Pkg *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeRow::ASafeRow */ASafeRow_T_CalcBrakingCurves_types *ASafeRow)
{
  static kcg_int i;
  /* SDMConversionModelPkg::InflateABrakeRow::_L2 */
  static A_internal_real_Type_SDM_Types_Pkg _L2;
  
  if (A > 0) {
    *Akku_out = A;
  }
  else {
    *Akku_out = Akku;
  }
  _L2 = /* 1 */ TransformA_intToA_real_SDM_Types_Pkg(*Akku_out);
  for (i = 0; i < 100; i++) {
    (*ASafeRow)[i] = _L2;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InflateABrakeRow_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

