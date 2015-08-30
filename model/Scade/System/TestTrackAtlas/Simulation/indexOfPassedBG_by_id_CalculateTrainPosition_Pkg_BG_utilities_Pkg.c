/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id */
void indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG */passedBG_T_BG_Types_Pkg *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::enable */kcg_bool enable,
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L6, BG);
  outC->_L87 = outC->_L6.valid;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L88, &outC->_L6.BG_Header);
  outC->_L89 = outC->_L88.valid;
  outC->_L90 = outC->_L87 & outC->_L89;
  outC->_L86 = 0;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L25,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  outC->_L23 = outC->_L88.q_link;
  outC->_L22 = outC->_L88.nid_bg;
  outC->_L21 = outC->_L88.nid_c;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  outC->_L19.valid = outC->_L90;
  outC->_L19.nid_c = outC->_L21;
  outC->_L19.nid_bg = outC->_L22;
  outC->_L19.q_link = outC->_L23;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L19.location, &outC->_L20);
  outC->_L19.seqNoOnTrack = outC->_L86;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L19.infoFromLinking,
    &outC->_L25);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L19.infoFromPassing, &outC->_L6);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, BGs);
  outC->_L4 = enable;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L19,
    &outC->_L5,
    outC->_L4,
    &outC->Context_1);
  outC->_L1 = outC->Context_1.indexOfBG;
  outC->_L2 = outC->Context_1.BG_found;
  outC->_L3 = outC->Context_1.indexValid;
  outC->indexValid = outC->_L3;
  outC->BG_found = outC->_L2;
  outC->indexOfBG = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

