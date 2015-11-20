/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _sendTextMessage_manage_TextMessages_Pkg_H_
#define _sendTextMessage_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "saveStatus_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::sendTextMessage */
extern void sendTextMessage_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::sendTextMessage::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::sendTextMessage::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::intextMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *intextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inTextReport */ Q_TEXTREPORT inTextReport,
  /* manage_TextMessages_Pkg::sendTextMessage::inNID_TextMessage */ NID_TEXTMESSAGE inNID_TextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inContext */ DMI_context_TXT_MSG_T_DMI_Types_Pkg inContext,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichMode */ M_MODE inWhichMode,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichLevel */ M_LEVEL inWhichLevel,
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *_13_outStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *_12_dmi_textMessage);

#endif /* _sendTextMessage_manage_TextMessages_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendTextMessage_manage_TextMessages_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

