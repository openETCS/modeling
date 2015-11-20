/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Level_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Level_Data_to_int */
void C_DMI_Level_Data_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::dmi_level_data_ct */DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct,
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::dmi_level_data_int */DMI_Level_Data_int_array_T_DATA *dmi_level_data_int)
{
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L20 */ kcg_int _L20;
  
  (*dmi_level_data_int)[1] = (*dmi_level_data_ct).systemTime;
  /* 1 */
  CAST_DMI_level_to_int_DATA_Variables(
    &(*dmi_level_data_ct).level,
    &(*dmi_level_data_int)[2],
    &_L20);
  (*dmi_level_data_int)[3] = _L20;
  (*dmi_level_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_level_data_ct).valid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_DMI_Level_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

