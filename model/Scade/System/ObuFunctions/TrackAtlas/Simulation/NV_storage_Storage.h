/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */
#ifndef _NV_storage_Storage_H_
#define _NV_storage_Storage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Storage::NV_storage::P3_received */ P3_received;
  P003V1_OBU_T_TM_baseline2 /* Storage::NV_storage::Packet3_out */ Packet3_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003V1_OBU_T_TM_baseline2 /* Storage::NV_storage::_L1 */ _L1;
  kcg_bool /* Storage::NV_storage::_L2 */ _L2;
} outC_NV_storage_Storage;

/* ===========  node initialization and cycle functions  =========== */
/* Storage::NV_storage */
extern void NV_storage_Storage(
  /* Storage::NV_storage::Packet3_in */P003V1_OBU_T_TM_baseline2 *Packet3_in,
  outC_NV_storage_Storage *outC);

extern void NV_storage_reset_Storage(outC_NV_storage_Storage *outC);

#endif /* _NV_storage_Storage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** NV_storage_Storage.h
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

