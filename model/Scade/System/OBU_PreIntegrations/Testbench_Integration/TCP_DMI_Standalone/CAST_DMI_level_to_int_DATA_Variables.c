/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_level_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_level_to_int */
void CAST_DMI_level_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_level_to_int::dmi_level_ct */DMI_level_T_DMI_Types_Pkg *dmi_level_ct,
  /* DATA::Variables::CAST_DMI_level_to_int::level_int */kcg_int *level_int,
  /* DATA::Variables::CAST_DMI_level_to_int::nid_stm_int */kcg_int *nid_stm_int)
{
  *nid_stm_int = (*dmi_level_ct).nid_stm;
  *level_int = /* 1 */
    CAST_M_LEVEL_to_int_TM_conversions((*dmi_level_ct).level);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_level_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

