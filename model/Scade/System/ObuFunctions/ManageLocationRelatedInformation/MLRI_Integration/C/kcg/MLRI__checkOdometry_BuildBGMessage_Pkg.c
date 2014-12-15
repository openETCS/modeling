/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__checkOdometry_BuildBGMessage_Pkg.h"

/* BuildBGMessage_Pkg::checkOdometry */
void MLRI__checkOdometry_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::checkOdometry::actualOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* BuildBGMessage_Pkg::checkOdometry::inCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *inCollector,
  /* BuildBGMessage_Pkg::checkOdometry::outMessageComplete */kcg_bool *outMessageComplete,
  /* BuildBGMessage_Pkg::checkOdometry::outBGIsChangedEarly */kcg_bool *outBGIsChangedEarly,
  /* BuildBGMessage_Pkg::checkOdometry::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector)
{
  kcg_bool tmp;
  /* BuildBGMessage_Pkg::checkOdometry::IfBlock1::then::_L15 */ kcg_bool _L15_IfBlock1;
  /* BuildBGMessage_Pkg::checkOdometry::isValid */ kcg_bool isValid;
  
  isValid = (*actualOdometry).valid & ((*inCollector).totalTelegrams > 0);
  if (isValid) {
    tmp = /* 2 */
      MLRI__checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
        &(*actualOdometry).odo,
        &(*inCollector).positionFirstContact.odometerOfBaliseDetection.odo,
        (MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *)
          &MLRI__cMaxDistanceBalisesInGroup_BG_Types_Pkg);
    *outMessageComplete = !tmp;
    _L15_IfBlock1 = *outMessageComplete & ((*inCollector).collectedTelegrams <
        (*inCollector).collectedTelegrams);
    *outBGIsChangedEarly = _L15_IfBlock1;
    /* 1 */
    MLRI__updateCollectorSingleBB_BuildBGMessage_Pkg_BaliseSupport(
      (kcg_bool) (_L15_IfBlock1 & (*inCollector).badBaliseFlag),
      inCollector,
      outCollector);
  }
  else {
    *outMessageComplete = kcg_false;
    *outBGIsChangedEarly = kcg_false;
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(outCollector, inCollector);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__checkOdometry_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

