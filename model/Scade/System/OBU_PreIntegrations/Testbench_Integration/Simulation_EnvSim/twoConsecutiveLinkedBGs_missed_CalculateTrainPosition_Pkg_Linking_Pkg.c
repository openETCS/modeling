/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

void twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed */
void twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missed */kcg_bool missed,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::passedBG */positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::reset */kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L9,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L9,
      &outC->storedMissedBG);
  }
  if (reset | ((*passedBG).valid & ((*passedBG).q_link == Q_LINK_Linked) &
      (*passedBG).infoFromLinking.valid)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->storedMissedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else if (missed) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->storedMissedBG,
      missedLinkedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->storedMissedBG,
      &_L9);
  }
  outC->secondConsecutiveBG_missed = missed & /* 1 */
    positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      missedLinkedBG,
      &_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

