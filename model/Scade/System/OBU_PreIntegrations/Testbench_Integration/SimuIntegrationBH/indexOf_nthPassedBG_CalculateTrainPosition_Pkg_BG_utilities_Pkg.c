/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */
void indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::n */ kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BG_found */ kcg_bool *BG_found)
{
  static kcg_int i2;
  static kcg_int i1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L1 */
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L3 */
  static kcg_int _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L4 */
  static positionedBGs_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L14 */
  static array_bool_41 _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L15 */
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L16 */
  static kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L17 */
  static array_int_41 _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L18 */
  static kcg_int _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L19 */
  static kcg_bool _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L20 */
  static kcg_int _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L21 */
  static kcg_bool _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L22 */
  static kcg_int _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L23 */
  static kcg_bool _L23;
  
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L15,
    (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  _L13 = linked;
  /* pow */ for (i2 = 0; i2 < 41; i2++) {
    _L14[i2] = _L13;
  }
  _L16 = n;
  /* pow */ for (i1 = 0; i1 < 41; i1++) {
    _L17[i1] = _L16;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L4, BGs);
  _L6 = enable;
  _L20 = n;
  _L22 = 0;
  _L21 = _L20 > _L22;
  _L23 = _L6 & _L21;
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&_L1, &_L15);
  if (_L23) {
    for (i = 0; i < 41; i++) {
      kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &_L1);
      /* 1 */
      indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        &acc,
        _L14[i],
        _L17[i],
        &_L4[i],
        &cond_iterw,
        &_L1);
      _L3 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
  noname = _L3;
  _L18 = _L1.index;
  *indexOfBG = _L18;
  _L19 = _L1.BGFound;
  *BG_found = _L19;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

