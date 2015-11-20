/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_DMI_identifier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_DMI_identifier */
DMI_DMI_Identifier_T_DMI_Types_Pkg CAST_int_to_DMI_DMI_identifier_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_int */kcg_int dmi_dmi_identifier_int)
{
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_ct */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg dmi_dmi_identifier_ct;
  
  IfBlock1_clock = dmi_dmi_identifier_int == INT_DMI_DMI_Identifier_T_DMI_1;
  if (IfBlock1_clock) {
    dmi_dmi_identifier_ct = ENUM_DMI_DMI_Identifier_T_DMI_1;
  }
  else {
    else_clock_IfBlock1 = dmi_dmi_identifier_int ==
      INT_DMI_DMI_Identifier_T_DMI_2;
    if (else_clock_IfBlock1) {
      dmi_dmi_identifier_ct = ENUM_DMI_DMI_Identifier_T_DMI_2;
    }
    else {
      dmi_dmi_identifier_ct = ENUM_DMI_DMI_Identifier_T_DMI_1;
    }
  }
  return dmi_dmi_identifier_ct;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_DMI_identifier_DATA_Variables.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

