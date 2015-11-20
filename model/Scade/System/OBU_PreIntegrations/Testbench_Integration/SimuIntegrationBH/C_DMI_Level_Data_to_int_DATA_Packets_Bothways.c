/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Level_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Level_Data_to_int */
void C_DMI_Level_Data_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::dmi_level_data_ct */ DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct,
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::dmi_level_data_int */ DMI_Level_Data_int_array_T_DATA *dmi_level_data_int)
{
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L4 */
  static kcg_bool _L4;
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L2 */
  static DMI_level_T_DMI_Types_Pkg _L2;
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L14 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L14;
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L15 */
  static array_int_4 _L15;
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L19 */
  static kcg_int _L19;
  /* DATA::Packets::Bothways::C_DMI_Level_Data_to_int::_L20 */
  static kcg_int _L20;
  
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&_L14, dmi_level_data_ct);
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&_L2, &_L14.level);
  _L3 = _L14.systemTime;
  _L4 = _L14.valid;
  /* 1 */ CAST_DMI_level_to_int_DATA_Variables(&_L2, &_L11, &_L20);
  _L19 = /* 1 */ Bool_to_Int_Utilities(_L4);
  _L15[0] = _L19;
  _L15[1] = _L3;
  _L15[2] = _L11;
  _L15[3] = _L20;
  kcg_copy_DMI_Level_Data_int_array_T_DATA(dmi_level_data_int, &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Level_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

