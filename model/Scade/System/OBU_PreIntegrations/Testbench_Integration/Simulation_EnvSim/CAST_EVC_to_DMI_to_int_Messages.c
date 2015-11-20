/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_EVC_to_DMI_to_int_Messages.h"

/* Messages::CAST_EVC_to_DMI_to_int */
void CAST_EVC_to_DMI_to_int_Messages(
  /* Messages::CAST_EVC_to_DMI_to_int::evc_to_dmi_ct */EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  /* Messages::CAST_EVC_to_DMI_to_int::evc_to_dmi_int */EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int)
{
  (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0] =
    1;
  /* 1 */
  CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).dynamic,
    (DMI_Dynamic_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[1]);
  /* 1 */
  CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).menu_request,
    (DMI_Menu_Request_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[25]);
  /* 1 */
  CAST_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).entry_request,
    (DMI_Entry_Request_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[28]);
  /* 1 */
  CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).evc_coded_train_data,
    (DMI_EVC_Coded_Train_Data_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[31]);
  /* 1 */
  CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).textMessage,
    (DMI_Text_Message_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[40]);
  /* 1 */
  Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).trackDescription,
    (DMI_Track_Description_int_array_T *)
      &(&(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[302]);
  /* 1 */
  CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).identifierRequest,
    (DMI_Identifier_Request_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[627]);
  /* 1 */
  CAST_DMI_System_Version_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).systemVersion,
    (DMI_System_Version_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[0])[888]);
  /* 1 */
  CAST_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).displayControl,
    (DMI_Display_Control_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[0])[891]);
  /* 1 */
  CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).EVC_levelData,
    (DMI_EVC_Level_Data_int_array_T_DATA *)
      &(&(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[0])[894]);
  /* 1 */
  CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).EVC_radioNetData,
    (DMI_EVC_Radio_Net_Data_int_array_T_DATA *)
      &(&(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[0])[961]);
  /* 2 */
  Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
    &(*evc_to_dmi_ct).driverIdentifier,
    (DMI_Driver_Identifier_int_array_T_DATA *)
      &(&(&(&(&(*evc_to_dmi_int)[0])[0])[0])[0])[964]);
  /* 2 */
  C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(
    &(*evc_to_dmi_ct).trainRunningNumber,
    (DMI_Train_Running_Number_int_array_T_DATA *)
      &(&(&(&(*evc_to_dmi_int)[0])[0])[0])[975]);
  /* 2 */
  C_DMI_Train_Data_to_int_DATA_Packets_Bothways(
    &(*evc_to_dmi_ct).trainData,
    (DMI_Train_Data_int_array_T_DATA *) &(&(&(*evc_to_dmi_int)[0])[0])[978]);
  /* 2 */
  C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
    &(*evc_to_dmi_ct).adhesionFactor,
    (DMI_Adhesion_Factor_Data_int_array_T_DATA *)
      &(&(*evc_to_dmi_int)[0])[987]);
  /* 1 */
  CAST_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI(
    &(*evc_to_dmi_ct).iconRequest,
    (DMI_Icons_int_array_T_DATA *) &(*evc_to_dmi_int)[990]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_EVC_to_DMI_to_int_Messages.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

