/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Cabin_identifier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_Cabin_identifier */
DMI_Cabin_Identifier_T_DMI_Types_Pkg CAST_int_to_DMI_Cabin_identifier_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_Cabin_identifier::dmi_cabin_identifier_int */kcg_int dmi_cabin_identifier_int)
{
  /* DATA::Variables::CAST_int_to_DMI_Cabin_identifier::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Cabin_identifier::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_DMI_Cabin_identifier::dmi_cabin_identifier_ct */
  static DMI_Cabin_Identifier_T_DMI_Types_Pkg dmi_cabin_identifier_ct;
  
  IfBlock1_clock = dmi_cabin_identifier_int ==
    INT_DMI_Cabin_Identifier_T_cabin_A;
  if (IfBlock1_clock) {
    dmi_cabin_identifier_ct = ENUM_DMI_Cabin_Identifier_T_cabin_A;
  }
  else {
    else_clock_IfBlock1 = dmi_cabin_identifier_int ==
      INT_DMI_Cabin_Identifier_T_cabin_B;
    if (else_clock_IfBlock1) {
      dmi_cabin_identifier_ct = ENUM_DMI_Cabin_Identifier_T_cabin_B;
    }
    else {
      dmi_cabin_identifier_ct = ENUM_DMI_Cabin_Identifier_T_cabin_A;
    }
  }
  return dmi_cabin_identifier_ct;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_Cabin_identifier_DATA_Variables.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

