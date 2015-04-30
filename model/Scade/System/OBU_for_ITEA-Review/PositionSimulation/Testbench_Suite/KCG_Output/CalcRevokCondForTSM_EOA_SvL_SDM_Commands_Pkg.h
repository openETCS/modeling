/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_
#define _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL */
extern void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::TrainAtStandstill */ odoMotionState_T_Obu_BasicTypes_Pkg TrainAtStandstill,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::noSupervisedReleaseSpeed */ kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds);

#endif /* _CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

