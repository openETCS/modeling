/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::improveUnlinkedBGLocation */
void improveUnlinkedBGLocation_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::improveUnlinkedBGLocation::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::improveUnlinkedBGLocation::prevPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *prevPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::improveUnlinkedBGLocation::unlinkedBG_in */ positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  /* CalculateTrainPosition_Pkg::improveUnlinkedBGLocation::unlinkedBG_out */ positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_out)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::improveUnlinkedBGLocation::_L31 */ kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::improveUnlinkedBGLocation::_L30 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L30;
  
  /* 1 */
  odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
    &(*passedPositionedBG).location,
    &(*prevPassedLinkedBG).location,
    &(*passedPositionedBG).infoFromPassing.odometrystamp,
    &(*prevPassedLinkedBG).infoFromPassing.odometrystamp,
    &(*unlinkedBG_in).infoFromPassing.odometrystamp,
    &tmp);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &tmp,
    &(*unlinkedBG_in).location,
    &_L30,
    &_L31);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    unlinkedBG_out,
    unlinkedBG_in);
  if ((*passedPositionedBG).valid & ((*passedPositionedBG).q_link ==
      Q_LINK_Linked) & (*passedPositionedBG).infoFromLinking.valid &
    (*prevPassedLinkedBG).valid & (*unlinkedBG_in).valid &
    ((*unlinkedBG_in).q_link == Q_LINK_Unlinked) & _L31) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*unlinkedBG_out).location,
      &_L30);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*unlinkedBG_out).location,
      &(*unlinkedBG_in).location);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** improveUnlinkedBGLocation_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

