/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ZoomLevel_H_
#define _ZoomLevel_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tScale /* ZoomLevel::Scale */ Scale;
  kcg_int /* ZoomLevel::zoomlevel */ zoomlevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* ZoomLevel::SM1 */ SM1_state_nxt;
  kcg_bool /* ZoomLevel::SM1 */ SM1_reset_act;
  kcg_bool /* ZoomLevel::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ZoomLevel;

/* ===========  node initialization and cycle functions  =========== */
/* ZoomLevel */
extern void ZoomLevel(
  /* ZoomLevel::ZoomIn */ kcg_bool ZoomIn,
  /* ZoomLevel::ZoomOut */ kcg_bool ZoomOut,
  outC_ZoomLevel *outC);

extern void ZoomLevel_reset(outC_ZoomLevel *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ZoomLevel_init(outC_ZoomLevel *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ZoomLevel_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ZoomLevel.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

