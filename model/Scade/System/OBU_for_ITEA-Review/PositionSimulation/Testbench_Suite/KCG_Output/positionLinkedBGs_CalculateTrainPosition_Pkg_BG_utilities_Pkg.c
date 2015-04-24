/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
void positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedBGs */ LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedPositionedBGs */ linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedPositionedBGs)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L6 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L6;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L6,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  for (i = 0; i < 4; i++) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&tmp, &_L6);
    /* 1 */
    positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp,
      passedPositionedBG,
      &(*linkedBGs)[i],
      trainProperties,
      &_L6,
      &(*linkedPositionedBGs)[i]);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

