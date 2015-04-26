/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _synchWithDMI_manage_DMI_Output_Pkg_H_
#define _synchWithDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* manage_DMI_Output_Pkg::synchWithDMI */
extern void synchWithDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::synchWithDMI::dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::outputStatus */ dmiOutputs_T_manage_DMI_Output_Pkg *outputStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* manage_DMI_Output_Pkg::synchWithDMI::send_dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *send_dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::updatedOutputStatus */ dmiOutputs_T_manage_DMI_Output_Pkg *updatedOutputStatus);

#endif /* _synchWithDMI_manage_DMI_Output_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** synchWithDMI_manage_DMI_Output_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

