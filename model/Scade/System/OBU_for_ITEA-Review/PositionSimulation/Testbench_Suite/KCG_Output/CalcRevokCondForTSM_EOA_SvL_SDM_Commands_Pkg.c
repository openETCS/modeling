/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL */
void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::TrainAtStandstill */ odoMotionState_T_Obu_BasicTypes_Pkg TrainAtStandstill,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::noSupervisedReleaseSpeed */ kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::FLOI_eq_SBI2 */ kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L31 */ kcg_bool _L31;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L9 */ kcg_bool _L9;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L50 */ Speeds_T_SDM_Types_Pkg _L50;
  
  (*revokationConds).r0 = TrainAtStandstill == noMotion_Obu_BasicTypes_Pkg;
  FLOI_eq_SBI2 = !floiIsSB1;
  if (noSupervisedReleaseSpeed) {
    _L50.V_est = (*speeds).V_est;
    _L50.V_MRSP = (*speeds).V_MRSP;
    _L50.V_release = 0.0;
    _L50.V_target = (*speeds).V_target;
    _L50.v_p_mrdt = (*speeds).v_p_mrdt;
    _L50.v_sbi_mrdt = (*speeds).v_sbi_mrdt;
    _L50.v_FLOI = (*speeds).v_FLOI;
    _L50.dV_warning_V_MRSP = (*speeds).dV_warning_V_MRSP;
    _L50.dV_warning_V_target = (*speeds).dV_warning_V_target;
    _L50.dV_sbi_V_MRSP = (*speeds).dV_sbi_V_MRSP;
    _L50.dV_sbi_V_target = (*speeds).dV_sbi_V_target;
    _L50.dV_ebi_V_MRSP = (*speeds).dV_ebi_V_MRSP;
    _L50.dV_ebi_V_target = (*speeds).dV_ebi_V_target;
  }
  else {
    kcg_copy_Speeds_T_SDM_Types_Pkg(&_L50, speeds);
  }
  _L31 = _L50.V_est <= _L50.V_release;
  (*revokationConds).r1 = _L31;
  _L9 = !_L31 & (_L50.V_est <= _L50.V_MRSP);
  (*revokationConds).r2 = _L9 & ((FLOI_eq_SBI2 &
        ((*trainLocations).d_maxSafeFrontEndPos <= (*locations).d_I_of_V_est)) |
      (((*locations).d_I_of_V_est >= (*trainLocations).d_est_frontendPos) &
        floiIsSB1));
  (*revokationConds).r3 = _L9 & ((floiIsSB1 &
        ((*trainLocations).d_est_frontendPos <= (*locations).d_P_of_V_est)) |
      (((*locations).d_P_of_V_est >= (*trainLocations).d_maxSafeFrontEndPos) &
        FLOI_eq_SBI2));
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

