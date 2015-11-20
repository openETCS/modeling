/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_gradientProfileElement_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_gradientProfileElement */
void CAST_int_to_DMI_gradientProfileElement_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::valid */kcg_int valid,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::begin_section */kcg_int begin_section,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::end_section */kcg_int end_section,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::gradiant */kcg_int gradiant,
  /* DATA::Variables::CAST_int_to_DMI_gradientProfileElement::dmi_gradientProfileElemen */DMI_gradientProfileElement_T_DMI_Types_Pkg *dmi_gradientProfileElemen)
{
  (*dmi_gradientProfileElemen).begin_section = begin_section;
  (*dmi_gradientProfileElemen).end_section = end_section;
  (*dmi_gradientProfileElemen).gradient = gradiant;
  (*dmi_gradientProfileElemen).valid = /* 1 */ Int_to_Bool_Utilities(valid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_gradientProfileElement_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

