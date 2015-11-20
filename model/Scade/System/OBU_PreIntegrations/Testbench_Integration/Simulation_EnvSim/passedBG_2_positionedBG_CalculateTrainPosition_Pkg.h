/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_
#define _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
extern void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG */positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BGpassedInUnexpectedDirection */kcg_bool *BGpassedInUnexpectedDirection,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::linkedBGs */linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedBGs);

#endif /* _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

