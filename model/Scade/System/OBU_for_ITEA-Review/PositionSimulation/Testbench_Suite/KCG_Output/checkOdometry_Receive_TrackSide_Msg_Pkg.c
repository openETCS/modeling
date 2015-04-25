/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkOdometry */
void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */ odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool *outMessageComplete,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool *outBGIsChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L15 */ kcg_bool _L15_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L3 */ kcg_bool _L3_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::isValid */ kcg_bool isValid;
  
  isValid = (*actualOdometry).valid & ((*inCollector).totalTelegrams > 0);
  if (isValid) {
    _L3_IfBlock1 = !/* 2 */
      checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
        &(*actualOdometry).odo,
        &(*inCollector).positionFirstContact.odometerOfBaliseDetection.odo,
        (OdometryLocations_T_Obu_BasicTypes_Pkg *)
          &cMaxDistanceBalisesInGroup_BG_Types_Pkg);
    _L15_IfBlock1 = _L3_IfBlock1 & ((*inCollector).collectedTelegrams <
        (*inCollector).collectedTelegrams);
    *outMessageComplete = !(*inCollector).BGMessageSent & _L3_IfBlock1;
    *outBGIsChangedEarly = _L15_IfBlock1;
    /* 1 */
    updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      (kcg_bool) (_L15_IfBlock1 & (*inCollector).badBaliseFlag),
      inCollector,
      outCollector);
  }
  else {
    *outBGIsChangedEarly = kcg_false;
    *outMessageComplete = kcg_false;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, inCollector);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** checkOdometry_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

