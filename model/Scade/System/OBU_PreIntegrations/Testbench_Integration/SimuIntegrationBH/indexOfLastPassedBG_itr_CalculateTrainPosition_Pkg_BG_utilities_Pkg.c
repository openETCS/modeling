/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr */
void indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::indexOfBG */ kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L4 */
  static positionedBG_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L19 */
  static kcg_bool _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L20 */
  static Q_LINK _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L21 */
  static Q_LINK _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L23 */
  static kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L26 */
  static kcg_bool _L26;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L27 */
  static kcg_int _L27;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L28 */
  static kcg_int _L28;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L29 */
  static kcg_int _L29;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L30 */
  static kcg_bool _L30;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L31 */
  static Q_LINK _L31;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr::_L32 */
  static Q_LINK _L32;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4, BG);
  _L19 = _L4.valid;
  _L23 = _L4.infoFromPassing.valid;
  _L25 = _L19 & _L23;
  *cont = _L25;
  _L20 = _L4.q_link;
  _L30 = linked;
  _L21 = Q_LINK_Linked;
  _L32 = Q_LINK_Unlinked;
  /* 4 */ if (_L30) {
    _L31 = _L21;
  }
  else {
    _L31 = _L32;
  }
  _L22 = _L20 == _L31;
  _L26 = _L25 & _L22;
  _L28 = iteratorIndex;
  _L29 = prevIndex;
  /* 3 */ if (_L26) {
    _L27 = _L28;
  }
  else {
    _L27 = _L29;
  }
  *indexOfBG = _L27;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

