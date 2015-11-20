/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_to_EVC_to_int_Messages.h"

/* Messages::CAST_DMI_to_EVC_to_int */
void CAST_DMI_to_EVC_to_int_Messages(
  /* Messages::CAST_DMI_to_EVC_to_int::dmi_to_evc_ct */DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  /* Messages::CAST_DMI_to_EVC_to_int::dmi_to_evc_int */DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int)
{
  (&(&(&(&(&(&(&(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0] =
    1;
  /* 1 */
  Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
    &(*dmi_to_evc_ct).status,
    (DMI_Status_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[1]);
  /* 1 */
  Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
    &(*dmi_to_evc_ct).identifier,
    (DMI_Identifier_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[0])[5]);
  /* 1 */
  Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
    &(*dmi_to_evc_ct).driverRequest,
    (DMI_Driver_Request_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[0])[0])[0])[0])[266]);
  /* 1 */
  Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
    &(*dmi_to_evc_ct).driverIdentifier,
    (DMI_Driver_Identifier_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[0])[0])[0])[269]);
  /* 1 */
  C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(
    &(*dmi_to_evc_ct).trainRunningNumber,
    (DMI_Train_Running_Number_int_array_T_DATA *)
      &(&(&(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[0])[0])[280]);
  /* 1 */
  Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
    &(*dmi_to_evc_ct).radioNetData,
    (DMI_Radio_Net_Data_int_array_T_DATA *)
      &(&(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[0])[283]);
  /* 1 */
  Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
    &(*dmi_to_evc_ct).textMessageAck,
    (DMI_Text_Message_Ack_int_array_T_DATA *)
      &(&(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[0])[285]);
  /* 1 */
  Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
    &(*dmi_to_evc_ct).trainDataAck,
    (DMI_Train_Data_Ack_int_array_T_DATA *)
      &(&(&(&(&(*dmi_to_evc_int)[0])[0])[0])[0])[289]);
  /* 1 */
  C_DMI_Train_Data_to_int_DATA_Packets_Bothways(
    &(*dmi_to_evc_ct).trainData,
    (DMI_Train_Data_int_array_T_DATA *)
      &(&(&(&(*dmi_to_evc_int)[0])[0])[0])[292]);
  /* 1 */
  C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
    &(*dmi_to_evc_ct).adhesionFactor,
    (DMI_Adhesion_Factor_Data_int_array_T_DATA *)
      &(&(&(*dmi_to_evc_int)[0])[0])[301]);
  /* 1 */
  Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC(
    &(*dmi_to_evc_ct).iconAck,
    (DMI_Icon_Ack_int_array_T_DATA *) &(&(*dmi_to_evc_int)[0])[304]);
  /* 1 */
  C_DMI_Level_Data_to_int_DATA_Packets_Bothways(
    &(*dmi_to_evc_ct).selectedLevel,
    (DMI_Level_Data_int_array_T_DATA *) &(*dmi_to_evc_int)[307]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_to_EVC_to_int_Messages.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

