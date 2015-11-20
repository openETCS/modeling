/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int */
void Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_ct */DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_int */DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int)
{
  if ((*dmi_driver_identifier_ct).valid) {
    /* 1 */
    C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways(
      dmi_driver_identifier_ct,
      dmi_driver_identifier_int);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
      dmi_driver_identifier_int,
      (DMI_Driver_Identifier_int_array_T_DATA *)
        &cDMI_Driver_Identifier_int_DATA_Packets_Bothways);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

