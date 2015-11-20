/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number */
void C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::dmi_train_running_number_int */DMI_Train_Running_Number_int_array_T_DATA *dmi_train_running_number_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number::dmi_train_running_number_ct */DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_train_running_number_ct)
{
  (*dmi_train_running_number_ct).systemTime =
    (*dmi_train_running_number_int)[1];
  (*dmi_train_running_number_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_train_running_number_int)[0]);
  (*dmi_train_running_number_ct).trainRunningNumber = /* 1 */
    CAST_Int_to_NID_OPERATIONAL_TM_conversions(
      (*dmi_train_running_number_int)[2]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

