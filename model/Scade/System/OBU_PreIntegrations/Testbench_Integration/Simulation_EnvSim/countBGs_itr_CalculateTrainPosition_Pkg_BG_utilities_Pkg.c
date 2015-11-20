/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr */
void countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::counters_in */BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::cont */kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::counters_out */BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L48 */
  static kcg_bool _L48;
  
  *cont = (*BG_in).valid;
  _L13 = (*BG_in).q_link == Q_LINK_Linked;
  _L48 = *cont & !_L13;
  _L14 = *cont & _L13;
  if (_L48) {
    (*counters_out).unlinkedBGsCount = 1 + (*counters_in).unlinkedBGsCount;
  }
  else {
    (*counters_out).unlinkedBGsCount = (*counters_in).unlinkedBGsCount;
  }
  if (_L14) {
    (*counters_out).linkedBGsCount = 1 + (*counters_in).linkedBGsCount;
  }
  else {
    (*counters_out).linkedBGsCount = (*counters_in).linkedBGsCount;
  }
  if (*cont) {
    (*counters_out).totalBGsCount = 1 + (*counters_in).totalBGsCount;
  }
  else {
    (*counters_out).totalBGsCount = (*counters_in).totalBGsCount;
  }
  if (_L48 & (*BG_in).infoFromPassing.valid) {
    (*counters_out).passedUnlinkedBGsCount = 1 +
      (*counters_in).passedUnlinkedBGsCount;
  }
  else {
    (*counters_out).passedUnlinkedBGsCount =
      (*counters_in).passedUnlinkedBGsCount;
  }
  if (_L14 & (*BG_in).infoFromPassing.valid) {
    (*counters_out).passedLinkedBGsCount = 1 +
      (*counters_in).passedLinkedBGsCount;
  }
  else {
    (*counters_out).passedLinkedBGsCount = (*counters_in).passedLinkedBGsCount;
  }
  if (*cont & (*BG_in).infoFromPassing.valid) {
    (*counters_out).passedTotalBGsCount = 1 +
      (*counters_in).passedTotalBGsCount;
  }
  else {
    (*counters_out).passedTotalBGsCount = (*counters_in).passedTotalBGsCount;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

