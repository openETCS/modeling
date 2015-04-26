/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "INFRA_Balise.h"

void INFRA_Balise_init(outC_INFRA_Balise *outC)
{
  int i;
  
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
  outC->passed = kcg_true;
  INFRA_Balise_Localisation_init(&outC->Context_1);
}


void INFRA_Balise_reset(outC_INFRA_Balise *outC)
{
  /* 1 */ INFRA_Balise_Localisation_reset(&outC->Context_1);
}

/* INFRA_Balise */
void INFRA_Balise(
  /* INFRA_Balise::BM_in */ TM_CompressedBaliseMessage *BM_in,
  /* INFRA_Balise::TrainPos */ kcg_real TrainPos,
  /* INFRA_Balise::Header */ TM_BaliseTelegramHeader_int_T *Header,
  /* INFRA_Balise::Loc */ kcg_real Loc,
  /* INFRA_Balise::P3 */ TM_P003_T *P3,
  /* INFRA_Balise::P41 */ TM_P041_T *P41,
  /* INFRA_Balise::P42 */ TM_P042_T *P42,
  /* INFRA_Balise::P46 */ TM_P046_T *P46,
  /* INFRA_Balise::P72 */ TM_P072_T P72,
  /* INFRA_Balise::P137 */ TM_P137_T *P137,
  /* INFRA_Balise::P255 */ TM_P255_T *P255,
  outC_INFRA_Balise *outC)
{
  /* 1 */ INFRA_Balise_Localisation(Loc, TrainPos, 0, &outC->Context_1);
  outC->passed = outC->Context_1.TrainPass;
  if (outC->passed) {
    /* 2 */
    SEND_MergeBalisePackets(
      Header,
      P3,
      P41,
      P42,
      P46,
      P72,
      P137,
      P255,
      &outC->BM_out);
  }
  else {
    kcg_copy_TM_CompressedBaliseMessage(&outC->BM_out, BM_in);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_Balise.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

