/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_to_EVC_Messages.h"

/* Messages::CAST_int_to_DMI_to_EVC */
void CAST_int_to_DMI_to_EVC_Messages(
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_int */DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_ct */DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct)
{
  (*dmi_to_evc_ct).present = kcg_true;
  /* 1 */
  Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
    (DMI_Status_int_array_T_DATA *) &(*dmi_to_evc_int)[1],
    &(*dmi_to_evc_ct).status);
  /* 1 */
  Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
    (DMI_Identifier_int_array_T_DATA *) &(*dmi_to_evc_int)[5],
    &(*dmi_to_evc_ct).identifier);
  /* 1 */
  Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
    (DMI_Driver_Request_int_array_T_DATA *) &(*dmi_to_evc_int)[266],
    &(*dmi_to_evc_ct).driverRequest);
  /* 1 */
  Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
    (DMI_Driver_Identifier_int_array_T_DATA *) &(*dmi_to_evc_int)[269],
    &(*dmi_to_evc_ct).driverIdentifier);
  /* 1 */
  C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
    (DMI_Train_Running_Number_int_array_T_DATA *) &(*dmi_to_evc_int)[280],
    &(*dmi_to_evc_ct).trainRunningNumber);
  /* 1 */
  Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
    (DMI_Radio_Net_Data_int_array_T_DATA *) &(*dmi_to_evc_int)[283],
    &(*dmi_to_evc_ct).radioNetData);
  /* 1 */
  Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
    (DMI_Text_Message_Ack_int_array_T_DATA *) &(*dmi_to_evc_int)[285],
    &(*dmi_to_evc_ct).textMessageAck);
  /* 1 */
  Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC(
    (DMI_Train_Data_Ack_int_array_T_DATA *) &(*dmi_to_evc_int)[289],
    &(*dmi_to_evc_ct).trainDataAck);
  /* 1 */
  C_int_to_DMI_Train_Data_DATA_Packets_Bothways(
    (DMI_Train_Data_int_array_T_DATA *) &(*dmi_to_evc_int)[292],
    &(*dmi_to_evc_ct).trainData);
  /* 1 */
  C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
    (DMI_Adhesion_Factor_Data_int_array_T_DATA *) &(*dmi_to_evc_int)[301],
    &(*dmi_to_evc_ct).adhesionFactor);
  /* 1 */
  Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
    (DMI_Icon_Ack_int_array_T_DATA *) &(*dmi_to_evc_int)[304],
    &(*dmi_to_evc_ct).iconAck);
  /* 1 */
  C_int_to_DMI_Level_Data_DATA_Packets_Bothways(
    (DMI_Level_Data_int_array_T_DATA *) &(*dmi_to_evc_int)[307],
    &(*dmi_to_evc_ct).selectedLevel);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_to_EVC_Messages.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

