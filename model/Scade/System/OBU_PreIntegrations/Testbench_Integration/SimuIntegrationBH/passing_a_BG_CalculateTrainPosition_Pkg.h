/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _passing_a_BG_CalculateTrainPosition_Pkg_H_
#define _passing_a_BG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::passing_a_BG */
extern void passing_a_BG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */ kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */ kcg_bool *overrun,
  /* CalculateTrainPosition_Pkg::passing_a_BG::foundNotWhereAnnounced */ kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGpassedInUnexpectedDirection */ kcg_bool *BGpassedInUnexpectedDirection);

#endif /* _passing_a_BG_CalculateTrainPosition_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** passing_a_BG_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

