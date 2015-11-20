/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup */
kcg_bool CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::telegramHeader_in */ TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L1 */
  static TelegramHeader_T_BG_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L2 */
  static N_TOTAL _L2;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L3 */
  static N_PIG _L3;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L5 */
  static kcg_int _L5;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L6 */
  static kcg_bool _L6;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L7 */
  static kcg_bool _L7;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L8 */
  static kcg_bool _L8;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L9 */
  static kcg_int _L9;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::isTheFirst */
  static kcg_bool isTheFirst;
  
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L1, telegramHeader_in);
  _L2 = _L1.n_total;
  _L3 = _L1.n_pig;
  _L4 = /* 1 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L3);
  _L5 = /* 1 */ N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(_L2);
  _L6 = _L5 == _L4;
  _L9 = 1;
  _L8 = _L4 == _L9;
  _L7 = _L6 | _L8;
  isTheFirst = _L7;
  return isTheFirst;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

