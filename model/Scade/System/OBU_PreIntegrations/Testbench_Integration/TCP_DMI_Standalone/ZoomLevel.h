/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _ZoomLevel_H_
#define _ZoomLevel_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ZoomLevel;

/* ===========  node initialization and cycle functions  =========== */
/* ZoomLevel */
extern void ZoomLevel(
  /* ZoomLevel::ZoomIn */kcg_bool ZoomIn,
  /* ZoomLevel::ZoomOut */kcg_bool ZoomOut,
  outC_ZoomLevel *outC);

extern void ZoomLevel_reset(outC_ZoomLevel *outC);

#endif /* _ZoomLevel_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ZoomLevel.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */

