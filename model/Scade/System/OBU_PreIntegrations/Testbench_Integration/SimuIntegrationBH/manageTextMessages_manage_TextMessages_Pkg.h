/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _manageTextMessages_manage_TextMessages_Pkg_H_
#define _manageTextMessages_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "sendTextMessage_manage_TextMessages_Pkg.h"
#include "checkIfNeeded_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::manageTextMessages */
extern void manageTextMessages_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::manageTextMessages::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::manageTextMessages::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_FromBG */ kcg_bool dmi_FromBG,
  /* manage_TextMessages_Pkg::manageTextMessages::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::manageTextMessages::announcedLevelTransition */ T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_textMessage,
  /* manage_TextMessages_Pkg::manageTextMessages::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList);

#endif /* _manageTextMessages_manage_TextMessages_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageTextMessages_manage_TextMessages_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

