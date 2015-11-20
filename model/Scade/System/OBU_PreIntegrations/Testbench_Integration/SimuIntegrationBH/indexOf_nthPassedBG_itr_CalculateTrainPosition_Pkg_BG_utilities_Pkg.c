/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr */
void indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::acc_in */ BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::n */ kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::acc_out */ BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L4 */
  static positionedBG_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L19 */
  static kcg_bool _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L20 */
  static Q_LINK _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L21 */
  static Q_LINK _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L23 */
  static kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L26 */
  static kcg_bool _L26;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L27 */
  static kcg_int _L27;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L28 */
  static kcg_int _L28;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L30 */
  static kcg_bool _L30;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L31 */
  static Q_LINK _L31;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L32 */
  static Q_LINK _L32;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L33 */
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L33;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L37 */
  static kcg_int _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L38 */
  static kcg_int _L38;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L39 */
  static kcg_int _L39;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L40 */
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L40;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L42 */
  static kcg_int _L42;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L43 */
  static kcg_bool _L43;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L44 */
  static kcg_bool _L44;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L53 */
  static kcg_bool _L53;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L52 */
  static kcg_int _L52;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L51 */
  static kcg_int _L51;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L54 */
  static kcg_bool _L54;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L55 */
  static kcg_bool _L55;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4, BG);
  _L19 = _L4.valid;
  _L23 = _L4.infoFromPassing.valid;
  _L25 = _L19 & _L23;
  _L20 = _L4.q_link;
  _L30 = linked;
  _L21 = Q_LINK_Linked;
  _L32 = Q_LINK_Unlinked;
  /* 2 */ if (_L30) {
    _L31 = _L21;
  }
  else {
    _L31 = _L32;
  }
  _L22 = _L20 == _L31;
  _L26 = _L25 & _L22;
  _L38 = 1;
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&_L33, acc_in);
  _L52 = _L33.noOfFoundBGs;
  _L37 = _L38 + _L52;
  /* 3 */ if (_L26) {
    _L39 = _L37;
  }
  else {
    _L39 = _L52;
  }
  _L42 = n;
  _L43 = _L39 == _L42;
  _L53 = _L33.BGFound;
  _L44 = _L43 | _L53;
  _L55 = !_L44;
  _L54 = _L19 & _L55;
  *cont = _L54;
  _L28 = iteratorIndex;
  _L51 = _L33.index;
  /* 1 */ if (_L26) {
    _L27 = _L28;
  }
  else {
    _L27 = _L51;
  }
  _L40.index = _L27;
  _L40.noOfFoundBGs = _L39;
  _L40.BGFound = _L44;
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    acc_out,
    &_L40);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

