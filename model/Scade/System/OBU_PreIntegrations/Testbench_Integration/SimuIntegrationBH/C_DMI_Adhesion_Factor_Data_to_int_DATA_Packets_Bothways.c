/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int */
void C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::dmi_adhesion_factor_data_ct */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesion_factor_data_ct,
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::dmi_adhesion_factor_data_int */ DMI_Adhesion_Factor_Data_int_array_T_DATA *dmi_adhesion_factor_data_int)
{
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::_L2 */
  static array_int_3 _L2;
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::_L5 */
  static kcg_bool _L5;
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::_L4 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::_L3 */
  static M_ADHESION _L3;
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::_L6 */
  static kcg_int _L6;
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::_L14 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L14;
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::_L19 */
  static kcg_int _L19;
  
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_L14,
    dmi_adhesion_factor_data_ct);
  _L5 = _L14.valid;
  _L19 = /* 1 */ Bool_to_Int_Utilities(_L5);
  _L4 = _L14.systemTime;
  _L3 = _L14.adhesionFactor;
  _L6 = /* 1 */ CAST_M_ADHESION_to_int_TM_conversions(_L3);
  _L2[0] = _L19;
  _L2[1] = _L4;
  _L2[2] = _L6;
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    dmi_adhesion_factor_data_int,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

