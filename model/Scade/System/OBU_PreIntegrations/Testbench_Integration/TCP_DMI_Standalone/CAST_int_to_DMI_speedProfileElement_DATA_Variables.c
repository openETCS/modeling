/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_speedProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_speedProfileElement */
void CAST_int_to_DMI_speedProfileElement_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::valid */kcg_int valid,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::loc_abs */kcg_int loc_abs,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::loc_lrbg */kcg_int loc_lrbg,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::mrs */kcg_int mrs,
  /* DATA::Variables::CAST_int_to_DMI_speedProfileElement::dmi_speedProfileElemen */DMI_speedProfileElement_T_DMI_Types_Pkg *dmi_speedProfileElemen)
{
  (*dmi_speedProfileElemen).Loc_Abs = loc_abs;
  (*dmi_speedProfileElemen).Loc_LRBG = loc_lrbg;
  (*dmi_speedProfileElemen).MRS = mrs;
  (*dmi_speedProfileElemen).valid = /* 1 */ Int_to_Bool_Utilities(valid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_speedProfileElement_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

