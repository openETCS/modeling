/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "INFRA_BG_generic_2.h"

void INFRA_BG_generic_2_init(outC_INFRA_BG_generic_2 *outC)
{
  int i;
  
  outC->LRBG = 0;
  outC->BG_passed1 = kcg_true;
  for (i = 0; i < 500; i++) {
    outC->BM_out.Messages.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->BM_out.Messages.PacketHeaders[i].endAddress = 0;
    outC->BM_out.Messages.PacketHeaders[i].startAddress = 0;
    outC->BM_out.Messages.PacketHeaders[i].valid = kcg_true;
    outC->BM_out.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->BM_out.Messages.PacketHeaders[i].nid_packet = 0;
  }
  outC->BM_out.Header.q_link = 0;
  outC->BM_out.Header.nid_bg = 0;
  outC->BM_out.Header.nid_c = 0;
  outC->BM_out.Header.m_mcount = 0;
  outC->BM_out.Header.m_dup = 0;
  outC->BM_out.Header.n_total = 0;
  outC->BM_out.Header.n_pig = 0;
  outC->BM_out.Header.q_media = 0;
  outC->BM_out.Header.m_version = 0;
  outC->BM_out.Header.q_updown = 0;
  INFRA_Balise_init(&outC->Context_1);
  INFRA_Balise_init(&outC->Context_2);
  INFRA_BG_passed_init(&outC->_1_Context_1);
}


void INFRA_BG_generic_2_reset(outC_INFRA_BG_generic_2 *outC)
{
  /* 1 */ INFRA_BG_passed_reset(&outC->_1_Context_1);
  /* 2 */ INFRA_Balise_reset(&outC->Context_2);
  /* 1 */ INFRA_Balise_reset(&outC->Context_1);
}

/* INFRA_BG_generic_2 */
void INFRA_BG_generic_2(
  /* INFRA_BG_generic_2::BM_in */ TM_CompressedBaliseMessage *BM_in,
  /* INFRA_BG_generic_2::other_BG_passed */ kcg_bool other_BG_passed,
  /* INFRA_BG_generic_2::LRBG_in */ kcg_int LRBG_in,
  /* INFRA_BG_generic_2::Q_DIR */ kcg_int Q_DIR1,
  /* INFRA_BG_generic_2::TrainPos */ kcg_real TrainPos,
  /* INFRA_BG_generic_2::BG */ TM_BaliseGroupData *BG,
  /* INFRA_BG_generic_2::T_Balise1 */ TM_BaliseTelegramHeader_int_T *T_Balise1,
  /* INFRA_BG_generic_2::T_Balise2 */ TM_BaliseTelegramHeader_int_T *T_Balise2,
  /* INFRA_BG_generic_2::P3 */ TM_P003_T *P3,
  /* INFRA_BG_generic_2::P41 */ TM_P041_T *P41,
  /* INFRA_BG_generic_2::P42 */ TM_P042_T *P42,
  /* INFRA_BG_generic_2::P45 */ TM_P045 *P45,
  /* INFRA_BG_generic_2::P46 */ TM_P046_T *P46,
  /* INFRA_BG_generic_2::P72 */ TM_P072_T P72,
  /* INFRA_BG_generic_2::P137 */ TM_P137_T *P137,
  /* INFRA_BG_generic_2::P255 */ TM_P255_T *P255,
  outC_INFRA_BG_generic_2 *outC)
{
  /* INFRA_BG_generic_2::_L53 */ kcg_real _L53;
  /* INFRA_BG_generic_2::_L52 */ kcg_real _L52;
  /* INFRA_BG_generic_2::_L51 */ TM_BaliseTelegramHeader_int_T _L51;
  /* INFRA_BG_generic_2::_L50 */ TM_BaliseTelegramHeader_int_T _L50;
  
  /* 1 */
  INFRA_BaliseGroupOrientation(
    Q_DIR1,
    BG,
    T_Balise1,
    T_Balise2,
    &_L50,
    &_L52,
    &_L51,
    &_L53);
  /* 1 */
  INFRA_Balise(
    BM_in,
    TrainPos,
    &_L50,
    _L52,
    P3,
    P41,
    P42,
    P46,
    P72,
    P137,
    P255,
    &outC->Context_1);
  /* 2 */
  INFRA_Balise(
    &outC->Context_1.BM_out,
    TrainPos,
    &_L51,
    _L53,
    P3,
    P41,
    P42,
    P46,
    P72,
    P137,
    P255,
    &outC->Context_2);
  kcg_copy_TM_CompressedBaliseMessage(&outC->BM_out, &outC->Context_2.BM_out);
  /* 1 */
  INFRA_BG_passed(
    other_BG_passed,
    LRBG_in,
    BG,
    outC->Context_1.passed,
    outC->Context_2.passed,
    &outC->_1_Context_1);
  outC->BG_passed1 = outC->_1_Context_1.BG_passed;
  outC->LRBG = outC->_1_Context_1.LRBG;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_BG_generic_2.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

