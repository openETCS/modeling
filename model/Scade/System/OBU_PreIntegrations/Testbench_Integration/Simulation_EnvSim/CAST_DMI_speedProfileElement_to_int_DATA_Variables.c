/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_speedProfileElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_speedProfileElement_to_int */
void CAST_DMI_speedProfileElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::dmi_speedProfileElemen */DMI_speedProfileElement_T_DMI_Types_Pkg *dmi_speedProfileElemen,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::valid */kcg_int *valid,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::loc_abs */kcg_int *loc_abs,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::loc_lrbg */kcg_int *loc_lrbg,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::mrs */kcg_int *mrs)
{
  *mrs = (*dmi_speedProfileElemen).MRS;
  *loc_lrbg = (*dmi_speedProfileElemen).Loc_LRBG;
  *loc_abs = (*dmi_speedProfileElemen).Loc_Abs;
  *valid = /* 1 */ Bool_to_Int_Utilities((*dmi_speedProfileElemen).valid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_speedProfileElement_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

