/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_
#define _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"
#include "CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_Commands_Pkg::CalcRevokationCondForTSM */
extern void CalcRevokationCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::noSupervisedReleaseSpeed */ kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::TrainAtStandstill */ odoMotionState_T_Obu_BasicTypes_Pkg TrainAtStandstill,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds);

#endif /* _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcRevokationCondForTSM_SDM_Commands_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

