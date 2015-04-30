/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _collectRadioMessages_radioOutput_Pkg_H_
#define _collectRadioMessages_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "mapToRTM_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */


/* radioOutput_Pkg::collectRadioMessages */
extern void collectRadioMessages_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioMessages::inFromPositionReport */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::collectRadioMessages::inFromRadioSessionManagement */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromRadioSessionManagement,
  /* radioOutput_Pkg::collectRadioMessages::inFromOther */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromOther,
  /* radioOutput_Pkg::collectRadioMessages::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::collectRadioMessages::outRadioToAPI */ API_EuroRadioOutput_T_API_RadioCommunication_Pkg *outRadioToAPI);

#endif /* _collectRadioMessages_radioOutput_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** collectRadioMessages_radioOutput_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

