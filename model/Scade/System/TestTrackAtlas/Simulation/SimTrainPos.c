/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SimTrainPos.h"

void SimTrainPos_reset(outC_SimTrainPos *outC)
{
}

/* SimTrainPos */
void SimTrainPos(
  /* SimTrainPos::Trigger_in */kcg_int Trigger_in,
  outC_SimTrainPos *outC)
{
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck _1_TrainPos;
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck TrainPos;
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck _5_TrainPos;
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck _4_TrainPos;
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck _6_TrainPos;
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck _7_TrainPos;
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck _2_TrainPos;
  /* SimTrainPos::TrainPos */ trainPosition_T_TrainPosition_Types_Pck _3_TrainPos;
  
  outC->_L1 = Trigger_in;
  outC->t = outC->_L1;
  outC->IfBlock1_clock = outC->t == 1;
  if (outC->IfBlock1_clock) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L1_IfBlock1,
      (trainPosition_T_TrainPosition_Types_Pck *) &TrainPos1);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_1_TrainPos,
      &outC->_L1_IfBlock1);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->TrainPos,
      &_1_TrainPos);
  }
  else {
    outC->_2_else_clock_IfBlock1 = outC->t == 2;
    if (outC->_2_else_clock_IfBlock1) {
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
        &outC->_L13_IfBlock1,
        (trainPosition_T_TrainPosition_Types_Pck *) &TrainPos2);
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
        &_3_TrainPos,
        &outC->_L13_IfBlock1);
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&TrainPos, &_3_TrainPos);
    }
    else {
      outC->_1_else_clock_IfBlock1 = outC->t == 3;
      if (outC->_1_else_clock_IfBlock1) {
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &outC->_L14_IfBlock1,
          (trainPosition_T_TrainPosition_Types_Pck *) &TrainPos3);
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &_5_TrainPos,
          &outC->_L14_IfBlock1);
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &_2_TrainPos,
          &_5_TrainPos);
      }
      else {
        outC->else_clock_IfBlock1 = outC->t == 4;
        if (outC->else_clock_IfBlock1) {
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &outC->_L15_IfBlock1,
            (trainPosition_T_TrainPosition_Types_Pck *) &TrainPos4);
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &_7_TrainPos,
            &outC->_L15_IfBlock1);
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &_4_TrainPos,
            &_7_TrainPos);
        }
        else {
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &outC->_L16_IfBlock1,
            (trainPosition_T_TrainPosition_Types_Pck *) &TrainPos0);
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &_6_TrainPos,
            &outC->_L16_IfBlock1);
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &_4_TrainPos,
            &_6_TrainPos);
        }
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &_2_TrainPos,
          &_4_TrainPos);
      }
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&TrainPos, &_2_TrainPos);
    }
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->TrainPos,
      &TrainPos);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SimTrainPos.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

