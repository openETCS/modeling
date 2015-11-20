/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TRAIN_systemTimeGenerator_Toolbox_Functions_H_
#define _TRAIN_systemTimeGenerator_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::timestamp */ timestamp;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TRAIN_systemTimeGenerator_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::TRAIN_systemTimeGenerator */
extern void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */ kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TRAIN_systemTimeGenerator_init_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TRAIN_systemTimeGenerator_Toolbox_Functions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_systemTimeGenerator_Toolbox_Functions.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

