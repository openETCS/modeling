/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr */
void posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::indexOfBG */ kcg_int *indexOfBG)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::inRange */
  static kcg_bool inRange;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::BG_isAhead */
  static kcg_bool BG_isAhead;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L4 */
  static positionedBG_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L19 */
  static kcg_bool _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L27 */
  static kcg_int _L27;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L28 */
  static kcg_int _L28;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L29 */
  static kcg_int _L29;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L33 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L33;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L34 */
  static positionedBG_T_TrainPosition_Types_Pck _L34;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L35 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L35;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L37 */
  static kcg_bool _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L36 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L36;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L39 */
  static kcg_bool _L39;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L40 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L40;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L41 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L41;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L42 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L42;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L43 */
  static kcg_int _L43;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L44 */
  static kcg_bool _L44;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L45 */
  static kcg_int _L45;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L46 */
  static kcg_bool _L46;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L47 */
  static kcg_bool _L47;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L48 */
  static kcg_bool _L48;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L49 */
  static kcg_bool _L49;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L50 */
  static kcg_bool _L50;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4, BG);
  _L19 = _L4.valid;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L33, position);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L34, BG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L35, &_L34.location);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L33, &_L35, &_L40);
  _L41 = _L40.nominal;
  _L42 = _L40.d_max;
  _L43 = _L41 + _L42;
  _L45 = 0;
  _L44 = _L43 < _L45;
  _L50 = _L19 & _L44;
  BG_isAhead = _L50;
  _L46 = BG_isAhead;
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(&_L33, &_L35, &_L36, &_L37);
  _L49 = _L19 & _L37;
  inRange = _L49;
  _L48 = inRange;
  _L47 = _L46 | _L48;
  _L39 = !_L47;
  _L25 = _L19 & _L39;
  *cont = _L25;
  _L28 = iteratorIndex;
  _L29 = prevIndex;
  /* 1 */ if (_L48) {
    _L27 = _L28;
  }
  else {
    _L27 = _L29;
  }
  *indexOfBG = _L27;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &_L36);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

