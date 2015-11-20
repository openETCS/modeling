/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int */
void C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int::dmi_train_running_number_ct */DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_train_running_number_ct,
  /* DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int::dmi_train_running_number_int */DMI_Train_Running_Number_int_array_T_DATA *dmi_train_running_number_int)
{
  (*dmi_train_running_number_int)[1] =
    (*dmi_train_running_number_ct).systemTime;
  (*dmi_train_running_number_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_train_running_number_ct).valid);
  (*dmi_train_running_number_int)[2] = /* 1 */
    CAST_NID_OPERATIONAL_to_int_TM_conversions(
      (*dmi_train_running_number_ct).trainRunningNumber);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

