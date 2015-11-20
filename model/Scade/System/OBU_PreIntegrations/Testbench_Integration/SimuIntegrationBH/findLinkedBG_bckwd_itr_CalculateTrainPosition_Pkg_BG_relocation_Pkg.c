/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr */
void findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_acc_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_acc_out */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_out */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L7 */
  static Q_LINK _L7;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L9 */
  static Q_LINK _L9;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L12 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L12;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L19 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L19;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L20 */
  static kcg_int _L20;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L25 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L25;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L26 */
  static kcg_int _L26;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L27 */
  static kcg_int _L27;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::_L28 */
  static kcg_int _L28;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5, BG_in);
  _L6 = _L5.valid;
  _L7 = _L5.q_link;
  _L9 = Q_LINK_Linked;
  _L8 = _L7 == _L9;
  _L11 = _L6 & _L8;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L25,
    index_in);
  _L26 = _L25.previousLinkedBG_idx;
  _L27 = _L25.currentIndex;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L19,
    index_acc_in);
  _L28 = _L19.subsequentLinkedBG_idx;
  /* 1 */ if (_L11) {
    _L20 = _L27;
  }
  else {
    _L20 = _L28;
  }
  _L12.previousLinkedBG_idx = _L26;
  _L12.currentIndex = _L27;
  _L12.subsequentLinkedBG_idx = _L20;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    index_acc_out,
    &_L12);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    index_out,
    &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

