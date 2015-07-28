/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
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
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* TA_Storage::StoreRaw_NV::_L23 */ _L23;
  P003V1_OBU_T_TM_baseline2 /* TA_Storage::StoreRaw_NV::_L24 */ _L24;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NV_storage_TA_Storage /* 3 */ _1_Context_3;
  outC_Read_P003V1_TM_baseline2 /* 3 */ Context_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_Storage::StoreRaw_NV::_L25 */ _L25;
  kcg_bool /* TA_Storage::StoreRaw_NV::_L21 */ _L21;
  P003V1_OBU_T_TM_baseline2 /* TA_Storage::StoreRaw_NV::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* TA_Storage::StoreRaw_NV::_L26 */ _L26;
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
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

