/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG */
void positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::odoPosition */OdometryLocations_T_Obu_BasicTypes_Pkg *odoPosition,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::passedRefBG */positionedBG_T_TrainPosition_Types_Pck *passedRefBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*passedRefBG).valid & (*passedRefBG).infoFromPassing.valid;
  if (IfBlock1_clock) {
    /* 6 */
    add_odo_2_Location_BasicLocationFunctions_Pkg(
      &(*passedRefBG).location,
      &(*passedRefBG).infoFromPassing.BG_Header.bgPosition.odo,
      odoPosition,
      position);
  }
  else {
    /* 1 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      odoPosition,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg,
      position);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

