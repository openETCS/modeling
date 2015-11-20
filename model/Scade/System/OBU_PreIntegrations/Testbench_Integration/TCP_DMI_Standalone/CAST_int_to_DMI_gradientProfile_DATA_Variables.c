/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfile_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfile */
void CAST_int_to_DMI_gradientProfile_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::dmi_gradientProfile_int */DMI_gradientProfile_int_arrayT *dmi_gradientProfile_int,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfile::dmi_gradientProfile */DMI_gradientProfile_T_DMI_Types_Pkg *dmi_gradientProfile)
{
  array__31585 tmp;
  kcg_int i;
  
  (*dmi_gradientProfile).profileChanged = /* 1 */
    Int_to_Bool_Utilities((*dmi_gradientProfile_int)[0]);
  for (i = 0; i < 32; i++) {
    /* 1 */
    CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
      (*dmi_gradientProfile_int)[i + 1],
      (*dmi_gradientProfile_int)[i + 33],
      (*dmi_gradientProfile_int)[i + 65],
      (*dmi_gradientProfile_int)[i + 97],
      &tmp[i]);
  }
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &(*dmi_gradientProfile).gradientProfiles,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_gradientProfile_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

