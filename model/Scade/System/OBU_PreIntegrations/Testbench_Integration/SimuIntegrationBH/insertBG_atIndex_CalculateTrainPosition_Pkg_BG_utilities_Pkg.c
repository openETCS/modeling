/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */
void insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::insert */ kcg_bool insert,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::overrun */ kcg_bool *overrun)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L1 */
  static kcg_bool _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L3 */
  static kcg_int _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L4 */
  static kcg_bool _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L9 */
  static array_int_41 _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L10 */
  static array_169420 _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L11 */
  static positionedBG_T_TrainPosition_Types_Pck _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L12 */
  static array_170648 _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L13 */
  static positionedBGs_T_TrainPosition_Types_Pck _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L15 */
  static positionedBGs_T_TrainPosition_Types_Pck _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L16 */
  static kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L17 */
  static positionedBGs_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L18 */
  static positionedBGs_T_TrainPosition_Types_Pck _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L19 */
  static positionedBG_T_TrainPosition_Types_Pck _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L20 */
  static positionedBGs_T_TrainPosition_Types_Pck _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L21 */
  static positionedBGs_T_TrainPosition_Types_Pck _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L22 */
  static positionedBG_T_TrainPosition_Types_Pck _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L23 */
  static kcg_int _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L26 */
  static positionedBG_T_TrainPosition_Types_Pck _L26;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L27 */
  static kcg_bool _L27;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L28 */
  static positionedBG_T_TrainPosition_Types_Pck _L28;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L29 */
  static positionedBGs_T_TrainPosition_Types_Pck _L29;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L30 */
  static kcg_bool _L30;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L31 */
  static kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L32 */
  static kcg_bool _L32;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L33 */
  static kcg_bool _L33;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L34 */
  static kcg_bool _L34;
  
  _L1 = insert;
  _L3 = indexOfBG;
  _L5 = 0;
  _L4 = _L3 >= _L5;
  _L7 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  _L6 = _L3 < _L7;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L19, BG);
  _L27 = _L19.valid;
  _L8 = _L1 & _L4 & _L6 & _L27;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, BGs_in);
  _L23 = indexOfBG;
  if ((0 <= _L23) & (_L23 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L22, &_L2[_L23]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L22,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L26, BG);
  _L25 = /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L22,
      &_L26);
  _L31 = !_L25;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L29, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L28, &_L29[40]);
  _L30 = _L28.valid;
  _L32 = _L31 & _L30;
  _L33 = !_L32;
  _L34 = _L8 & _L33;
  /* pow */ for (i3 = 0; i3 < 41; i3++) {
    _L9[i3] = _L3;
  }
  /* pow */ for (i2 = 0; i2 < 41; i2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L20[i2], &_L19);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L11,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* pow */ for (i1 = 0; i1 < 1; i1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L12[i1], &_L11);
  }
  kcg_copy_array_169420(&_L10, (array_169420 *) &_L2[0]);
  kcg_copy_array_170648(&_L13[0], &_L12);
  kcg_copy_array_169420(&_L13[1], &_L10);
  /* 2 */ if (_L25) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L21, &_L2);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L21, &_L13);
  }
  if (_L34) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        _L9[i],
        &_L20[i],
        &_L2[i],
        &_L21[i],
        &cond_iterw,
        &_L15[i]);
      _L16 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L16 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L16; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L15[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L18, BGs_in);
  /* 1 */ if (_L34) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L17, &_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L17, &_L18);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L17);
  noname = _L16;
  *overrun = _L32;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

