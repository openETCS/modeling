/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendTextMessage_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::sendTextMessage */
void sendTextMessage_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::sendTextMessage::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::sendTextMessage::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::intextMessage */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *intextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inTextReport */Q_TEXTREPORT inTextReport,
  /* manage_TextMessages_Pkg::sendTextMessage::inNID_TextMessage */NID_TEXTMESSAGE inNID_TextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inContext */DMI_context_TXT_MSG_T_DMI_Types_Pkg inContext,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichMode */M_MODE inWhichMode,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichLevel */M_LEVEL inWhichLevel,
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_textMessage)
{
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg tmp;
  /* manage_TextMessages_Pkg::sendTextMessage::needsStore */
  static kcg_bool needsStore;
  
  needsStore = (Q_TEXTCONFIRM_No_confirmation_required !=
      (*intextMessage).q_textConfirm) & (*intextMessage).valid;
  if (needsStore) {
    tmp.valid = kcg_true;
    tmp.dmi_textMessageID = (*intextMessage).textMessage_ID;
    tmp.timeStamp = inSystemTime;
    tmp.textReport = inTextReport;
    tmp.context = inContext;
    tmp.nid_textmessage = inNID_TextMessage;
    tmp.whichLevel = inWhichLevel;
    tmp.whichMode = inWhichMode;
    /* 1 */
    saveStatus_manage_TextMessages_Pkg(inStatusList, &tmp, outStatusList);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_textMessage,
      intextMessage);
  }
  else if ((*intextMessage).valid) {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      outStatusList,
      inStatusList);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_textMessage,
      intextMessage);
  }
  else {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      outStatusList,
      inStatusList);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_textMessage,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultText_manage_DMI_Output_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendTextMessage_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

