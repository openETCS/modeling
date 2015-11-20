/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_
#define _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"
#include "CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcRevokationCondForTSM */
extern void CalcRevokationCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds);

#endif /* _CalcRevokationCondForTSM_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokationCondForTSM_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

