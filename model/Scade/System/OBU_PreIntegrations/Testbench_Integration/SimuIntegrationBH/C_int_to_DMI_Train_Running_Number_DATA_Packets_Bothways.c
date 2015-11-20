/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number */
void C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::dmi_train_running_number_int */ DMI_Train_Running_Number_int_array_T_DATA *dmi_train_running_number_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::dmi_train_running_number_ct */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_train_running_number_ct)
{
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::_L2 */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _L2;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::_L6 */
  static NID_OPERATIONAL _L6;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::_L8 */
  static DMI_Train_Running_Number_int_array_T_DATA _L8;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::_L9 */
  static kcg_bool _L9;
  
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
    &_L8,
    dmi_train_running_number_int);
  _L5 = _L8[0];
  _L9 = /* 1 */ Int_to_Bool_Utilities(_L5);
  _L4 = _L8[1];
  _L3 = _L8[2];
  _L6 = /* 1 */ CAST_Int_to_NID_OPERATIONAL_TM_conversions(_L3);
  _L2.valid = _L9;
  _L2.systemTime = _L4;
  _L2.trainRunningNumber = _L6;
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    dmi_train_running_number_ct,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

