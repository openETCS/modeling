/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Headers_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Headers */
kcg_bool Check2Headers_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_1 */ TelegramHeader_T_BG_Types_Pkg *header_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_2 */ TelegramHeader_T_BG_Types_Pkg *header_2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_2 */ kcg_bool crcCheck_2)
{
  static M_MCOUNT noname;
  static M_MCOUNT _1_noname;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::m_dup_1 */
  static M_DUP m_dup_1;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::n_pig_1 */
  static N_PIG n_pig_1;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::n_pig_2 */
  static N_PIG n_pig_2;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::m_dup_2 */
  static M_DUP m_dup_2;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L1 */
  static TelegramHeader_T_BG_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L3 */
  static TelegramHeader_T_BG_Types_Pkg _L3;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L13 */
  static Q_UPDOWN _L13;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L12 */
  static M_VERSION _L12;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L11 */
  static Q_MEDIA _L11;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L10 */
  static N_PIG _L10;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L9 */
  static N_TOTAL _L9;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L8 */
  static M_DUP _L8;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L7 */
  static M_MCOUNT _L7;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L6 */
  static NID_C _L6;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L5 */
  static NID_BG _L5;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L4 */
  static Q_LINK _L4;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L14 */
  static Q_UPDOWN _L14;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L15 */
  static M_VERSION _L15;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L16 */
  static Q_MEDIA _L16;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L17 */
  static N_PIG _L17;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L18 */
  static N_TOTAL _L18;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L19 */
  static M_DUP _L19;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L20 */
  static M_MCOUNT _L20;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L21 */
  static NID_C _L21;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L22 */
  static NID_BG _L22;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L23 */
  static Q_LINK _L23;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L24 */
  static kcg_bool _L24;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L25 */
  static kcg_bool _L25;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L26 */
  static kcg_bool _L26;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L27 */
  static kcg_bool _L27;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L28 */
  static kcg_bool _L28;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L29 */
  static kcg_bool _L29;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L30 */
  static kcg_bool _L30;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L31 */
  static kcg_bool _L31;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L32 */
  static kcg_bool _L32;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L33 */
  static kcg_bool _L33;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L35 */
  static M_DUP _L35;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L36 */
  static M_DUP _L36;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L37 */
  static N_PIG _L37;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L38 */
  static N_PIG _L38;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L39 */
  static kcg_bool _L39;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L40 */
  static kcg_bool _L40;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L41 */
  static kcg_bool _L41;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::isConsistent */
  static kcg_bool isConsistent;
  
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L1, header_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L3, header_2);
  _L4 = _L1.q_link;
  _L5 = _L1.nid_bg;
  _L6 = _L1.nid_c;
  _L7 = _L1.m_mcount;
  _L8 = _L1.m_dup;
  _L9 = _L1.n_total;
  _L10 = _L1.n_pig;
  _L11 = _L1.q_media;
  _L12 = _L1.m_version;
  _L13 = _L1.q_updown;
  _L23 = _L3.q_link;
  _L22 = _L3.nid_bg;
  _L21 = _L3.nid_c;
  _L20 = _L3.m_mcount;
  _L19 = _L3.m_dup;
  _L18 = _L3.n_total;
  _L17 = _L3.n_pig;
  _L16 = _L3.q_media;
  _L15 = _L3.m_version;
  _L14 = _L3.q_updown;
  _L24 = _L13 == _L14;
  _L25 = _L12 == _L15;
  _L26 = _L11 == _L16;
  _L27 = _L4 == _L23;
  _L28 = _L5 == _L22;
  _L29 = _L6 == _L21;
  _L30 = _L9 == _L18;
  _L32 = /* 1 */ CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(&_L1);
  _L33 = /* 2 */ CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(&_L3);
  n_pig_1 = _L10;
  _L37 = n_pig_1;
  m_dup_1 = _L8;
  _L35 = m_dup_1;
  n_pig_2 = _L17;
  _L38 = n_pig_2;
  m_dup_2 = _L19;
  _L36 = m_dup_2;
  _L40 = crcCheck_1;
  _L41 = crcCheck_2;
  _L39 = /* 1 */
    Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      _L37,
      _L35,
      _L38,
      _L36,
      _L40,
      _L41);
  _L31 = _L32 & _L24 & _L25 & _L26 & _L30 & _L29 & _L28 & _L27 & _L33 & _L39;
  noname = _L20;
  _1_noname = _L7;
  isConsistent = _L31;
  return isConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check2Headers_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

