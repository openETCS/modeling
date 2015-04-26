/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA */
void CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::TrainAtStandstill */ odoMotionState_T_Obu_BasicTypes_Pkg TrainAtStandstill,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::FLOI_eq_SBI2 */ kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L37 */ kcg_bool _L37;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L20 */ kcg_bool _L20;
  
  (*revokationConds).r0 = TrainAtStandstill == noMotion_Obu_BasicTypes_Pkg;
  FLOI_eq_SBI2 = !floiIsSB1;
  _L20 = (*speeds).V_est <= (*speeds).V_target;
  (*revokationConds).r1 = _L20;
  _L37 = !_L20 & ((*speeds).V_est <= (*speeds).V_MRSP);
  (*revokationConds).r2 = _L37 & ((FLOI_eq_SBI2 &
        ((*trainLocations).d_maxSafeFrontEndPos <= (*locations).d_I_of_V_est)) |
      (((*locations).d_I_of_V_est >= (*trainLocations).d_est_frontendPos) &
        floiIsSB1));
  (*revokationConds).r3 = _L37 & ((floiIsSB1 &
        ((*trainLocations).d_est_frontendPos <= (*locations).d_P_of_V_est)) |
      (((*locations).d_P_of_V_est >= (*trainLocations).d_maxSafeFrontEndPos) &
        FLOI_eq_SBI2));
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

