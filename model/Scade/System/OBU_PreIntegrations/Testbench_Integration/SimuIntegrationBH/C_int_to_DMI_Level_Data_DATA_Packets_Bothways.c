/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Level_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Level_Data */
void C_int_to_DMI_Level_Data_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::dmi_level_data_int */ DMI_Level_Data_int_array_T_DATA *dmi_level_data_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::dmi_level_data_ct */ DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct)
{
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L5 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L5;
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L8 */
  static DMI_Level_Data_int_array_T_DATA _L8;
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L9 */
  static kcg_bool _L9;
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::_L12 */
  static DMI_level_T_DMI_Types_Pkg _L12;
  
  kcg_copy_DMI_Level_Data_int_array_T_DATA(&_L8, dmi_level_data_int);
  _L4 = _L8[0];
  _L9 = /* 1 */ Int_to_Bool_Utilities(_L4);
  _L3 = _L8[1];
  _L2 = _L8[2];
  _L10 = _L8[3];
  /* 1 */ CAST_int_to_DMI_level_DATA_Variables(_L2, _L10, &_L12);
  _L5.valid = _L9;
  _L5.systemTime = _L3;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&_L5.level, &_L12);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(dmi_level_data_ct, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Level_Data_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

