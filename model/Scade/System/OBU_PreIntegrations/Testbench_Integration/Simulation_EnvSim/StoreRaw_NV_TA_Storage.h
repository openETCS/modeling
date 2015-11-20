/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _StoreRaw_NV_TA_Storage_H_
#define _StoreRaw_NV_TA_Storage_H_

#include "kcg_types.h"
#include "Read_P003V1_TM_baseline2.h"
#include "NV_storage_TA_Storage.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Storage::StoreRaw_NV::vald_NV */ vald_NV;
  kcg_bool /* TA_Storage::StoreRaw_NV::new_NV */ new_NV;
  P003V1_OBU_T_TM_baseline2 /* TA_Storage::StoreRaw_NV::NV_onboard_out */ NV_onboard_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_StoreRaw_NV_TA_Storage;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Storage::StoreRaw_NV */
extern void StoreRaw_NV_TA_Storage(
  /* TA_Storage::StoreRaw_NV::mesaage_in */ReceivedMessage_T_Common_Types_Pkg *mesaage_in,
  outC_StoreRaw_NV_TA_Storage *outC);

extern void StoreRaw_NV_reset_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC);

#endif /* _StoreRaw_NV_TA_Storage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** StoreRaw_NV_TA_Storage.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

