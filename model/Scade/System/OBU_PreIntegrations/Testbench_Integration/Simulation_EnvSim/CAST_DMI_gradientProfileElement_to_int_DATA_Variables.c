/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_gradientProfileElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_gradientProfileElement_to_int */
void CAST_DMI_gradientProfileElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::dmi_gradientProfileElement */DMI_gradientProfileElement_T_DMI_Types_Pkg *dmi_gradientProfileElement,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::valid */kcg_int *valid,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::start_section */kcg_int *start_section,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::end_section */kcg_int *end_section,
  /* DATA::Variables::CAST_DMI_gradientProfileElement_to_int::gradiant */kcg_int *gradiant)
{
  *gradiant = (*dmi_gradientProfileElement).gradient;
  *end_section = (*dmi_gradientProfileElement).end_section;
  *start_section = (*dmi_gradientProfileElement).begin_section;
  *valid = /* 1 */ Bool_to_Int_Utilities((*dmi_gradientProfileElement).valid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_gradientProfileElement_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

