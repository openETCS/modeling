/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons */
void CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::dmi_icons_int */DMI_Icons_int_array_T_DATA *dmi_icons_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::dmi_icons_ct */DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_icons_ct)
{
  (*dmi_icons_ct).system_clock = (*dmi_icons_int)[1];
  (*dmi_icons_ct).DMI_nid_icon_rank = (*dmi_icons_int)[5];
  (*dmi_icons_ct).DMI_nid_area_rank = (*dmi_icons_int)[7];
  (*dmi_icons_ct).DMI_nid_icon_identifier = (*dmi_icons_int)[8];
  (*dmi_icons_ct).valid = /* 1 */ Int_to_Bool_Utilities((*dmi_icons_int)[0]);
  (*dmi_icons_ct).DMI_m_icon_control_flag = /* 1 */
    CAST_int_to_Icon_control_flag_DATA_Variables((*dmi_icons_int)[2]);
  (*dmi_icons_ct).DMI_m_icon_flashing_freq = /* 1 */
    CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables((*dmi_icons_int)[3]);
  (*dmi_icons_ct).DMI_nid_icon_group = /* 1 */
    CAST_int_to_Icon_group_DATA_Variables((*dmi_icons_int)[4]);
  (*dmi_icons_ct).DMI_nid_area_group = /* 1 */
    CAST_int_to_Area_group_DATA_Variables((*dmi_icons_int)[6]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

