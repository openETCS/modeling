/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapToRTM_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapToRTM */
void mapToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapToRTM::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::mapToRTM::toRTM */ RadioManagement_T_API_RadioCommunication_Pkg *toRTM)
{
  (*toRTM).valid = (*cmdsToMobile).valid;
  (*toRTM).networkID = (*cmdsToMobile).radioNetworkID;
  (*toRTM).cmd = /* 1 */ mapActionToCmd_radioOutput_Pkg((*cmdsToMobile).action);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** mapToRTM_radioOutput_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

