/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data */
void CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::dmi_evc_level_data_int */DMI_EVC_Level_Data_int_array_T_DATA *dmi_evc_level_data_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::dmi_evc_level_data_ct */DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct)
{
  (*dmi_evc_level_data_ct).system_clock = (*dmi_evc_level_data_int)[1];
  (*dmi_evc_level_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_evc_level_data_int)[0]);
  /* 1 */
  CAST_int_to_DMI_LevelList_DATA_Variables(
    (DMI_LevelList_int_array_T_DATA *) &(*dmi_evc_level_data_int)[2],
    &(*dmi_evc_level_data_ct).levelList);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

