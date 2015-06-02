/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ConvertBaliseHeader_CT_TM_conversions.h"

void RECV_ConvertBaliseHeader_CT_reset_TM_conversions(
  outC_RECV_ConvertBaliseHeader_CT_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_Q_UPDOWN_reset_TM_conversions(&outC->_6_Context_1);
  /* 1 */ CAST_Int_to_M_VERSION_reset_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_Int_to_Q_MEDIA_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_N_PIG_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_N_TOTAL_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_M_DUP_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_Q_LINK_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::RECV_ConvertBaliseHeader_CT */
void RECV_ConvertBaliseHeader_CT_TM_conversions(
  /* TM_conversions::RECV_ConvertBaliseHeader_CT::BaliseTelegramHeaderIn */BaliseTelegramHeader_int_T_TM *BaliseTelegramHeaderIn,
  outC_RECV_ConvertBaliseHeader_CT_TM_conversions *outC)
{
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L1, BaliseTelegramHeaderIn);
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
  outC->_L49 = outC->Context_1.q_link;
  /* 1 */ CAST_Int_to_M_DUP_TM_conversions(outC->_L7, &outC->_1_Context_1);
  outC->_L48 = outC->_1_Context_1.m_dup;
  /* 1 */ CAST_Int_to_N_TOTAL_TM_conversions(outC->_L6, &outC->_2_Context_1);
  outC->_L47 = outC->_2_Context_1.n_pig;
  /* 1 */ CAST_Int_to_N_PIG_TM_conversions(outC->_L5, &outC->_3_Context_1);
  outC->_L46 = outC->_3_Context_1.n_pig;
  /* 1 */ CAST_Int_to_Q_MEDIA_TM_conversions(outC->_L4, &outC->_4_Context_1);
  outC->_L45 = outC->_4_Context_1.q_media;
  /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(outC->_L3, &outC->_5_Context_1);
  outC->_L44 = outC->_5_Context_1.m_version;
  outC->_L2 = outC->_L1.q_updown;
  /* 1 */ CAST_Int_to_Q_UPDOWN_TM_conversions(outC->_L2, &outC->_6_Context_1);
  outC->_L43 = outC->_6_Context_1.q_updown;
  outC->_L42.q_updown = outC->_L43;
  outC->_L42.m_version = outC->_L44;
  outC->_L42.q_media = outC->_L45;
  outC->_L42.n_pig = outC->_L46;
  outC->_L42.n_total = outC->_L47;
  outC->_L42.m_dup = outC->_L48;
  outC->_L42.m_mcount = outC->_L8;
  outC->_L42.nid_c = outC->_L9;
  outC->_L42.nid_bg = outC->_L10;
  outC->_L42.q_link = outC->_L49;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->BaliseTelegramHeaderOut,
    &outC->_L42);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ConvertBaliseHeader_CT_TM_conversions.c
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

