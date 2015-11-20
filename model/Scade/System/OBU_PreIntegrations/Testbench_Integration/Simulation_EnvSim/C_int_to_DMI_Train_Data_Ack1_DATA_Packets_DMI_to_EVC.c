/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Data_Ack1_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1 */
void C_int_to_DMI_Train_Data_Ack1_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1::dmi_train_data_ack_int */DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1::dmi_train_data_ack_ct */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct)
{
  (*dmi_train_data_ack_ct).systemTime = (*dmi_train_data_ack_int)[1];
  (*dmi_train_data_ack_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_train_data_ack_int)[0]);
  (*dmi_train_data_ack_ct).acknowledged = /* 2 */
    Int_to_Bool_Utilities((*dmi_train_data_ack_int)[2]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_int_to_DMI_Train_Data_Ack1_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

