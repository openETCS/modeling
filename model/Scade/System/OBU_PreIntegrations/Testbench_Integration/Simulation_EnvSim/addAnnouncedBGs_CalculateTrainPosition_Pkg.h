/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_
#define _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
extern void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::overrun */kcg_bool *overrun);

#endif /* _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** addAnnouncedBGs_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

