/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr */
void findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_acc */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_out */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L7 */
  static Q_LINK _L7;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L9 */
  static Q_LINK _L9;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L12 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L12;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L18 */
  static kcg_int _L18;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L17 */
  static kcg_int _L17;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L16 */
  static kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L19 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L19;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L20 */
  static kcg_int _L20;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L22 */
  static kcg_int _L22;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L21 */
  static kcg_int _L21;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5, BG_in);
  _L6 = _L5.valid;
  _L7 = _L5.q_link;
  _L9 = Q_LINK_Linked;
  _L8 = _L7 == _L9;
  _L11 = _L6 & _L8;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L19,
    index_in);
  _L17 = _L19.currentIndex;
  _L21 = 1;
  _L22 = _L17 + _L21;
  _L16 = _L19.previousLinkedBG_idx;
  /* 1 */ if (_L11) {
    _L20 = _L22;
  }
  else {
    _L20 = _L16;
  }
  _L18 = _L19.subsequentLinkedBG_idx;
  _L12.previousLinkedBG_idx = _L20;
  _L12.currentIndex = _L22;
  _L12.subsequentLinkedBG_idx = _L18;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    index_acc,
    &_L12);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    index_out,
    &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

