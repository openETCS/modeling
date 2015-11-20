/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_to_EVC_to_int_Messages.h"

/* Messages::CAST_DMI_to_EVC_to_int */
void CAST_DMI_to_EVC_to_int_Messages(
  /* Messages::CAST_DMI_to_EVC_to_int::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  /* Messages::CAST_DMI_to_EVC_to_int::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int)
{
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_307 tmp10;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_304 tmp9;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_301 tmp8;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_292 tmp7;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_289 tmp6;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_285 tmp5;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_283 tmp4;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_280 tmp3;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_269 tmp2;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_266 tmp1;
  /* Messages::CAST_DMI_to_EVC_to_int */
  static array_int_5 tmp;
  static kcg_bool noname;
  /* Messages::CAST_DMI_to_EVC_to_int::_L1 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L1;
  /* Messages::CAST_DMI_to_EVC_to_int::_L14 */
  static kcg_bool _L14;
  /* Messages::CAST_DMI_to_EVC_to_int::_L13 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L13;
  /* Messages::CAST_DMI_to_EVC_to_int::_L12 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L12;
  /* Messages::CAST_DMI_to_EVC_to_int::_L11 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L11;
  /* Messages::CAST_DMI_to_EVC_to_int::_L10 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L10;
  /* Messages::CAST_DMI_to_EVC_to_int::_L9 */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _L9;
  /* Messages::CAST_DMI_to_EVC_to_int::_L8 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L8;
  /* Messages::CAST_DMI_to_EVC_to_int::_L7 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L7;
  /* Messages::CAST_DMI_to_EVC_to_int::_L6 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L6;
  /* Messages::CAST_DMI_to_EVC_to_int::_L5 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L5;
  /* Messages::CAST_DMI_to_EVC_to_int::_L4 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L4;
  /* Messages::CAST_DMI_to_EVC_to_int::_L3 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L3;
  /* Messages::CAST_DMI_to_EVC_to_int::_L2 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L2;
  /* Messages::CAST_DMI_to_EVC_to_int::_L17 */
  static DMI_Status_int_array_T_DATA _L17;
  /* Messages::CAST_DMI_to_EVC_to_int::_L18 */
  static DMI_Identifier_int_array_T_DATA _L18;
  /* Messages::CAST_DMI_to_EVC_to_int::_L19 */
  static DMI_Driver_Request_int_array_T_DATA _L19;
  /* Messages::CAST_DMI_to_EVC_to_int::_L20 */
  static DMI_Driver_Identifier_int_array_T_DATA _L20;
  /* Messages::CAST_DMI_to_EVC_to_int::_L21 */
  static DMI_Train_Running_Number_int_array_T_DATA _L21;
  /* Messages::CAST_DMI_to_EVC_to_int::_L22 */
  static DMI_Radio_Net_Data_int_array_T_DATA _L22;
  /* Messages::CAST_DMI_to_EVC_to_int::_L23 */
  static DMI_Text_Message_Ack_int_array_T_DATA _L23;
  /* Messages::CAST_DMI_to_EVC_to_int::_L24 */
  static DMI_Train_Data_Ack_int_array_T_DATA _L24;
  /* Messages::CAST_DMI_to_EVC_to_int::_L25 */
  static DMI_Adhesion_Factor_Data_int_array_T_DATA _L25;
  /* Messages::CAST_DMI_to_EVC_to_int::_L26 */
  static DMI_Train_Data_int_array_T_DATA _L26;
  /* Messages::CAST_DMI_to_EVC_to_int::_L27 */
  static DMI_Icon_Ack_int_array_T_DATA _L27;
  /* Messages::CAST_DMI_to_EVC_to_int::_L28 */
  static DMI_Level_Data_int_array_T_DATA _L28;
  /* Messages::CAST_DMI_to_EVC_to_int::_L29 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L29;
  /* Messages::CAST_DMI_to_EVC_to_int::_L16 */
  static P044_other_data_TM_TrainToTrack _L16;
  /* Messages::CAST_DMI_to_EVC_to_int::_L31 */
  static kcg_int _L31;
  
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&_L1, dmi_to_evc_ct);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&_L2, &_L1.selectedLevel);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L3, &_L1.iconAck);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_L4,
    &_L1.adhesionFactor);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L5, &_L1.trainData);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L6,
    &_L1.trainDataAck);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L7,
    &_L1.textMessageAck);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L8,
    &_L1.radioNetData);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &_L9,
    &_L1.trainRunningNumber);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L10,
    &_L1.driverIdentifier);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L11,
    &_L1.driverRequest);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&_L12, &_L1.identifier);
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&_L13, &_L1.status);
  _L14 = _L1.present;
  /* 1 */ Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(&_L13, &_L17);
  /* 1 */ Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(&_L12, &_L18);
  /* 1 */ Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(&_L11, &_L19);
  /* 1 */
  Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(&_L10, &_L20);
  /* 1 */ C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(&_L9, &_L21);
  /* 1 */ Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(&_L8, &_L22);
  /* 1 */
  Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(&_L7, &_L23);
  /* 1 */ Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(&_L6, &_L24);
  /* 1 */ C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(&_L4, &_L25);
  /* 1 */ C_DMI_Train_Data_to_int_DATA_Packets_Bothways(&_L5, &_L26);
  /* 1 */ Write_DMI_Icon_Ack_to_int1_DATA_Packets_DMI_to_EVC(&_L3, &_L27);
  /* 1 */ C_DMI_Level_Data_to_int_DATA_Packets_Bothways(&_L2, &_L28);
  _L31 = 1;
  _L16[0] = _L31;
  kcg_copy_P044_other_data_TM_TrainToTrack(&tmp[0], &_L16);
  kcg_copy_DMI_Status_int_array_T_DATA(&tmp[1], &_L17);
  kcg_copy_array_int_5(&tmp1[0], &tmp);
  kcg_copy_DMI_Identifier_int_array_T_DATA(&tmp1[5], &_L18);
  kcg_copy_array_int_266(&tmp2[0], &tmp1);
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(&tmp2[266], &_L19);
  kcg_copy_array_int_269(&tmp3[0], &tmp2);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&tmp3[269], &_L20);
  kcg_copy_array_int_280(&tmp4[0], &tmp3);
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(&tmp4[280], &_L21);
  kcg_copy_array_int_283(&tmp5[0], &tmp4);
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(&tmp5[283], &_L22);
  kcg_copy_array_int_285(&tmp6[0], &tmp5);
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(&tmp6[285], &_L23);
  kcg_copy_array_int_289(&tmp7[0], &tmp6);
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(&tmp7[289], &_L24);
  kcg_copy_array_int_292(&tmp8[0], &tmp7);
  kcg_copy_DMI_Train_Data_int_array_T_DATA(&tmp8[292], &_L26);
  kcg_copy_array_int_301(&tmp9[0], &tmp8);
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(&tmp9[301], &_L25);
  kcg_copy_array_int_304(&tmp10[0], &tmp9);
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&tmp10[304], &_L27);
  kcg_copy_array_int_307(&_L29[0], &tmp10);
  kcg_copy_DMI_Level_Data_int_array_T_DATA(&_L29[307], &_L28);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(dmi_to_evc_int, &_L29);
  noname = _L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_to_EVC_to_int_Messages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

