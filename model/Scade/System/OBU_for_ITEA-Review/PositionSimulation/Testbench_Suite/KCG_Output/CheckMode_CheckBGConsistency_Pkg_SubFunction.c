/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMode */
kcg_bool CheckMode_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::currentMode */ M_MODE currentMode)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L35 */ kcg_bool _L35;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::bgConsistansyIsActive */ kcg_bool bgConsistansyIsActive;
  
  _L35 = currentMode == M_MODE_Post_Trip;
  bgConsistansyIsActive = (currentMode == M_MODE_Stand_By) | (currentMode ==
      M_MODE_Shunting) | (currentMode == M_MODE_Staff_Responsible) |
    (currentMode == M_MODE_Sleeping) | (currentMode == M_MODE_Trip) |
    (currentMode == M_MODE_Non_Leading) | (currentMode == M_MODE_Unfitted) |
    (currentMode == M_MODE_Reversing) | (currentMode ==
      M_MODE_National_System) | _L35 | _L35 | (currentMode == M_MODE_On_Sight) |
    (currentMode == M_MODE_Limited_Supervision) | (currentMode ==
      M_MODE_Full_Supervision);
  return bgConsistansyIsActive;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckMode_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

