/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSpeeds_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeSpeeds */
void InflateABrakeSpeeds_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku */V_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::V */V_internal_Type_Obu_BasicTypes_Pkg V,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku_out */V_internal_Type_Obu_BasicTypes_Pkg *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Vint */V_internal_real_Type_SDM_Types_Pkg *Vint)
{
  if (V > 0) {
    *Akku_out = V;
  }
  else {
    *Akku_out = Akku;
  }
  *Vint = /* 1 */ TransformV_intToV_real_SDM_Types_Pkg(*Akku_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InflateABrakeSpeeds_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

