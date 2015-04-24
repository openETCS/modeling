/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _INFRA_Balise_Localisation_H_
#define _INFRA_Balise_Localisation_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* INFRA_Balise_Localisation::TrainPass */ TrainPass;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* INFRA_Balise_Localisation::TrainPos */ rem_TrainPos;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_INFRA_Balise_Localisation;

/* ===========  node initialization and cycle functions  =========== */
/* INFRA_Balise_Localisation */
extern void INFRA_Balise_Localisation(
  /* INFRA_Balise_Localisation::Loc */ kcg_real Loc,
  /* INFRA_Balise_Localisation::TrainPos */ kcg_real TrainPos,
  /* INFRA_Balise_Localisation::accuracy */ kcg_int accuracy,
  outC_INFRA_Balise_Localisation *outC);

extern void INFRA_Balise_Localisation_reset(
  outC_INFRA_Balise_Localisation *outC);
extern void INFRA_Balise_Localisation_init(
  outC_INFRA_Balise_Localisation *outC);

#endif /* _INFRA_Balise_Localisation_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_Balise_Localisation.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

