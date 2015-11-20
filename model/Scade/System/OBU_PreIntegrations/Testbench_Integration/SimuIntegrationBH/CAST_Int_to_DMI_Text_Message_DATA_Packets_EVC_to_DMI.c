/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message */
void CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::dmi_text_message_int */ DMI_Text_Message_int_array_T_DATA *dmi_text_message_int,
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::dmi_text_message_ct */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L19 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L19;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L20 */
  static DMI_Text_Message_int_array_T_DATA _L20;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L21 */
  static array_int_5 _L21;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L26 */
  static kcg_int _L26;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L27 */
  static kcg_bool _L27;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L29 */
  static DMI_Q_TEXT_DMI_Types_Pkg _L29;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L30 */
  static DMI_TEXT_INT_Array_T_DATA _L30;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L31 */
  static kcg_int _L31;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L32 */
  static kcg_int _L32;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L33 */
  static Q_TEXTCLASS _L33;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L34 */
  static Q_TEXTCONFIRM _L34;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L22 */
  static kcg_int _L22;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L23 */
  static kcg_int _L23;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L24 */
  static kcg_int _L24;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L25 */
  static kcg_int _L25;
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L35 */
  static DMI_TEXT_DMI_Types_Pkg _L35;
  
  kcg_copy_DMI_Text_Message_int_array_T_DATA(&_L20, dmi_text_message_int);
  kcg_copy_array_int_5(&_L21, (array_int_5 *) &_L20[0]);
  _L26 = _L21[0];
  _L27 = /* 1 */ Int_to_Bool_Utilities(_L26);
  _L25 = _L21[1];
  _L24 = _L21[2];
  _L23 = _L21[3];
  _L29 = /* 2 */ CAST_int_to_DMI_Q_TEXT_DATA_Variables(_L23);
  _L22 = _L21[4];
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &_L30,
    (DMI_TEXT_INT_Array_T_DATA *) &_L20[5]);
  /* 1 */ CAST_int_to_DMI_TEXT_DATA_Variables(&_L30, &_L35);
  _L31 = _L20[260];
  _L33 = /* 1 */ CAST_Int_to_Q_TEXTCLASS_TM_conversions(_L31);
  _L32 = _L20[261];
  _L34 = /* 1 */ CAST_Int_to_Q_TEXTCONFIRM_TM_conversions(_L32);
  _L19.valid = _L27;
  _L19.system_clock = _L25;
  _L19.textMessage_ID = _L24;
  _L19.q_text = _L29;
  _L19.l_text = _L22;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_L19.x_text, &_L35);
  _L19.q_textClass = _L33;
  _L19.q_textConfirm = _L34;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_text_message_ct,
    &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

