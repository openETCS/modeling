/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
void mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::overrun */ kcg_bool *overrun)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_int _2_noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::indexOfBGInBGs */
  static kcg_int indexOfBGInBGs;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::bgFound */
  static kcg_bool bgFound;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::bg_loc */
  static positionedBG_T_TrainPosition_Types_Pck bg_loc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L1 */
  static kcg_int _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L4 */
  static kcg_int _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L8 */
  static positionedBGs_T_TrainPosition_Types_Pck _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L9 */
  static kcg_bool _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L11 */
  static positionedBGs_T_TrainPosition_Types_Pck _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L12 */
  static kcg_bool _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L15 */
  static positionedBGs_T_TrainPosition_Types_Pck _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L16 */
  static positionedBGs_T_TrainPosition_Types_Pck _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L17 */
  static positionedBGs_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L18 */
  static kcg_bool _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L20 */
  static kcg_bool _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L21 */
  static positionedBG_T_TrainPosition_Types_Pck _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L61 */
  static positionedBG_T_TrainPosition_Types_Pck _L61;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L58 */
  static kcg_bool _L58;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L48 */
  static positionedBG_T_TrainPosition_Types_Pck _L48;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L47 */
  static positionedBG_T_TrainPosition_Types_Pck _L47;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L62 */
  static positionedBGs_T_TrainPosition_Types_Pck _L62;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L63 */
  static kcg_int _L63;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L64 */
  static kcg_bool _L64;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L65 */
  static positionedBG_T_TrainPosition_Types_Pck _L65;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L66 */
  static kcg_bool _L66;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L67 */
  static kcg_bool _L67;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L68 */
  static kcg_bool _L68;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L69 */
  static kcg_bool _L69;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L70 */
  static kcg_bool _L70;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L71 */
  static kcg_bool _L71;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L72 */
  static kcg_bool _L72;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L73 */
  static kcg_bool _L73;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L74 */
  static positionedBG_T_TrainPosition_Types_Pck _L74;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L75 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L75;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L80 */
  static positionedBG_T_TrainPosition_Types_Pck _L80;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L81 */
  static positionedBG_T_TrainPosition_Types_Pck _L81;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L82 */
  static kcg_bool _L82;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L83 */
  static kcg_int _L83;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L8, BGs_in);
  _L9 = _L7.valid;
  /* 2 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L7,
    &_L8,
    _L9,
    &_L1,
    &_L2,
    &_L3);
  bgFound = _L2;
  _L64 = bgFound;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L62, BGs_in);
  indexOfBGInBGs = _L1;
  _L63 = indexOfBGInBGs;
  if ((0 <= _L63) & (_L63 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L61, &_L62[_L63]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L61,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  _L71 = _L61.missed;
  _L73 = _L61.infoFromPassing.valid;
  _L70 = _L71 | _L73;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L65, BG);
  _L66 = _L65.infoFromPassing.valid;
  _L68 = !_L66;
  _L67 = _L65.valid;
  _L72 = _L65.infoFromLinking.valid;
  _L69 = _L68 & _L67 & _L72;
  _L58 = _L64 & _L70 & _L69;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L75,
    &_L65.infoFromLinking);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L74, &_L61);
  if (kcg_true) {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &_L74.infoFromLinking,
      &_L75);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L48, BG);
  /* 2 */ if (_L58) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L47, &_L74);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L47, &_L48);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&bg_loc, &_L47);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L81, &bg_loc);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L11, BGs_in);
  /* 1 */
  indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L81,
    &_L11,
    _L9,
    &_L4,
    &_L5,
    &_L6);
  _L13 = _L1 != _L4;
  _L12 = _L13 & _L2 & _L3 & _L6;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L80, &bg_loc);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L16, BGs_in);
  _L82 = kcg_false;
  /* 1 */
  deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L16,
    _L1,
    _L82,
    &_L15);
  /* 3 */ if (_L2) {
    _L83 = _L1;
  }
  else {
    _L83 = _L4;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L21, BG);
  _L20 = _L21.valid;
  _L22 = _L20 & _L6;
  /* 1 */
  insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L80,
    &_L15,
    _L83,
    _L22,
    &_L17,
    &_L18);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L17);
  *overrun = _L18;
  noname = _L5;
  _1_noname = _L12;
  _2_noname = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

