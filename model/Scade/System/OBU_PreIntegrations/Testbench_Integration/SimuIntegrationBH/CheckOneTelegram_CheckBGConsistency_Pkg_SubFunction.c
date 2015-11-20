/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram */
kcg_bool CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::telegram_in */ Telegram_T_BG_Types_Pkg *telegram_in)
{
  static CompressedPackets_T_Common_Types_Pkg noname;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L13 */
  static Telegram_T_BG_Types_Pkg _L13;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L29 */
  static kcg_bool _L29;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L44 */
  static kcg_bool _L44;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L45 */
  static kcg_bool _L45;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L52 */
  static kcg_bool _L52;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L51 */
  static TelegramHeader_T_BG_Types_Pkg _L51;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L50 */
  static CompressedPackets_T_Common_Types_Pkg _L50;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::isConsistent */
  static kcg_bool isConsistent;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L13, telegram_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L50, &_L13.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&noname, &_L50);
  _L45 = _L13.valid;
  _L52 = _L13.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L51, &_L13.telegramheader);
  _L44 = /* 1 */ CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(&_L51);
  _L29 = _L45 & _L52 & _L44;
  isConsistent = _L29;
  return isConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

