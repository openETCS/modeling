/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_LevelList_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_LevelList */
void CAST_int_to_DMI_LevelList_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_LevelList::dmi_LevelList_int */DMI_LevelList_int_array_T_DATA *dmi_LevelList_int,
  /* DATA::Variables::CAST_int_to_DMI_LevelList::dmi_LevelList_ct */DMI_LevelList_T_DMI_Types_Pkg *dmi_LevelList_ct)
{
  array__31695 tmp;
  kcg_int i;
  
  (*dmi_LevelList_ct).number = (*dmi_LevelList_int)[0];
  for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_int_to_DMI_level_DATA_Variables(
      (*dmi_LevelList_int)[i + 1],
      (*dmi_LevelList_int)[i + 33],
      &tmp[i]);
  }
  kcg_copy_DMI_level_array_T_DMI_Types_Pkg(
    &(*dmi_LevelList_ct).levelList,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_LevelList_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

