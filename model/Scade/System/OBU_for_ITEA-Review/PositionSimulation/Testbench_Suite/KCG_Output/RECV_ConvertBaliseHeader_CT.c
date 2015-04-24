/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ConvertBaliseHeader_CT.h"

/* RECV_ConvertBaliseHeader_CT */
void RECV_ConvertBaliseHeader_CT(
  /* RECV_ConvertBaliseHeader_CT::BaliseTelegramHeaderIn */ TM_BaliseTelegramHeader_int_T *BaliseTelegramHeaderIn,
  /* RECV_ConvertBaliseHeader_CT::BaliseTelegramHeaderOut */ TelegramHeader_T_BG_Types_Pkg *BaliseTelegramHeaderOut)
{
  (*BaliseTelegramHeaderOut).m_mcount = (*BaliseTelegramHeaderIn).m_mcount;
  (*BaliseTelegramHeaderOut).nid_c = (*BaliseTelegramHeaderIn).nid_c;
  (*BaliseTelegramHeaderOut).nid_bg = (*BaliseTelegramHeaderIn).nid_bg;
  (*BaliseTelegramHeaderOut).q_updown = /* 1 */
    TOOLS_Int_to_Q_UPDOWN((*BaliseTelegramHeaderIn).q_updown);
  (*BaliseTelegramHeaderOut).m_version = /* 1 */
    TOOLS_Int_to_M_VERSION((*BaliseTelegramHeaderIn).m_version);
  (*BaliseTelegramHeaderOut).q_media = /* 1 */
    TOOLS_Int_to_Q_MEDIA((*BaliseTelegramHeaderIn).q_media);
  (*BaliseTelegramHeaderOut).n_pig = /* 1 */
    TOOLS_Int_to_N_PIG((*BaliseTelegramHeaderIn).n_pig);
  (*BaliseTelegramHeaderOut).n_total = /* 1 */
    TOOLS_Int_to_N_TOTAL((*BaliseTelegramHeaderIn).n_total);
  (*BaliseTelegramHeaderOut).m_dup = /* 1 */
    TOOLS_Int_to_M_DUP((*BaliseTelegramHeaderIn).m_dup);
  (*BaliseTelegramHeaderOut).q_link = /* 1 */
    TOOLS_Int_to_Q_LINK((*BaliseTelegramHeaderIn).q_link);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ConvertBaliseHeader_CT.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

