/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

void CASTLIB_BaliseHeaders_reset_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_Q_UPDOWN_reset_TM_conversions(&outC->_9_Context_1);
  /* 1 */ CAST_Int_to_M_VERSION_reset_TM_conversions(&outC->_8_Context_1);
  /* 1 */ CAST_Int_to_Q_MEDIA_reset_TM_conversions(&outC->_7_Context_1);
  /* 1 */ CAST_Int_to_N_PIG_reset_TM_conversions(&outC->_6_Context_1);
  /* 1 */ CAST_Int_to_N_TOTAL_reset_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_Int_to_M_DUP_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_M_MCOUNT_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_NID_C_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_NID_BG_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_Q_LINK_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::CASTLIB_BaliseHeaders */
void CASTLIB_BaliseHeaders_TM_conversions(
  /* TM_conversions::CASTLIB_BaliseHeaders::In */BaliseTelegramHeader_int_T_TM *In,
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC)
{
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L1, In);
  outC->_L11 = outC->_L1.q_link;
  outC->_L10 = outC->_L1.nid_bg;
  outC->_L9 = outC->_L1.nid_c;
  outC->_L8 = outC->_L1.m_mcount;
  outC->_L7 = outC->_L1.m_dup;
  outC->_L6 = outC->_L1.n_total;
  outC->_L5 = outC->_L1.n_pig;
  outC->_L4 = outC->_L1.q_media;
  outC->_L3 = outC->_L1.m_version;
  /* 1 */ CAST_Int_to_Q_LINK_TM_conversions(outC->_L11, &outC->Context_1);
  outC->_L32 = outC->Context_1.q_link;
  /* 1 */ CAST_Int_to_NID_BG_TM_conversions(outC->_L10, &outC->_1_Context_1);
  outC->_L31 = outC->_1_Context_1.nid_bg;
  /* 1 */ CAST_Int_to_NID_C_TM_conversions(outC->_L9, &outC->_2_Context_1);
  outC->_L30 = outC->_2_Context_1.nid_c;
  /* 1 */ CAST_Int_to_M_MCOUNT_TM_conversions(outC->_L8, &outC->_3_Context_1);
  outC->_L29 = outC->_3_Context_1.m_mcount;
  /* 1 */ CAST_Int_to_M_DUP_TM_conversions(outC->_L7, &outC->_4_Context_1);
  outC->_L28 = outC->_4_Context_1.m_dup;
  /* 1 */ CAST_Int_to_N_TOTAL_TM_conversions(outC->_L6, &outC->_5_Context_1);
  outC->_L27 = outC->_5_Context_1.n_pig;
  /* 1 */ CAST_Int_to_N_PIG_TM_conversions(outC->_L5, &outC->_6_Context_1);
  outC->_L26 = outC->_6_Context_1.n_pig;
  /* 1 */ CAST_Int_to_Q_MEDIA_TM_conversions(outC->_L4, &outC->_7_Context_1);
  outC->_L25 = outC->_7_Context_1.q_media;
  /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(outC->_L3, &outC->_8_Context_1);
  outC->_L24 = outC->_8_Context_1.m_version;
  outC->_L2 = outC->_L1.q_updown;
  /* 1 */ CAST_Int_to_Q_UPDOWN_TM_conversions(outC->_L2, &outC->_9_Context_1);
  outC->_L23 = outC->_9_Context_1.q_updown;
  outC->_L22.q_updown = outC->_L23;
  outC->_L22.m_version = outC->_L24;
  outC->_L22.q_media = outC->_L25;
  outC->_L22.n_pig = outC->_L26;
  outC->_L22.n_total = outC->_L27;
  outC->_L22.m_dup = outC->_L28;
  outC->_L22.m_mcount = outC->_L29;
  outC->_L22.nid_c = outC->_L30;
  outC->_L22.nid_bg = outC->_L31;
  outC->_L22.q_link = outC->_L32;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->Out, &outC->_L22);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CASTLIB_BaliseHeaders_TM_conversions.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

