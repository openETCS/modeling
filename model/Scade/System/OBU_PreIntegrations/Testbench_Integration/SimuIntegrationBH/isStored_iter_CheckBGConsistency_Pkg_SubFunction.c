/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored_iter */
void isStored_iter_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::bgHeader */ BG_Header_T_BG_Types_Pkg *bgHeader,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::index */ kcg_int *index,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::isStored */ kcg_bool *isStored)
{
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter */
  static BG_Header_T_BG_Types_Pkg acc;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static BG_Header_T_BG_Types_Pkg noname;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L9 */
  static BG_Header_T_BG_Types_Pkg _L9;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L11 */
  static kcg_int _L11;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L13 */
  static kcg_bool _L13;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L14 */
  static BG_Header_T_BG_Types_Pkg _L14;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L15 */
  static positionedBGs_T_TrainPosition_Types_Pck _L15;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L21 */
  static positionedBGs_T_TrainPosition_Types_Pck _L21;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L24 */
  static positionedBG_T_TrainPosition_Types_Pck _L24;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L25 */
  static kcg_bool _L25;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L26 */
  static kcg_int _L26;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L27 */
  static kcg_int _L27;
  
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L14, bgHeader);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L15, storedBGs);
  _L13 = kcg_true;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L9, &_L14);
  if (_L13) {
    for (i = 0; i < 41; i++) {
      kcg_copy_BG_Header_T_BG_Types_Pkg(&acc, &_L9);
      /* 1 */
      isStored_CheckBGConsistency_Pkg_SubFunction(
        &acc,
        &_L15[i],
        &cond_iterw,
        &_L9);
      _L11 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L11 = 0;
  }
  kcg_copy_BG_Header_T_BG_Types_Pkg(&noname, &_L9);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L21, storedBGs);
  _L27 = 1;
  _L26 = _L11 - _L27;
  if ((0 <= _L26) & (_L26 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L24, &_L21[_L26]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L24,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoStoredBG_CheckBGConsistency_Pkg);
  }
  *index = _L26;
  _L25 = _L24.valid;
  *isStored = _L25;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isStored_iter_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

