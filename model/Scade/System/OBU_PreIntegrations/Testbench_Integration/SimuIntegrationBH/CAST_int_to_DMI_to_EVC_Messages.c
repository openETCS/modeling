/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_to_EVC_Messages.h"

/* Messages::CAST_int_to_DMI_to_EVC */
void CAST_int_to_DMI_to_EVC_Messages(
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  /* Messages::CAST_int_to_DMI_to_EVC::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct)
{
  /* Messages::CAST_int_to_DMI_to_EVC::_L17 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L17;
  /* Messages::CAST_int_to_DMI_to_EVC::_L18 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L18;
  /* Messages::CAST_int_to_DMI_to_EVC::_L19 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L19;
  /* Messages::CAST_int_to_DMI_to_EVC::_L20 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L20;
  /* Messages::CAST_int_to_DMI_to_EVC::_L21 */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _L21;
  /* Messages::CAST_int_to_DMI_to_EVC::_L22 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L22;
  /* Messages::CAST_int_to_DMI_to_EVC::_L23 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L23;
  /* Messages::CAST_int_to_DMI_to_EVC::_L24 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L24;
  /* Messages::CAST_int_to_DMI_to_EVC::_L25 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L25;
  /* Messages::CAST_int_to_DMI_to_EVC::_L26 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L26;
  /* Messages::CAST_int_to_DMI_to_EVC::_L27 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L27;
  /* Messages::CAST_int_to_DMI_to_EVC::_L28 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L28;
  /* Messages::CAST_int_to_DMI_to_EVC::_L29 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L29;
  /* Messages::CAST_int_to_DMI_to_EVC::_L31 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L31;
  /* Messages::CAST_int_to_DMI_to_EVC::_L33 */
  static array_int_4 _L33;
  /* Messages::CAST_int_to_DMI_to_EVC::_L34 */
  static array_int_261 _L34;
  /* Messages::CAST_int_to_DMI_to_EVC::_L36 */
  static array_int_3 _L36;
  /* Messages::CAST_int_to_DMI_to_EVC::_L37 */
  static array_int_11 _L37;
  /* Messages::CAST_int_to_DMI_to_EVC::_L38 */
  static array_int_3 _L38;
  /* Messages::CAST_int_to_DMI_to_EVC::_L39 */
  static array_int_2 _L39;
  /* Messages::CAST_int_to_DMI_to_EVC::_L40 */
  static array_int_4 _L40;
  /* Messages::CAST_int_to_DMI_to_EVC::_L41 */
  static array_int_3 _L41;
  /* Messages::CAST_int_to_DMI_to_EVC::_L42 */
  static array_int_9 _L42;
  /* Messages::CAST_int_to_DMI_to_EVC::_L43 */
  static array_int_3 _L43;
  /* Messages::CAST_int_to_DMI_to_EVC::_L44 */
  static array_int_3 _L44;
  /* Messages::CAST_int_to_DMI_to_EVC::_L45 */
  static array_int_4 _L45;
  /* Messages::CAST_int_to_DMI_to_EVC::_L46 */
  static kcg_bool _L46;
  
  _L46 = kcg_true;
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_L31, dmi_to_evc_int);
  kcg_copy_array_int_4(&_L33, (array_int_4 *) &_L31[1]);
  /* 1 */ Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(&_L33, &_L17);
  kcg_copy_array_int_261(&_L34, (array_int_261 *) &_L31[5]);
  /* 1 */ Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(&_L34, &_L18);
  kcg_copy_array_int_3(&_L36, (array_int_3 *) &_L31[266]);
  /* 1 */ Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(&_L36, &_L19);
  kcg_copy_array_int_11(&_L37, (array_int_11 *) &_L31[269]);
  /* 1 */
  Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(&_L37, &_L20);
  kcg_copy_array_int_3(&_L38, (array_int_3 *) &_L31[280]);
  /* 1 */ C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(&_L38, &_L21);
  kcg_copy_array_int_2(&_L39, (array_int_2 *) &_L31[283]);
  /* 1 */ Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(&_L39, &_L22);
  kcg_copy_array_int_4(&_L40, (array_int_4 *) &_L31[285]);
  /* 1 */
  Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(&_L40, &_L23);
  kcg_copy_array_int_3(&_L41, (array_int_3 *) &_L31[289]);
  /* 1 */ Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC(&_L41, &_L24);
  kcg_copy_array_int_9(&_L42, (array_int_9 *) &_L31[292]);
  /* 1 */ C_int_to_DMI_Train_Data_DATA_Packets_Bothways(&_L42, &_L26);
  kcg_copy_array_int_3(&_L43, (array_int_3 *) &_L31[301]);
  /* 1 */ C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(&_L43, &_L25);
  kcg_copy_array_int_3(&_L44, (array_int_3 *) &_L31[304]);
  /* 1 */ Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(&_L44, &_L27);
  kcg_copy_array_int_4(&_L45, (array_int_4 *) &_L31[307]);
  /* 1 */ C_int_to_DMI_Level_Data_DATA_Packets_Bothways(&_L45, &_L28);
  _L29.present = _L46;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&_L29.status, &_L17);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L29.identifier,
    &_L18);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L29.driverRequest,
    &_L19);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L29.driverIdentifier,
    &_L20);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &_L29.trainRunningNumber,
    &_L21);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L29.radioNetData,
    &_L22);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L29.textMessageAck,
    &_L23);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L29.trainDataAck,
    &_L24);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L29.trainData, &_L26);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_L29.adhesionFactor,
    &_L25);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L29.iconAck, &_L27);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &_L29.selectedLevel,
    &_L28);
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(dmi_to_evc_ct, &_L29);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_to_EVC_Messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

