/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr */
void indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::BG_asElementFromBGs */ positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::indexOfBG */ kcg_int *indexOfBG)
{
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::stopIteration */
  static kcg_bool stopIteration;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::invalidateIndex */
  static kcg_bool invalidateIndex;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L10 */
  static kcg_int _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L11 */
  static kcg_int _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L16 */
  static kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L18 */
  static kcg_int _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L21 */
  static positionedBG_T_TrainPosition_Types_Pck _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L19 */
  static positionedBG_T_TrainPosition_Types_Pck _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L23 */
  static kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L24 */
  static kcg_bool _L24;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L26 */
  static kcg_bool _L26;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L27 */
  static kcg_bool _L27;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L28 */
  static positionedBG_T_TrainPosition_Types_Pck _L28;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L29 */
  static kcg_bool _L29;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L30 */
  static positionedBG_T_TrainPosition_Types_Pck _L30;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L31 */
  static kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L32 */
  static kcg_int _L32;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L33 */
  static kcg_int _L33;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L34 */
  static kcg_bool _L34;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L35 */
  static kcg_bool _L35;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L37 */
  static kcg_bool _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L38 */
  static kcg_bool _L38;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L39 */
  static kcg_bool _L39;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L40 */
  static kcg_bool _L40;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L41 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L41;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L42 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L42;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L43 */
  static kcg_bool _L43;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L44 */
  static kcg_bool _L44;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L45 */
  static kcg_bool _L45;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L46 */
  static kcg_int _L46;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L47 */
  static kcg_bool _L47;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L48 */
  static kcg_bool _L48;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L52 */
  static kcg_bool _L52;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr::_L51 */
  static kcg_bool _L51;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L21, BG);
  _L23 = _L21.valid;
  _L25 = !_L23;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L19, BG_asElementFromBGs);
  _L26 = _L19.valid;
  _L27 = !_L26;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L28, BG);
  _L48 = _L28.missed;
  _L29 = _L28.infoFromPassing.valid;
  _L47 = _L48 | _L29;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L30, BG_asElementFromBGs);
  _L51 = _L30.missed;
  _L31 = _L30.infoFromPassing.valid;
  _L52 = _L51 | _L31;
  _L32 = _L28.seqNoOnTrack;
  _L33 = _L30.seqNoOnTrack;
  _L34 = _L32 <= _L33;
  _L35 = _L23 & _L26 & _L47 & _L52 & _L34;
  _L38 = !_L52;
  _L37 = _L23 & _L26 & _L47 & _L38;
  _L40 = !_L47;
  _L41 = _L28.location.nominal;
  _L42 = _L30.location.nominal;
  _L43 = _L41 <= _L42;
  _L39 = _L23 & _L26 & _L40 & _L38 & _L43;
  _L24 = _L25 | _L27 | _L35 | _L37 | _L39;
  stopIteration = _L24;
  _L44 = stopIteration;
  _L8 = !_L44;
  *cont = _L8;
  invalidateIndex = _L25;
  _L45 = invalidateIndex;
  _L10 = cNoValidIndex_CalculateTrainPosition_Pkg;
  _L18 = iteratorIndex;
  _L46 = cNoValidIndex_CalculateTrainPosition_Pkg;
  /* 2 */ if (_L44) {
    _L11 = _L18;
  }
  else {
    _L11 = _L46;
  }
  /* 1 */ if (_L45) {
    _L7 = _L10;
  }
  else {
    _L7 = _L11;
  }
  *indexOfBG = _L7;
  _L16 = prevIndex;
  noname = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

