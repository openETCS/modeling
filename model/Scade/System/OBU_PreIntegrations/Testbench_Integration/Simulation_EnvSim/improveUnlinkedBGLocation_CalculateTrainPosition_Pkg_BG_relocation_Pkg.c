/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation */
void improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_2 */positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_2,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_1 */positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_1,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_in */positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_out */positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_out)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L31 */
  static kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L30 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L30;
  
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

