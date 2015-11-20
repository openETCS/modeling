/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int */
void CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::dmi_text_message_ct */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::dmi_text_message_int */ DMI_Text_Message_int_array_T_DATA *dmi_text_message_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int */
  static array_int_260 tmp;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L1 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L9 */
  static kcg_bool _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L8 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L7 */
  static DMI_TextMessage_ID_T_DMI_Types_Pkg _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L6 */
  static DMI_Q_TEXT_DMI_Types_Pkg _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L5 */
  static L_TEXT _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L4 */
  static DMI_TEXT_DMI_Types_Pkg _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L3 */
  static Q_TEXTCLASS _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L2 */
  static Q_TEXTCONFIRM _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L11 */
  static DMI_TEXT_INT_Array_T_DATA _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L13 */
  static kcg_int _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L14 */
  static kcg_int _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L15 */
  static array_int_5 _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L16 */
  static array_int_2 _L16;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::_L17 */
  static DMI_Text_Message_int_array_T_DATA _L17;
  
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L1,
    dmi_text_message_ct);
  _L2 = _L1.q_textConfirm;
  _L3 = _L1.q_textClass;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_L4, &_L1.x_text);
  _L5 = _L1.l_text;
  _L6 = _L1.q_text;
  _L7 = _L1.textMessage_ID;
  _L8 = _L1.system_clock;
  _L9 = _L1.valid;
  _L10 = /* 1 */ Bool_to_Int_Utilities(_L9);
  /* 1 */ CAST_DMI_TEXT_to_int_DATA_Variables(&_L4, &_L11);
  _L12 = /* 1 */ CAST_DMI_Q_TEXT_to_int_DATA_Variables(_L6);
  _L13 = /* 1 */ CAST_Q_TEXTCLASS_to_int_TM_conversions(_L3);
  _L14 = /* 1 */ CAST_Q_TEXTCONFIRM_to_int_TM_conversions(_L2);
  _L15[0] = _L10;
  _L15[1] = _L8;
  _L15[2] = _L7;
  _L15[3] = _L12;
  _L15[4] = _L5;
  _L16[0] = _L13;
  _L16[1] = _L14;
  kcg_copy_array_int_5(&tmp[0], &_L15);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&tmp[5], &_L11);
  kcg_copy_array_int_260(&_L17[0], &tmp);
  kcg_copy_array_int_2(&_L17[260], &_L16);
  kcg_copy_DMI_Text_Message_int_array_T_DATA(dmi_text_message_int, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

