/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _INFRA_BG_generic_2_H_
#define _INFRA_BG_generic_2_H_

#include "kcg_types.h"
#include "INFRA_BaliseGroupOrientation.h"
#include "INFRA_Balise.h"
#include "INFRA_BG_passed.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TM_CompressedBaliseMessage /* INFRA_BG_generic_2::BM_out */ BM_out;
  kcg_bool /* INFRA_BG_generic_2::BG_passed1 */ BG_passed1;
  kcg_int /* INFRA_BG_generic_2::LRBG */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_INFRA_BG_passed /* 1 */ _1_Context_1;
  outC_INFRA_Balise /* 2 */ Context_2;
  outC_INFRA_Balise /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_INFRA_BG_generic_2;

/* ===========  node initialization and cycle functions  =========== */
/* INFRA_BG_generic_2 */
extern void INFRA_BG_generic_2(
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
  outC_INFRA_BG_generic_2 *outC);

extern void INFRA_BG_generic_2_reset(outC_INFRA_BG_generic_2 *outC);
extern void INFRA_BG_generic_2_init(outC_INFRA_BG_generic_2 *outC);

#endif /* _INFRA_BG_generic_2_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_BG_generic_2.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

