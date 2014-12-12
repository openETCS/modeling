/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CheckMode_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMode */
kcg_bool MLRI__CheckMode_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::currentMode */MLRI__M_MODE currentMode)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::_L35 */ kcg_bool _L35;
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::bgConsistansyIsActive */ kcg_bool bgConsistansyIsActive;
  
  _L35 = currentMode == MLRI__M_MODE_Post_Trip;
  bgConsistansyIsActive = (currentMode == MLRI__M_MODE_Stand_By) |
    (currentMode == MLRI__M_MODE_Shunting) | (currentMode ==
      MLRI__M_MODE_Staff_Responsible) | (currentMode == MLRI__M_MODE_Sleeping) |
    (currentMode == MLRI__M_MODE_Trip) | (currentMode ==
      MLRI__M_MODE_Non_Leading) | (currentMode == MLRI__M_MODE_Unfitted) |
    (currentMode == MLRI__M_MODE_Reversing) | (currentMode ==
      MLRI__M_MODE_National_System) | _L35 | _L35 | (currentMode ==
      MLRI__M_MODE_On_Sight) | (currentMode ==
      MLRI__M_MODE_Limited_Supervision) | (currentMode ==
      MLRI__M_MODE_Full_Supervision);
  return bgConsistansyIsActive;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckMode_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

