/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

/* TM_conversions::CASTLIB_BaliseHeaders */
void CASTLIB_BaliseHeaders_TM_conversions(
  /* TM_conversions::CASTLIB_BaliseHeaders::In */ BaliseTelegramHeader_int_T_TM *In,
  /* TM_conversions::CASTLIB_BaliseHeaders::Out */ TelegramHeader_T_BG_Types_Pkg *Out)
{
  /* TM_conversions::CASTLIB_BaliseHeaders::_L1 */
  static BaliseTelegramHeader_int_T_TM _L1;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L9 */
  static kcg_int _L9;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L8 */
  static kcg_int _L8;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L7 */
  static kcg_int _L7;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L6 */
  static kcg_int _L6;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L5 */
  static kcg_int _L5;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L3 */
  static kcg_int _L3;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L2 */
  static kcg_int _L2;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L22 */
  static TelegramHeader_T_BG_Types_Pkg _L22;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L23 */
  static Q_UPDOWN _L23;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L24 */
  static M_VERSION _L24;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L25 */
  static Q_MEDIA _L25;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L26 */
  static N_PIG _L26;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L27 */
  static N_TOTAL _L27;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L28 */
  static M_DUP _L28;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L29 */
  static M_MCOUNT _L29;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L30 */
  static NID_C _L30;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L31 */
  static NID_BG _L31;
  /* TM_conversions::CASTLIB_BaliseHeaders::_L32 */
  static Q_LINK _L32;
  
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L1, In);
  _L2 = _L1.q_updown;
  _L23 = /* 1 */ CAST_Int_to_Q_UPDOWN_TM_conversions(_L2);
  _L3 = _L1.m_version;
  _L24 = /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(_L3);
  _L4 = _L1.q_media;
  _L25 = /* 1 */ CAST_Int_to_Q_MEDIA_TM_conversions(_L4);
  _L5 = _L1.n_pig;
  _L26 = /* 1 */ CAST_Int_to_N_PIG_TM_conversions(_L5);
  _L6 = _L1.n_total;
  _L27 = /* 1 */ CAST_Int_to_N_TOTAL_TM_conversions(_L6);
  _L7 = _L1.m_dup;
  _L28 = /* 1 */ CAST_Int_to_M_DUP_TM_conversions(_L7);
  _L8 = _L1.m_mcount;
  _L29 = /* 1 */ CAST_Int_to_M_MCOUNT_TM_conversions(_L8);
  _L9 = _L1.nid_c;
  _L30 = /* 1 */ CAST_Int_to_NID_C_TM_conversions(_L9);
  _L10 = _L1.nid_bg;
  _L31 = /* 1 */ CAST_Int_to_NID_BG_TM_conversions(_L10);
  _L11 = _L1.q_link;
  _L32 = /* 1 */ CAST_Int_to_Q_LINK_TM_conversions(_L11);
  _L22.q_updown = _L23;
  _L22.m_version = _L24;
  _L22.q_media = _L25;
  _L22.n_pig = _L26;
  _L22.n_total = _L27;
  _L22.m_dup = _L28;
  _L22.m_mcount = _L29;
  _L22.nid_c = _L30;
  _L22.nid_bg = _L31;
  _L22.q_link = _L32;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(Out, &_L22);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CASTLIB_BaliseHeaders_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

