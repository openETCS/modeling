/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _receiveTextMessageAck_manage_TextMessages_Pkg_H_
#define _receiveTextMessageAck_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "clearStatus_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::receiveTextMessageAck */
extern void receiveTextMessageAck_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inTXT_MsgAck */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *inTXT_MsgAck,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *_21_outStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */ DMI_To_Modes_T_DMI_Types_Pkg *outML20);

#endif /* _receiveTextMessageAck_manage_TextMessages_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** receiveTextMessageAck_manage_TextMessages_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

