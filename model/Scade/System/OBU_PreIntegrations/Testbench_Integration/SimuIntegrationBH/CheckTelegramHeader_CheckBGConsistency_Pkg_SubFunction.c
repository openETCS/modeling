/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader */
kcg_bool CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::telegramHeader_in */ TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  static Q_UPDOWN noname;
  static M_VERSION _1_noname;
  static Q_MEDIA _2_noname;
  static M_DUP _3_noname;
  static NID_C _4_noname;
  static NID_BG _5_noname;
  static Q_LINK _6_noname;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L13 */
  static TelegramHeader_T_BG_Types_Pkg _L13;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L29 */
  static kcg_bool _L29;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L30 */
  static kcg_bool _L30;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L33 */
  static kcg_bool _L33;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L43 */
  static Q_UPDOWN _L43;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L42 */
  static M_VERSION _L42;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L41 */
  static Q_MEDIA _L41;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L40 */
  static N_PIG _L40;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L39 */
  static N_TOTAL _L39;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L38 */
  static M_DUP _L38;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L37 */
  static M_MCOUNT _L37;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L36 */
  static NID_C _L36;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L35 */
  static NID_BG _L35;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L34 */
  static Q_LINK _L34;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L44 */
  static kcg_int _L44;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L45 */
  static kcg_bool _L45;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L46 */
  static kcg_bool _L46;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L47 */
  static kcg_int _L47;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L48 */
  static kcg_int _L48;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L49 */
  static kcg_int _L49;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L50 */
  static kcg_int _L50;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::isConsistent */
  static kcg_bool isConsistent;
  
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L13, telegramHeader_in);
  _L34 = _L13.q_link;
  _L35 = _L13.nid_bg;
  _L36 = _L13.nid_c;
  _L37 = _L13.m_mcount;
  _L38 = _L13.m_dup;
  _L39 = _L13.n_total;
  _L40 = _L13.n_pig;
  _L41 = _L13.q_media;
  _L42 = _L13.m_version;
  _L43 = _L13.q_updown;
  _L47 = /* 1 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L40);
  _L48 = /* 1 */ N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(_L39);
  _L45 = _L47 <= _L48;
  _L44 = 0;
  _L46 = _L48 > _L44;
  _L49 = cTheTelegramFitsWithAll_CheckBGConsistency_Pkg;
  _L33 = _L49 >= _L37;
  _L50 = cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg;
  _L30 = _L37 != _L50;
  _L29 = _L45 & _L46 & _L33 & _L30;
  isConsistent = _L29;
  noname = _L43;
  _1_noname = _L42;
  _2_noname = _L41;
  _3_noname = _L38;
  _4_noname = _L36;
  _5_noname = _L35;
  _6_noname = _L34;
  return isConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

