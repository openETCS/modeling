/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */
#ifndef _TRAIN_systemTimeGenerator_Toolbox_Functions_H_
#define _TRAIN_systemTimeGenerator_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::timestamp */ timestamp;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TRAIN_systemTimeGenerator_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::TRAIN_systemTimeGenerator */
extern void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);

extern void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);

#endif /* _TRAIN_systemTimeGenerator_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TRAIN_systemTimeGenerator_Toolbox_Functions.h
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */

