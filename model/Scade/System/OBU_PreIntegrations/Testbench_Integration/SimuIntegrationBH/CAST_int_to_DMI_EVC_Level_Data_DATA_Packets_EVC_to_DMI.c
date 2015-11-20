/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data */
void CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::dmi_evc_level_data_int */ DMI_EVC_Level_Data_int_array_T_DATA *dmi_evc_level_data_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::dmi_evc_level_data_ct */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::_L2 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::_L5 */
  static array_int_65 _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::_L6 */
  static kcg_bool _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::_L7 */
  static DMI_LevelList_T_DMI_Types_Pkg _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::_L11 */
  static DMI_EVC_Level_Data_int_array_T_DATA _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::_L76 */
  static kcg_int _L76;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Level_Data::_L77 */
  static kcg_int _L77;
  
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(&_L11, dmi_evc_level_data_int);
  _L77 = _L11[0];
  _L6 = /* 1 */ Int_to_Bool_Utilities(_L77);
  _L76 = _L11[1];
  kcg_copy_array_int_65(&_L5, (array_int_65 *) &_L11[2]);
  /* 1 */ CAST_int_to_DMI_LevelList_DATA_Variables(&_L5, &_L7);
  _L2.valid = _L6;
  _L2.system_clock = _L76;
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&_L2.levelList, &_L7);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_evc_level_data_ct,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

