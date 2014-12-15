/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/** "Remark_1" {Description = "Calculates the train position on the base of the odometry and a passed reference BG. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG */
void MLRI__positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::odoPosition */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *odoPosition,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::passedRefBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedRefBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *position)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*passedRefBG).valid & (*passedRefBG).infoFromPassing.valid;
  if (IfBlock1_clock) {
    /* 6 */
    MLRI__add_odo_2_Location_BasicLocationFunctions_Pkg(
      &(*passedRefBG).location,
      &(*passedRefBG).infoFromPassing.bgPosition.odo,
      odoPosition,
      position);
  }
  else {
    /* 1 */
    MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg(
      odoPosition,
      (MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &MLRI__cOdometryInitialValue_Obu_BasicTypes_Pkg,
      position);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

