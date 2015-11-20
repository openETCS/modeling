/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr */
void indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::cont */kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::indexOfBG */kcg_int *indexOfBG)
{
  static Q_LINK tmp;
  
  *cont = (*BG).valid & (*BG).infoFromPassing.valid;
  if (linked) {
    tmp = Q_LINK_Linked;
  }
  else {
    tmp = Q_LINK_Unlinked;
  }
  if (*cont & ((*BG).q_link == tmp)) {
    *indexOfBG = iteratorIndex;
  }
  else {
    *indexOfBG = prevIndex;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

