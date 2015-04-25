/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation */
void improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_2 */ positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_2,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_1 */ positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_1,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_in */ positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_out */ positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_out)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L31 */ kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L30 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L30;
  
  /* 1 */
  odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
    &(*passedLinkedBG_2).location,
    &(*passedLinkedBG_1).location,
    &(*passedLinkedBG_2).infoFromPassing.BG_Header.bgPosition.odo,
    &(*passedLinkedBG_1).infoFromPassing.BG_Header.bgPosition.odo,
    &(*unlinkedBG_in).infoFromPassing.BG_Header.bgPosition.odo,
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
  if ((*passedLinkedBG_2).valid & ((*passedLinkedBG_2).q_link ==
      Q_LINK_Linked) & (*passedLinkedBG_2).infoFromPassing.valid &
    !kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      passedLinkedBG_2,
      passedLinkedBG_1) & ((*passedLinkedBG_1).valid &
      ((*passedLinkedBG_1).q_link == Q_LINK_Linked) &
      (*passedLinkedBG_1).infoFromPassing.valid) & ((*unlinkedBG_in).valid &
      ((*unlinkedBG_in).q_link == Q_LINK_Unlinked)) & _L31) {
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
** improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

