/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOfBG_onTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr */
void indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG_asElementFromBGs */positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int noname;
  
  outC->_L16 = prevIndex;
  noname = outC->_L16;
  outC->_L46 = cNoValidIndex_CalculateTrainPosition_Pkg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L21, BG);
  outC->_L23 = outC->_L21.valid;
  outC->_L25 = !outC->_L23;
  outC->invalidateIndex = outC->_L25;
  outC->_L45 = outC->invalidateIndex;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L19,
    BG_asElementFromBGs);
  outC->_L26 = outC->_L19.valid;
  outC->_L27 = !outC->_L26;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L28, BG);
  outC->_L29 = outC->_L28.infoFromPassing.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L30,
    BG_asElementFromBGs);
  outC->_L31 = outC->_L30.infoFromPassing.valid;
  outC->_L32 = outC->_L28.seqNoOnTrack;
  outC->_L33 = outC->_L30.seqNoOnTrack;
  outC->_L34 = outC->_L32 <= outC->_L33;
  outC->_L35 = outC->_L23 & outC->_L26 & outC->_L29 & outC->_L31 & outC->_L34;
  outC->_L38 = !outC->_L31;
  outC->_L37 = outC->_L23 & outC->_L26 & outC->_L29 & outC->_L38;
  outC->_L40 = !outC->_L29;
  outC->_L41 = outC->_L28.location.nominal;
  outC->_L42 = outC->_L30.location.nominal;
  outC->_L43 = outC->_L41 <= outC->_L42;
  outC->_L39 = outC->_L23 & outC->_L26 & outC->_L40 & outC->_L38 & outC->_L43;
  outC->_L24 = outC->_L25 | outC->_L27 | outC->_L35 | outC->_L37 | outC->_L39;
  outC->stopIteration = outC->_L24;
  outC->_L44 = outC->stopIteration;
  outC->_L18 = iteratorIndex;
  if (outC->_L44) {
    outC->_L11 = outC->_L18;
  }
  else {
    outC->_L11 = outC->_L46;
  }
  outC->_L10 = cNoValidIndex_CalculateTrainPosition_Pkg;
  outC->_L8 = !outC->_L44;
  if (outC->_L45) {
    outC->_L7 = outC->_L10;
  }
  else {
    outC->_L7 = outC->_L11;
  }
  outC->indexOfBG = outC->_L7;
  outC->cont = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

