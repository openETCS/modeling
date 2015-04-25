/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _RBCSimulation_H_
#define _RBCSimulation_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* RBCSimulation */
extern void RBCSimulation(
  /* RBCSimulation::inMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inMessage,
  /* RBCSimulation::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* RBCSimulation::outMessage */ API_TrackSideInput_T_API_Msg_Pkg *outMessage);

#endif /* _RBCSimulation_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** RBCSimulation.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

