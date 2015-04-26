/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story00_BTM_Story00_first_test.h"

void Story00_BTM_init_Story00_first_test(
  outC_Story00_BTM_Story00_first_test *outC)
{
  int i;
  
  outC->LRBG = 0;
  outC->BG_passed = kcg_true;
  for (i = 0; i < 500; i++) {
    outC->BM.Messages.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->BM.Messages.PacketHeaders[i].endAddress = 0;
    outC->BM.Messages.PacketHeaders[i].startAddress = 0;
    outC->BM.Messages.PacketHeaders[i].valid = kcg_true;
    outC->BM.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->BM.Messages.PacketHeaders[i].nid_packet = 0;
  }
  outC->BM.Header.q_link = 0;
  outC->BM.Header.nid_bg = 0;
  outC->BM.Header.nid_c = 0;
  outC->BM.Header.m_mcount = 0;
  outC->BM.Header.m_dup = 0;
  outC->BM.Header.n_total = 0;
  outC->BM.Header.n_pig = 0;
  outC->BM.Header.q_media = 0;
  outC->BM.Header.m_version = 0;
  outC->BM.Header.q_updown = 0;
  INFRA_BG_generic_2_init(&outC->Context_1);
  INFRA_BG_generic_2_init(&outC->Context_2);
  INFRA_BG_generic_2_init(&outC->Context_3);
  INFRA_BG_generic_2_init(&outC->Context_4);
  INFRA_BG_generic_2_init(&outC->Context_5);
}


void Story00_BTM_reset_Story00_first_test(
  outC_Story00_BTM_Story00_first_test *outC)
{
  /* 5 */ INFRA_BG_generic_2_reset(&outC->Context_5);
  /* 4 */ INFRA_BG_generic_2_reset(&outC->Context_4);
  /* 3 */ INFRA_BG_generic_2_reset(&outC->Context_3);
  /* 2 */ INFRA_BG_generic_2_reset(&outC->Context_2);
  /* 1 */ INFRA_BG_generic_2_reset(&outC->Context_1);
}

/* Story00_first_test::Story00_BTM */
void Story00_BTM_Story00_first_test(
  /* Story00_first_test::Story00_BTM::TrainPos */ kcg_real TrainPos,
  /* Story00_first_test::Story00_BTM::Dir */ kcg_int Dir,
  outC_Story00_BTM_Story00_first_test *outC)
{
  /* 1 */
  INFRA_BG_generic_2(
    (TM_CompressedBaliseMessage *) &DEFAULT_BTMMessage,
    kcg_false,
    0,
    Dir,
    TrainPos,
    (TM_BaliseGroupData *) &BG352_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG352_H1_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG352_H2_Balises426,
    (TM_P003_T *) &DEFAULT_P003,
    (TM_P041_T *) &DEFAULT_P041,
    (TM_P042_T *) &DEFAULT_P042,
    (TM_P045 *) &DEFAULT_P045,
    (TM_P046_T *) &DEFAULT_P046,
    DEFAULT_P072,
    (TM_P137_T *) &DEFAULT_P137,
    (TM_P255_T *) &DEFAULT_P255,
    &outC->Context_1);
  /* 2 */
  INFRA_BG_generic_2(
    &outC->Context_1.BM_out,
    outC->Context_1.BG_passed1,
    outC->Context_1.LRBG,
    Dir,
    TrainPos,
    (TM_BaliseGroupData *) &BG353_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG353_H1_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG353_H2_Balises426,
    (TM_P003_T *) &DEFAULT_P003,
    (TM_P041_T *) &DEFAULT_P041,
    (TM_P042_T *) &DEFAULT_P042,
    (TM_P045 *) &DEFAULT_P045,
    (TM_P046_T *) &DEFAULT_P046,
    DEFAULT_P072,
    (TM_P137_T *) &DEFAULT_P137,
    (TM_P255_T *) &DEFAULT_P255,
    &outC->Context_2);
  /* 3 */
  INFRA_BG_generic_2(
    &outC->Context_2.BM_out,
    outC->Context_2.BG_passed1,
    outC->Context_2.LRBG,
    Dir,
    TrainPos,
    (TM_BaliseGroupData *) &BG354_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG354_H1_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG354_H2_Balises426,
    (TM_P003_T *) &DEFAULT_P003,
    (TM_P041_T *) &DEFAULT_P041,
    (TM_P042_T *) &DEFAULT_P042,
    (TM_P045 *) &DEFAULT_P045,
    (TM_P046_T *) &DEFAULT_P046,
    DEFAULT_P072,
    (TM_P137_T *) &DEFAULT_P137,
    (TM_P255_T *) &DEFAULT_P255,
    &outC->Context_3);
  /* 4 */
  INFRA_BG_generic_2(
    &outC->Context_3.BM_out,
    outC->Context_3.BG_passed1,
    outC->Context_3.LRBG,
    Dir,
    TrainPos,
    (TM_BaliseGroupData *) &BG351_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG351_H1_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG351_H2_Balises426,
    (TM_P003_T *) &DEFAULT_P003,
    (TM_P041_T *) &DEFAULT_P041,
    (TM_P042_T *) &DEFAULT_P042,
    (TM_P045 *) &DEFAULT_P045,
    (TM_P046_T *) &DEFAULT_P046,
    DEFAULT_P072,
    (TM_P137_T *) &DEFAULT_P137,
    (TM_P255_T *) &DEFAULT_P255,
    &outC->Context_4);
  /* 5 */
  INFRA_BG_generic_2(
    &outC->Context_4.BM_out,
    outC->Context_4.BG_passed1,
    outC->Context_4.LRBG,
    Dir,
    TrainPos,
    (TM_BaliseGroupData *) &BG355_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG355_H1_Balises426,
    (TM_BaliseTelegramHeader_int_T *) &BG355_H2_Balises426,
    (TM_P003_T *) &DEFAULT_P003,
    (TM_P041_T *) &DEFAULT_P041,
    (TM_P042_T *) &DEFAULT_P042,
    (TM_P045 *) &DEFAULT_P045,
    (TM_P046_T *) &DEFAULT_P046,
    DEFAULT_P072,
    (TM_P137_T *) &DEFAULT_P137,
    (TM_P255_T *) &DEFAULT_P255,
    &outC->Context_5);
  kcg_copy_TM_CompressedBaliseMessage(&outC->BM, &outC->Context_5.BM_out);
  outC->BG_passed = outC->Context_5.BG_passed1;
  outC->LRBG = outC->Context_5.LRBG;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Story00_BTM_Story00_first_test.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

