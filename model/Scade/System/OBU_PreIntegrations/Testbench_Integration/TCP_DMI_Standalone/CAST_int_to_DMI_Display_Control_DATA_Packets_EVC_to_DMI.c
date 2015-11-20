/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control */
void CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::dmi_display_control_int */DMI_Display_Control_int_array_T_DATA *dmi_display_control_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::dmi_display_control_ct */DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_display_control_ct)
{
  (*dmi_display_control_ct).system_clock = (*dmi_display_control_int)[2];
  (*dmi_display_control_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_display_control_int)[0]);
  (*dmi_display_control_ct).cab_is_active = /* 2 */
    Int_to_Bool_Utilities((*dmi_display_control_int)[1]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

