/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_level_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_level */
void CAST_int_to_DMI_level_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_level::level_int */kcg_int level_int,
  /* DATA::Variables::CAST_int_to_DMI_level::nid_stm_int */kcg_int nid_stm_int,
  /* DATA::Variables::CAST_int_to_DMI_level::dmi_level_ct */DMI_level_T_DMI_Types_Pkg *dmi_level_ct)
{
  (*dmi_level_ct).nid_stm = nid_stm_int;
  (*dmi_level_ct).level = /* 1 */ CAST_Int_to_M_LEVEL_TM_conversions(level_int);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_level_DATA_Variables.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

