/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _doEntryRequest_manage_DMI_Output_Pkg_H_
#define _doEntryRequest_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "mapEntryForLevel_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Output_Pkg::doEntryRequest */
extern void doEntryRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doEntryRequest::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *_6_new_menuRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */ kcg_bool *_5_sendTrainDataToDMI,
  /* manage_DMI_Output_Pkg::doEntryRequest::outLevelsNeeded */ kcg_bool *_4_outLevelsNeeded);

#endif /* _doEntryRequest_manage_DMI_Output_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** doEntryRequest_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

