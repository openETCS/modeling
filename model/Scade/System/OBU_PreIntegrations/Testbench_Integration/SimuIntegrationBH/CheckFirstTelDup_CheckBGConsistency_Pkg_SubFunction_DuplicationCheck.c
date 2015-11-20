/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup */
kcg_bool CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::telegramHeader_in */ TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L23 */
  static N_TOTAL _L23;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L22 */
  static TelegramHeader_T_BG_Types_Pkg _L22;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L21 */
  static N_PIG _L21;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L20 */
  static kcg_int _L20;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L19 */
  static kcg_bool _L19;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L18 */
  static kcg_int _L18;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L17 */
  static kcg_bool _L17;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L16 */
  static kcg_bool _L16;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L15 */
  static kcg_int _L15;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L24 */
  static kcg_int _L24;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L25 */
  static kcg_int _L25;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L26 */
  static M_DUP _L26;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L28 */
  static M_DUP _L28;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L29 */
  static M_DUP _L29;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L31 */
  static kcg_bool _L31;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L32 */
  static kcg_bool _L32;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L33 */
  static M_DUP _L33;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L34 */
  static kcg_bool _L34;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L35 */
  static kcg_bool _L35;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::isTheFirst */
  static kcg_bool isTheFirst;
  
  _L28 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L22, telegramHeader_in);
  _L26 = _L22.m_dup;
  _L31 = _L28 == _L26;
  _L23 = _L22.n_total;
  _L18 = /* 3 */ N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(_L23);
  _L24 = 1;
  _L25 = _L18 - _L24;
  _L21 = _L22.n_pig;
  _L20 = /* 3 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L21);
  _L19 = _L25 == _L20;
  _L32 = _L31 & _L19;
  _L15 = 2;
  _L16 = _L20 == _L15;
  _L33 = _L22.m_dup;
  _L29 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  _L34 = _L33 == _L29;
  _L35 = _L16 & _L34;
  _L17 = _L32 | _L35;
  isTheFirst = _L17;
  return isTheFirst;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

