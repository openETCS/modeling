/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_EVC_to_DMI_Messages.h"

/* Messages::CAST_int_to_EVC_to_DMI */
void CAST_int_to_EVC_to_DMI_Messages(
  /* Messages::CAST_int_to_EVC_to_DMI::evc_to_dmi_int */EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  /* Messages::CAST_int_to_EVC_to_DMI::evc_to_dmi_ct */EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct)
{
  (*evc_to_dmi_ct).present = kcg_true;
  /* 1 */
  CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI(
    (DMI_Dynamic_int_array_T_DATA *) &(*evc_to_dmi_int)[1],
    &(*evc_to_dmi_ct).dynamic);
  /* 1 */
  CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI(
    (DMI_Menu_Request_int_array_T_DATA *) &(*evc_to_dmi_int)[25],
    &(*evc_to_dmi_ct).menu_request);
  /* 1 */
  CAST_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI(
    (DMI_Entry_Request_int_array_T_DATA *) &(*evc_to_dmi_int)[28],
    &(*evc_to_dmi_ct).entry_request);
  /* 1 */
  CAST_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI(
    (DMI_EVC_Coded_Train_Data_int_array_T_DATA *) &(*evc_to_dmi_int)[31],
    &(*evc_to_dmi_ct).evc_coded_train_data);
  /* 1 */
  CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI(
    (DMI_Text_Message_int_array_T_DATA *) &(*evc_to_dmi_int)[40],
    &(*evc_to_dmi_ct).textMessage);
  /* 1 */
  Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
    (DMI_Track_Description_int_array_T *) &(*evc_to_dmi_int)[302],
    &(*evc_to_dmi_ct).trackDescription);
  /* 1 */
  CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI(
    (DMI_Identifier_Request_int_array_T_DATA *) &(*evc_to_dmi_int)[627],
    &(*evc_to_dmi_ct).identifierRequest);
  /* 1 */
  CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI(
    (DMI_System_Version_int_array_T_DATA *) &(*evc_to_dmi_int)[888],
    &(*evc_to_dmi_ct).systemVersion);
  /* 1 */
  CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI(
    (DMI_Display_Control_int_array_T_DATA *) &(*evc_to_dmi_int)[891],
    &(*evc_to_dmi_ct).displayControl);
  /* 1 */
  CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI(
    (DMI_EVC_Level_Data_int_array_T_DATA *) &(*evc_to_dmi_int)[894],
    &(*evc_to_dmi_ct).EVC_levelData);
  /* 1 */
  CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI(
    (DMI_EVC_Radio_Net_Data_int_array_T_DATA *) &(*evc_to_dmi_int)[961],
    &(*evc_to_dmi_ct).EVC_radioNetData);
  /* 1 */
  Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
    (DMI_Driver_Identifier_int_array_T_DATA *) &(*evc_to_dmi_int)[964],
    &(*evc_to_dmi_ct).driverIdentifier);
  /* 1 */
  C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
    (DMI_Train_Running_Number_int_array_T_DATA *) &(*evc_to_dmi_int)[975],
    &(*evc_to_dmi_ct).trainRunningNumber);
  /* 1 */
  C_int_to_DMI_Train_Data_DATA_Packets_Bothways(
    (DMI_Train_Data_int_array_T_DATA *) &(*evc_to_dmi_int)[978],
    &(*evc_to_dmi_ct).trainData);
  /* 1 */
  C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
    (DMI_Adhesion_Factor_Data_int_array_T_DATA *) &(*evc_to_dmi_int)[987],
    &(*evc_to_dmi_ct).adhesionFactor);
  /* 1 */
  CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI(
    (DMI_Icons_int_array_T_DATA *) &(*evc_to_dmi_int)[990],
    &(*evc_to_dmi_ct).iconRequest);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_EVC_to_DMI_Messages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

