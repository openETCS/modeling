/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _doEntryRequest_manage_DMI_Output_Pkg_H_
#define _doEntryRequest_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* manage_DMI_Output_Pkg::doEntryRequest */
extern void doEntryRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doEntryRequest::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_menuRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */ kcg_bool *sendTrainDataToDMI);

#endif /* _doEntryRequest_manage_DMI_Output_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** doEntryRequest_manage_DMI_Output_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

