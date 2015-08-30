/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg.h"

void twoConsecutiveLinkedBGs_m_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  positionedBGs_ids_notEqual_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed */
void twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missed */kcg_bool missed,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::passedBG */positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::reset */kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::storedMissedBG */ positionedBG_T_TrainPosition_Types_Pck last_storedMissedBG;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->InitVal_1,
    (struct__16883 *) &cNoPositionedBG_CalculateTrainPosition_Pkg);
  outC->_L24 = missed;
  outC->MemCond_1 = outC->_L24;
  outC->_L6 = reset;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12, passedBG);
  outC->_L13 = outC->_L12.valid;
  outC->_L14 = outC->_L12.q_link;
  outC->_L16 = Q_LINK_Linked;
  outC->_L17 = outC->_L14 == outC->_L16;
  outC->_L15 = outC->_L12.infoFromLinking.valid;
  outC->_L21 = outC->_L13 & outC->_L17 & outC->_L15;
  outC->linkedAnnouncedBG_passed = outC->_L21;
  outC->_L27 = outC->linkedAnnouncedBG_passed;
  outC->_L29 = outC->_L6 | outC->_L27;
  outC->Reset_1 = outC->_L29;
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedMissedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedMissedBG,
      &outC->storedMissedBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L10, missedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9,
    &last_storedMissedBG);
  /* 1 */
  positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L10,
    &outC->_L9,
    &outC->Context_1);
  outC->_L11 = outC->Context_1.idsNotEqual;
  outC->_L25 = outC->_L24 & outC->_L11;
  outC->secondConsecutiveBG_missed = outC->_L25;
  kcg_copy_struct__16883(&outC->_L9_1, &outC->InitVal_1);
  if (outC->init) {
    kcg_copy_struct__16883(&outC->_L5_1, &outC->_L9_1);
  }
  else {
    kcg_copy_struct__16883(&outC->_L5_1, &outC->_L8_1);
  }
  outC->_L1_1 = outC->Reset_1;
  kcg_copy_struct__16883(&outC->_L2_1, &outC->InitVal_1);
  outC->_L3_1 = outC->MemCond_1;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, missedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->M_Input_1, &outC->_L2);
  kcg_copy_struct__16883(&outC->_L6_1, &outC->M_Input_1);
  if (outC->_L3_1) {
    kcg_copy_struct__16883(&outC->_L7_1, &outC->_L6_1);
  }
  else {
    kcg_copy_struct__16883(&outC->_L7_1, &outC->_L5_1);
  }
  if (outC->_L1_1) {
    kcg_copy_struct__16883(&outC->_L8_1, &outC->_L2_1);
  }
  else {
    kcg_copy_struct__16883(&outC->_L8_1, &outC->_L7_1);
  }
  kcg_copy_struct__16883(&outC->Out_1, &outC->_L8_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, &outC->Out_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedMissedBG,
    &outC->_L4);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

