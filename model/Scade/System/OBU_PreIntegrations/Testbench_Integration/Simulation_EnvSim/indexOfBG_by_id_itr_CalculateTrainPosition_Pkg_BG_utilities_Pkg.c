/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr */
void indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::BG_asElementFromBGs */positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::cont */kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::indexOfBG */kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L6 */
  static kcg_bool _L6;
  
  _L6 = /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BG,
      BG_asElementFromBGs);
  if (_L6) {
    *indexOfBG = iteratorIndex;
  }
  else {
    *indexOfBG = prevIndex;
  }
  *cont = !_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

