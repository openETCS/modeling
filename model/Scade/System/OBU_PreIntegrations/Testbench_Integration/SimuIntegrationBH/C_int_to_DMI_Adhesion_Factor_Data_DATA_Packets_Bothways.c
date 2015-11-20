/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data */
void C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::dmi_adhesion_factor_data_int */ DMI_Adhesion_Factor_Data_int_array_T_DATA *dmi_adhesion_factor_data_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::dmi_adhesion_factor_data_ct */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesion_factor_data_ct)
{
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::_L2 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L2;
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::_L6 */
  static M_ADHESION _L6;
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::_L8 */
  static DMI_Adhesion_Factor_Data_int_array_T_DATA _L8;
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::_L10 */
  static kcg_bool _L10;
  
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &_L8,
    dmi_adhesion_factor_data_int);
  _L5 = _L8[0];
  _L10 = /* 1 */ Int_to_Bool_Utilities(_L5);
  _L4 = _L8[1];
  _L3 = _L8[2];
  _L6 = /* 1 */ CAST_Int_to_M_ADHESION_TM_conversions(_L3);
  _L2.valid = _L10;
  _L2.systemTime = _L4;
  _L2.adhesionFactor = _L6;
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    dmi_adhesion_factor_data_ct,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

