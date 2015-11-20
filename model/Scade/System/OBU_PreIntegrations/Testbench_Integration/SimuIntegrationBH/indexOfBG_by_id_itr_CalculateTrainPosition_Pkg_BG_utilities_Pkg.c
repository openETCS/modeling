/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr */
void indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::BG_asElementFromBGs */ positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::indexOfBG */ kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L3 */
  static positionedBG_T_TrainPosition_Types_Pck _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L4 */
  static positionedBG_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L11 */
  static kcg_int _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L16 */
  static kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr::_L18 */
  static kcg_int _L18;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L3, BG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4, BG_asElementFromBGs);
  _L6 = /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L3,
      &_L4);
  _L8 = !_L6;
  *cont = _L8;
  _L18 = iteratorIndex;
  _L16 = prevIndex;
  /* 2 */ if (_L6) {
    _L11 = _L18;
  }
  else {
    _L11 = _L16;
  }
  *indexOfBG = _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

