/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _INFRA_Balise_H_
#define _INFRA_Balise_H_

#include "kcg_types.h"
#include "SEND_MergeBalisePackets.h"
#include "INFRA_Balise_Localisation.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* INFRA_Balise::passed */ passed;
  TM_CompressedBaliseMessage /* INFRA_Balise::BM_out */ BM_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_INFRA_Balise_Localisation /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_INFRA_Balise;

/* ===========  node initialization and cycle functions  =========== */
/* INFRA_Balise */
extern void INFRA_Balise(
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
  outC_INFRA_Balise *outC);

extern void INFRA_Balise_reset(outC_INFRA_Balise *outC);
extern void INFRA_Balise_init(outC_INFRA_Balise *outC);

#endif /* _INFRA_Balise_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_Balise.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

