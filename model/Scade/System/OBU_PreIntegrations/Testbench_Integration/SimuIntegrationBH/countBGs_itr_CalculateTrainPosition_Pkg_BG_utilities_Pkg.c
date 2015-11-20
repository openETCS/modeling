/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr */
void countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::counters_in */ BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::counters_out */ BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L8 */
  static kcg_int _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L6 */
  static kcg_int _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L9 */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L10 */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L11 */
  static Q_LINK _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L12 */
  static Q_LINK _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L15 */
  static kcg_bool _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L17 */
  static kcg_int _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L18 */
  static kcg_int _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L19 */
  static kcg_int _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L22 */
  static kcg_int _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L21 */
  static kcg_int _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L20 */
  static kcg_int _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L25 */
  static kcg_int _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L24 */
  static kcg_int _L24;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L23 */
  static kcg_int _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L29 */
  static kcg_int _L29;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L30 */
  static kcg_int _L30;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L31 */
  static kcg_int _L31;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L33 */
  static kcg_int _L33;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L32 */
  static kcg_int _L32;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L35 */
  static kcg_int _L35;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L34 */
  static kcg_int _L34;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L37 */
  static kcg_int _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L36 */
  static kcg_int _L36;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L40 */
  static kcg_int _L40;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L41 */
  static kcg_int _L41;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L42 */
  static kcg_int _L42;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L44 */
  static positionedBG_T_TrainPosition_Types_Pck _L44;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L43 */
  static kcg_bool _L43;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L45 */
  static kcg_bool _L45;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L46 */
  static kcg_bool _L46;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L47 */
  static kcg_bool _L47;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr::_L48 */
  static kcg_bool _L48;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, BG_in);
  _L2 = _L1.valid;
  *cont = _L2;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L10,
    counters_in);
  _L7 = _L10.passedTotalBGsCount;
  _L31 = _L10.passedLinkedBGsCount;
  _L8 = _L10.passedUnlinkedBGsCount;
  _L30 = _L10.totalBGsCount;
  _L29 = _L10.linkedBGsCount;
  _L6 = _L10.unlinkedBGsCount;
  _L11 = _L1.q_link;
  _L12 = Q_LINK_Linked;
  _L13 = _L11 == _L12;
  _L15 = !_L13;
  _L48 = _L2 & _L15;
  _L19 = 1;
  _L18 = _L19 + _L6;
  /* 1 */ if (_L48) {
    _L17 = _L18;
  }
  else {
    _L17 = _L6;
  }
  _L14 = _L2 & _L13;
  _L20 = 1;
  _L21 = _L20 + _L29;
  /* 2 */ if (_L14) {
    _L22 = _L21;
  }
  else {
    _L22 = _L29;
  }
  _L25 = 1;
  _L23 = _L25 + _L30;
  /* 3 */ if (_L2) {
    _L24 = _L23;
  }
  else {
    _L24 = _L30;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L44, BG_in);
  _L43 = _L44.infoFromPassing.valid;
  _L45 = _L48 & _L43;
  _L33 = 1;
  _L32 = _L33 + _L8;
  /* 4 */ if (_L45) {
    _L40 = _L32;
  }
  else {
    _L40 = _L8;
  }
  _L46 = _L14 & _L43;
  _L35 = 1;
  _L34 = _L35 + _L31;
  /* 5 */ if (_L46) {
    _L41 = _L34;
  }
  else {
    _L41 = _L31;
  }
  _L47 = _L2 & _L43;
  _L37 = 1;
  _L36 = _L37 + _L7;
  /* 6 */ if (_L47) {
    _L42 = _L36;
  }
  else {
    _L42 = _L7;
  }
  _L9.unlinkedBGsCount = _L17;
  _L9.linkedBGsCount = _L22;
  _L9.totalBGsCount = _L24;
  _L9.passedUnlinkedBGsCount = _L40;
  _L9.passedLinkedBGsCount = _L41;
  _L9.passedTotalBGsCount = _L42;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    counters_out,
    &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

