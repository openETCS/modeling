/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier */
void Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_int */DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_ct */DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct)
{
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L25 */ kcg_bool _L25;
  
  _L25 = 1 == (*dmi_driver_identifier_int)[0];
  if (_L25) {
    /* 1 */
    C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
      dmi_driver_identifier_int,
      dmi_driver_identifier_ct);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      dmi_driver_identifier_ct,
      (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
        &cDMI_Driver_Identifier_DATA_Packets_Bothways);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

