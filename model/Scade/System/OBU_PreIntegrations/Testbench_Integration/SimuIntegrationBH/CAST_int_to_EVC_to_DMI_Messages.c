/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_EVC_to_DMI_Messages.h"

/* Messages::CAST_int_to_EVC_to_DMI */
void CAST_int_to_EVC_to_DMI_Messages(
  /* Messages::CAST_int_to_EVC_to_DMI::evc_to_dmi_int */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  /* Messages::CAST_int_to_EVC_to_DMI::evc_to_dmi_ct */ EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct)
{
  /* Messages::CAST_int_to_EVC_to_DMI::_L29 */
  static EVC_to_DMI_Message_T_API_DMI_Pkg _L29;
  /* Messages::CAST_int_to_EVC_to_DMI::_L36 */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _L36;
  /* Messages::CAST_int_to_EVC_to_DMI::_L37 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L37;
  /* Messages::CAST_int_to_EVC_to_DMI::_L38 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L38;
  /* Messages::CAST_int_to_EVC_to_DMI::_L39 */
  static DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L39;
  /* Messages::CAST_int_to_EVC_to_DMI::_L40 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L40;
  /* Messages::CAST_int_to_EVC_to_DMI::_L41 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L41;
  /* Messages::CAST_int_to_EVC_to_DMI::_L42 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L42;
  /* Messages::CAST_int_to_EVC_to_DMI::_L43 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L43;
  /* Messages::CAST_int_to_EVC_to_DMI::_L44 */
  static DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg _L44;
  /* Messages::CAST_int_to_EVC_to_DMI::_L45 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L45;
  /* Messages::CAST_int_to_EVC_to_DMI::_L46 */
  static DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L46;
  /* Messages::CAST_int_to_EVC_to_DMI::_L47 */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _L47;
  /* Messages::CAST_int_to_EVC_to_DMI::_L48 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L48;
  /* Messages::CAST_int_to_EVC_to_DMI::_L49 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L49;
  /* Messages::CAST_int_to_EVC_to_DMI::_L50 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L50;
  /* Messages::CAST_int_to_EVC_to_DMI::_L51 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L51;
  /* Messages::CAST_int_to_EVC_to_DMI::_L54 */
  static kcg_bool _L54;
  /* Messages::CAST_int_to_EVC_to_DMI::_L55 */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _L55;
  /* Messages::CAST_int_to_EVC_to_DMI::_L56 */
  static array_int_24 _L56;
  /* Messages::CAST_int_to_EVC_to_DMI::_L57 */
  static array_int_3 _L57;
  /* Messages::CAST_int_to_EVC_to_DMI::_L58 */
  static array_int_3 _L58;
  /* Messages::CAST_int_to_EVC_to_DMI::_L59 */
  static array_int_9 _L59;
  /* Messages::CAST_int_to_EVC_to_DMI::_L60 */
  static DMI_Text_Message_int_array_T_DATA _L60;
  /* Messages::CAST_int_to_EVC_to_DMI::_L64 */
  static DMI_Track_Description_int_array_T _L64;
  /* Messages::CAST_int_to_EVC_to_DMI::_L65 */
  static array_int_261 _L65;
  /* Messages::CAST_int_to_EVC_to_DMI::_L66 */
  static array_int_3 _L66;
  /* Messages::CAST_int_to_EVC_to_DMI::_L67 */
  static array_int_3 _L67;
  /* Messages::CAST_int_to_EVC_to_DMI::_L68 */
  static DMI_EVC_Level_Data_int_array_T_DATA _L68;
  /* Messages::CAST_int_to_EVC_to_DMI::_L69 */
  static array_int_3 _L69;
  /* Messages::CAST_int_to_EVC_to_DMI::_L70 */
  static array_int_11 _L70;
  /* Messages::CAST_int_to_EVC_to_DMI::_L71 */
  static array_int_3 _L71;
  /* Messages::CAST_int_to_EVC_to_DMI::_L72 */
  static array_int_9 _L72;
  /* Messages::CAST_int_to_EVC_to_DMI::_L73 */
  static array_int_3 _L73;
  /* Messages::CAST_int_to_EVC_to_DMI::_L74 */
  static array_int_9 _L74;
  
  _L54 = kcg_true;
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&_L55, evc_to_dmi_int);
  kcg_copy_array_int_24(&_L56, (array_int_24 *) &_L55[1]);
  /* 1 */ CAST_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI(&_L56, &_L36);
  kcg_copy_array_int_3(&_L57, (array_int_3 *) &_L55[25]);
  /* 1 */ CAST_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI(&_L57, &_L37);
  kcg_copy_array_int_3(&_L58, (array_int_3 *) &_L55[28]);
  /* 1 */ CAST_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI(&_L58, &_L38);
  kcg_copy_array_int_9(&_L59, (array_int_9 *) &_L55[31]);
  /* 1 */
  CAST_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI(&_L59, &_L39);
  kcg_copy_DMI_Text_Message_int_array_T_DATA(
    &_L60,
    (DMI_Text_Message_int_array_T_DATA *) &_L55[40]);
  /* 1 */ CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI(&_L60, &_L40);
  kcg_copy_DMI_Track_Description_int_array_T(
    &_L64,
    (DMI_Track_Description_int_array_T *) &_L55[302]);
  /* 1 */
  Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(&_L64, &_L41);
  kcg_copy_array_int_261(&_L65, (array_int_261 *) &_L55[627]);
  /* 1 */
  CAST_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI(&_L65, &_L42);
  kcg_copy_array_int_3(&_L66, (array_int_3 *) &_L55[888]);
  /* 1 */ CAST_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI(&_L66, &_L43);
  kcg_copy_array_int_3(&_L67, (array_int_3 *) &_L55[891]);
  /* 1 */ CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI(&_L67, &_L44);
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &_L68,
    (DMI_EVC_Level_Data_int_array_T_DATA *) &_L55[894]);
  /* 1 */ CAST_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI(&_L68, &_L45);
  kcg_copy_array_int_3(&_L69, (array_int_3 *) &_L55[961]);
  /* 1 */
  CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI(&_L69, &_L46);
  kcg_copy_array_int_11(&_L70, (array_int_11 *) &_L55[964]);
  /* 1 */
  Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(&_L70, &_L51);
  kcg_copy_array_int_3(&_L71, (array_int_3 *) &_L55[975]);
  /* 1 */ C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(&_L71, &_L47);
  kcg_copy_array_int_9(&_L72, (array_int_9 *) &_L55[978]);
  /* 1 */ C_int_to_DMI_Train_Data_DATA_Packets_Bothways(&_L72, &_L48);
  kcg_copy_array_int_3(&_L73, (array_int_3 *) &_L55[987]);
  /* 1 */ C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(&_L73, &_L49);
  kcg_copy_array_int_9(&_L74, (array_int_9 *) &_L55[990]);
  /* 1 */ CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI(&_L74, &_L50);
  _L29.present = _L54;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&_L29.dynamic, &_L36);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.menu_request,
    &_L37);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.entry_request,
    &_L38);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.evc_coded_train_data,
    &_L39);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.textMessage,
    &_L40);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.trackDescription,
    &_L41);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.identifierRequest,
    &_L42);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.systemVersion,
    &_L43);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.displayControl,
    &_L44);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.EVC_levelData,
    &_L45);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29.EVC_radioNetData,
    &_L46);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L29.driverIdentifier,
    &_L51);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &_L29.trainRunningNumber,
    &_L47);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L29.trainData, &_L48);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_L29.adhesionFactor,
    &_L49);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&_L29.iconRequest, &_L50);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(evc_to_dmi_ct, &_L29);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_EVC_to_DMI_Messages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

