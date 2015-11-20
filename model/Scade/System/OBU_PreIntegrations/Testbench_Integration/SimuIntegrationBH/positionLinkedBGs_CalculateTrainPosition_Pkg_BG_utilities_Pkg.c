/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
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
  static kcg_int i2;
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg acc;
  static kcg_int i;
  static LocWithInAcc_T_Obu_BasicTypes_Pkg noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L2 */
  static LinkedBGs_T_BG_Types_Pkg _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L3 */
  static linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L4 */
  static linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L6 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L7 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L8 */
  static trainProperties_T_TrainPosition_Types_Pck _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L9 */
  static array_168567 _L9;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, passedPositionedBG);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&_L2, linkedBGs);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L7,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  /* pow */ for (i2 = 0; i2 < 33; i2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4[i2], &_L1);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L8, trainProperties);
  /* pow */ for (i1 = 0; i1 < 33; i1++) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L9[i1], &_L8);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L6, &_L7);
  for (i = 0; i < 33; i++) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&acc, &_L6);
    /* 1 */
    positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &acc,
      &_L4[i],
      &_L2[i],
      &_L9[i],
      &_L6,
      &_L3[i]);
  }
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    linkedPositionedBGs,
    &_L3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

