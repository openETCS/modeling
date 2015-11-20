/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMLtoElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::mapMLtoElement */
void mapMLtoElement_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::mapMLtoElement::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::mapMLtoElement::announcedLevel */ M_LEVEL announcedLevel,
  /* manage_TextMessages_Pkg::mapMLtoElement::outDerivedElement */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *outDerivedElement)
{
  /* manage_TextMessages_Pkg::mapMLtoElement::_L14 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L14;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L16 */
  static kcg_bool _L16;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L18 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L18;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L19 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L19;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L20 */
  static kcg_bool _L20;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L21 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L21;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L22 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L22;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L24 */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _L24;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L26 */
  static M_MODE _L26;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L27 */
  static kcg_int _L27;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L28 */
  static Q_TEXTREPORT _L28;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L29 */
  static kcg_int _L29;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L32 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L32;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L33 */
  static kcg_bool _L33;
  /* manage_TextMessages_Pkg::mapMLtoElement::_L34 */
  static M_LEVEL _L34;
  
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &_L32,
    inModeLevel_Ack);
  _L16 = _L32.valid;
  _L27 = 0;
  _L28 = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  _L20 = !_L16;
  _L22 = con_undefined_DMI_Types_Pkg;
  _L33 = _L32.LevelNeedsAck;
  _L21 = con_levelMgmt_DMI_Types_Pkg;
  _L24 = con_modeChange_DMI_Types_Pkg;
  /* 2 */ if (_L33) {
    _L19 = _L21;
  }
  else {
    _L19 = _L24;
  }
  /* 1 */ if (_L20) {
    _L18 = _L22;
  }
  else {
    _L18 = _L19;
  }
  _L29 = 0;
  _L34 = announcedLevel;
  _L26 = _L32.whichMode;
  _L14.valid = _L16;
  _L14.dmi_textMessageID = _L27;
  _L14.timeStamp = _L27;
  _L14.textReport = _L28;
  _L14.context = _L18;
  _L14.nid_textmessage = _L29;
  _L14.whichLevel = _L34;
  _L14.whichMode = _L26;
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(outDerivedElement, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapMLtoElement_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

