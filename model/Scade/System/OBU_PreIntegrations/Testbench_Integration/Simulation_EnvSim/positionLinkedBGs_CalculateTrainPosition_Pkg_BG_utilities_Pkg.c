/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
void positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::passedPositionedBG */positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedBGs */LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedPositionedBGs */linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedPositionedBGs)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L6 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L6;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L6,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  for (i = 0; i < 33; i++) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

