/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void deleteBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr */
void deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_shifted_in */positionedBG_T_TrainPosition_Types_Pck *BG_shifted_in,
  outC_deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::cont */ kcg_bool cont2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck _1_BG_out;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::cont */ kcg_bool cont;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck BG_out;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::cont */ kcg_bool cont3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck _4_BG_out;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::cont */ kcg_bool cont5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck _6_BG_out;
  
  outC->IfBlock1_clock = iteratorIndex < indexOfBG;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = kcg_true;
    cont2 = outC->_L2_IfBlock1;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1_IfBlock1, BG_in);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_1_BG_out,
      &outC->_L1_IfBlock1);
    outC->cont = cont2;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &_1_BG_out);
  }
  else {
    outC->else_clock_IfBlock1 = iteratorIndex == indexOfBG;
    if (outC->else_clock_IfBlock1) {
      outC->_L21_IfBlock1 = kcg_true;
      cont5 = outC->_L21_IfBlock1;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L12_IfBlock1,
        BG_shifted_in);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_6_BG_out,
        &outC->_L12_IfBlock1);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&BG_out, &_6_BG_out);
      cont = cont5;
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L14_IfBlock1,
        BG_shifted_in);
      outC->_L23_IfBlock1 = outC->_L14_IfBlock1.valid;
      cont3 = outC->_L23_IfBlock1;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_4_BG_out,
        &outC->_L14_IfBlock1);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&BG_out, &_4_BG_out);
      cont = cont3;
    }
    outC->cont = cont;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &BG_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

