/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation */
void MLRI__improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_2 */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_2,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_1 */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_1,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_in */MLRI__positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_out */MLRI__positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_out)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L31 */ kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L30 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L30;
  
  /* 1 */
  MLRI__odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
    &(*passedLinkedBG_2).location,
    &(*passedLinkedBG_1).location,
    &(*passedLinkedBG_2).infoFromPassing.bgPosition.odo,
    &(*passedLinkedBG_1).infoFromPassing.bgPosition.odo,
    &(*unlinkedBG_in).infoFromPassing.bgPosition.odo,
    &tmp);
  /* 1 */
  MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &tmp,
    &(*unlinkedBG_in).location,
    &_L30,
    &_L31);
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    unlinkedBG_out,
    unlinkedBG_in);
  if ((*passedLinkedBG_2).valid & ((*passedLinkedBG_2).q_link ==
      MLRI__Q_LINK_Linked) & (*passedLinkedBG_2).infoFromPassing.valid &
    !MLRI__kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      passedLinkedBG_2,
      passedLinkedBG_1) & ((*passedLinkedBG_1).valid &
      ((*passedLinkedBG_1).q_link == MLRI__Q_LINK_Linked) &
      (*passedLinkedBG_1).infoFromPassing.valid) & ((*unlinkedBG_in).valid &
      ((*unlinkedBG_in).q_link == MLRI__Q_LINK_Unlinked)) & _L31) {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*unlinkedBG_out).location,
      &_L30);
  }
  else {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*unlinkedBG_out).location,
      &(*unlinkedBG_in).location);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

