/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_EVC_to_DMI_to_int_Messages.h"

/* Messages::CAST_EVC_to_DMI_to_int */
void CAST_EVC_to_DMI_to_int_Messages(
  /* Messages::CAST_EVC_to_DMI_to_int::evc_to_dmi_ct */ EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  /* Messages::CAST_EVC_to_DMI_to_int::evc_to_dmi_int */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int)
{
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_990 tmp14;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_987 tmp13;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_978 tmp12;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_975 tmp11;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_964 tmp10;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_961 tmp9;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_894 tmp8;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_891 tmp7;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_888 tmp6;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_627 tmp5;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_302 tmp4;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_40 tmp3;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_31 tmp2;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_28 tmp1;
  /* Messages::CAST_EVC_to_DMI_to_int */
  static array_int_25 tmp;
  static kcg_bool noname;
  /* Messages::CAST_EVC_to_DMI_to_int::_L1 */
  static EVC_to_DMI_Message_T_API_DMI_Pkg _L1;
  /* Messages::CAST_EVC_to_DMI_to_int::_L14 */
  static kcg_bool _L14;
  /* Messages::CAST_EVC_to_DMI_to_int::_L13 */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _L13;
  /* Messages::CAST_EVC_to_DMI_to_int::_L12 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L12;
  /* Messages::CAST_EVC_to_DMI_to_int::_L11 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L11;
  /* Messages::CAST_EVC_to_DMI_to_int::_L10 */
  static DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L10;
  /* Messages::CAST_EVC_to_DMI_to_int::_L9 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L9;
  /* Messages::CAST_EVC_to_DMI_to_int::_L8 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L8;
  /* Messages::CAST_EVC_to_DMI_to_int::_L7 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L7;
  /* Messages::CAST_EVC_to_DMI_to_int::_L6 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L6;
  /* Messages::CAST_EVC_to_DMI_to_int::_L5 */
  static DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg _L5;
  /* Messages::CAST_EVC_to_DMI_to_int::_L4 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L4;
  /* Messages::CAST_EVC_to_DMI_to_int::_L3 */
  static DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L3;
  /* Messages::CAST_EVC_to_DMI_to_int::_L2 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L2;
  /* Messages::CAST_EVC_to_DMI_to_int::_L29 */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _L29;
  /* Messages::CAST_EVC_to_DMI_to_int::_L16 */
  static P044_other_data_TM_TrainToTrack _L16;
  /* Messages::CAST_EVC_to_DMI_to_int::_L35 */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _L35;
  /* Messages::CAST_EVC_to_DMI_to_int::_L34 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L34;
  /* Messages::CAST_EVC_to_DMI_to_int::_L33 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L33;
  /* Messages::CAST_EVC_to_DMI_to_int::_L32 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L32;
  /* Messages::CAST_EVC_to_DMI_to_int::_L36 */
  static DMI_Dynamic_int_array_T_DATA _L36;
  /* Messages::CAST_EVC_to_DMI_to_int::_L37 */
  static DMI_Menu_Request_int_array_T_DATA _L37;
  /* Messages::CAST_EVC_to_DMI_to_int::_L38 */
  static DMI_Entry_Request_int_array_T_DATA _L38;
  /* Messages::CAST_EVC_to_DMI_to_int::_L39 */
  static DMI_EVC_Coded_Train_Data_int_array_T_DATA _L39;
  /* Messages::CAST_EVC_to_DMI_to_int::_L40 */
  static DMI_Text_Message_int_array_T_DATA _L40;
  /* Messages::CAST_EVC_to_DMI_to_int::_L41 */
  static DMI_Track_Description_int_array_T _L41;
  /* Messages::CAST_EVC_to_DMI_to_int::_L42 */
  static DMI_Identifier_Request_int_array_T_DATA _L42;
  /* Messages::CAST_EVC_to_DMI_to_int::_L43 */
  static DMI_System_Version_int_array_T_DATA _L43;
  /* Messages::CAST_EVC_to_DMI_to_int::_L44 */
  static DMI_Display_Control_int_array_T_DATA _L44;
  /* Messages::CAST_EVC_to_DMI_to_int::_L45 */
  static DMI_EVC_Level_Data_int_array_T_DATA _L45;
  /* Messages::CAST_EVC_to_DMI_to_int::_L46 */
  static DMI_EVC_Radio_Net_Data_int_array_T_DATA _L46;
  /* Messages::CAST_EVC_to_DMI_to_int::_L47 */
  static DMI_Train_Running_Number_int_array_T_DATA _L47;
  /* Messages::CAST_EVC_to_DMI_to_int::_L48 */
  static DMI_Train_Data_int_array_T_DATA _L48;
  /* Messages::CAST_EVC_to_DMI_to_int::_L49 */
  static DMI_Adhesion_Factor_Data_int_array_T_DATA _L49;
  /* Messages::CAST_EVC_to_DMI_to_int::_L50 */
  static DMI_Icons_int_array_T_DATA _L50;
  /* Messages::CAST_EVC_to_DMI_to_int::_L51 */
  static DMI_Driver_Identifier_int_array_T_DATA _L51;
  /* Messages::CAST_EVC_to_DMI_to_int::_L52 */
  static kcg_int _L52;
  
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&_L1, evc_to_dmi_ct);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&_L32, &_L1.iconRequest);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_L33,
    &_L1.adhesionFactor);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L34, &_L1.trainData);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &_L35,
    &_L1.trainRunningNumber);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L2,
    &_L1.driverIdentifier);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L3,
    &_L1.EVC_radioNetData);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L4,
    &_L1.EVC_levelData);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L5,
    &_L1.displayControl);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L6,
    &_L1.systemVersion);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L7,
    &_L1.identifierRequest);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L8,
    &_L1.trackDescription);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L9,
    &_L1.textMessage);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L10,
    &_L1.evc_coded_train_data);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L11,
    &_L1.entry_request);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L12,
    &_L1.menu_request);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&_L13, &_L1.dynamic);
  _L14 = _L1.present;
  _L52 = 1;
  _L16[0] = _L52;
  /* 1 */ CAST_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI(&_L13, &_L36);
  /* 1 */ CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI(&_L12, &_L37);
  /* 1 */ CAST_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI(&_L11, &_L38);
  /* 1 */
  CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI(&_L10, &_L39);
  /* 1 */ CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI(&_L9, &_L40);
  /* 1 */
  Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(&_L8, &_L41);
  /* 1 */
  CAST_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI(&_L7, &_L42);
  /* 1 */ CAST_DMI_System_Version_to_int_DATA_Packets_EVC_to_DMI(&_L6, &_L43);
  /* 1 */ CAST_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI(&_L5, &_L44);
  /* 1 */ CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI(&_L4, &_L45);
  /* 1 */
  CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI(&_L3, &_L46);
  /* 2 */ Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(&_L2, &_L51);
  /* 2 */ C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(&_L35, &_L47);
  /* 2 */ C_DMI_Train_Data_to_int_DATA_Packets_Bothways(&_L34, &_L48);
  /* 2 */ C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(&_L33, &_L49);
  /* 1 */ CAST_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI(&_L32, &_L50);
  kcg_copy_P044_other_data_TM_TrainToTrack(&tmp[0], &_L16);
  kcg_copy_DMI_Dynamic_int_array_T_DATA(&tmp[1], &_L36);
  kcg_copy_array_int_25(&tmp1[0], &tmp);
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(&tmp1[25], &_L37);
  kcg_copy_array_int_28(&tmp2[0], &tmp1);
  kcg_copy_DMI_Entry_Request_int_array_T_DATA(&tmp2[28], &_L38);
  kcg_copy_array_int_31(&tmp3[0], &tmp2);
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(&tmp3[31], &_L39);
  kcg_copy_array_int_40(&tmp4[0], &tmp3);
  kcg_copy_DMI_Text_Message_int_array_T_DATA(&tmp4[40], &_L40);
  kcg_copy_array_int_302(&tmp5[0], &tmp4);
  kcg_copy_DMI_Track_Description_int_array_T(&tmp5[302], &_L41);
  kcg_copy_array_int_627(&tmp6[0], &tmp5);
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(&tmp6[627], &_L42);
  kcg_copy_array_int_888(&tmp7[0], &tmp6);
  kcg_copy_DMI_System_Version_int_array_T_DATA(&tmp7[888], &_L43);
  kcg_copy_array_int_891(&tmp8[0], &tmp7);
  kcg_copy_DMI_Display_Control_int_array_T_DATA(&tmp8[891], &_L44);
  kcg_copy_array_int_894(&tmp9[0], &tmp8);
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(&tmp9[894], &_L45);
  kcg_copy_array_int_961(&tmp10[0], &tmp9);
  kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA(&tmp10[961], &_L46);
  kcg_copy_array_int_964(&tmp11[0], &tmp10);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&tmp11[964], &_L51);
  kcg_copy_array_int_975(&tmp12[0], &tmp11);
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(&tmp12[975], &_L47);
  kcg_copy_array_int_978(&tmp13[0], &tmp12);
  kcg_copy_DMI_Train_Data_int_array_T_DATA(&tmp13[978], &_L48);
  kcg_copy_array_int_987(&tmp14[0], &tmp13);
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(&tmp14[987], &_L49);
  kcg_copy_array_int_990(&_L29[0], &tmp14);
  kcg_copy_DMI_Icons_int_array_T_DATA(&_L29[990], &_L50);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(evc_to_dmi_int, &_L29);
  noname = _L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_EVC_to_DMI_to_int_Messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

