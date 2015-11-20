/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
void MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramArray */ TelegramArray_T_BG_Types_Pkg *telegramArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramout */ Telegram_T_BG_Types_Pkg *telegramout)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
  static Telegram_T_BG_Types_Pkg acc;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L4 */
  static kcg_bool _L4;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L5 */
  static TelegramArray_T_BG_Types_Pkg _L5;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L6 */
  static Telegram_T_BG_Types_Pkg _L6;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L8 */
  static array_172650 _L8;
  
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L5, telegramArray);
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L6, &_L5[0]);
  kcg_copy_array_172650(&_L8, (array_172650 *) &_L5[1]);
  _L4 = kcg_true;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, &_L6);
  if (_L4) {
    for (i = 0; i < 7; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&acc, &_L1);
      /* 1 */
      MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &acc,
        &_L8[i],
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
  kcg_copy_Telegram_T_BG_Types_Pkg(telegramout, &_L1);
  noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

