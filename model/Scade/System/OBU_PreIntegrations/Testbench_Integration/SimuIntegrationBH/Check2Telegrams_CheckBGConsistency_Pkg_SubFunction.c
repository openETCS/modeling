/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */ Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */ Telegram_T_BG_Types_Pkg *telegram2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isConsistent */ kcg_bool *isConsistent,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram_out */ Telegram_T_BG_Types_Pkg *telegram_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L2 */
  static TelegramHeader_T_BG_Types_Pkg _L2;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L3 */
  static kcg_bool _L3;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L4 */
  static Telegram_T_BG_Types_Pkg _L4;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L5 */
  static kcg_bool _L5;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L7 */
  static TelegramHeader_T_BG_Types_Pkg _L7;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L6 */
  static kcg_bool _L6;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L8 */
  static kcg_bool _L8;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L9 */
  static kcg_bool _L9;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L10 */
  static kcg_bool _L10;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L85 */
  static Telegram_T_BG_Types_Pkg _L85;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, telegram1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L2, &_L1.telegramheader);
  _L5 = _L1.checkResult;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L4, telegram2);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L7, &_L4.telegramheader);
  _L6 = _L4.checkResult;
  _L3 = /* 1 */
    Check2Headers_CheckBGConsistency_Pkg_SubFunction(&_L2, _L5, &_L7, _L6);
  _L8 = _L1.valid;
  _L9 = _L4.valid;
  _L10 = _L8 & _L3 & _L9;
  *isConsistent = _L10;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L85, telegram2);
  kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, &_L85);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

