/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1 */
void Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::dmi_icon_ack_ct */DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int1::dmi_icon_ack_int */DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int)
{
  if ((*dmi_icon_ack_ct).valid) {
    /* 1 */
    C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC(
      dmi_icon_ack_ct,
      dmi_icon_ack_int);
  }
  else {
    kcg_copy_DMI_Icon_Ack_int_array_T_DATA(
      dmi_icon_ack_int,
      (DMI_Icon_Ack_int_array_T_DATA *)
        &cDMI_Icon_Ack_int_array_DATA_Packets_DMI_to_EVC);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

