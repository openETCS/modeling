/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */
#ifndef _Manage_NV_Storage_H_
#define _Manage_NV_Storage_H_

#include "kcg_types.h"
#include "NV_storage_Storage.h"
#include "Read_P003V1_TM_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Storage::Manage_NV::vald_NV */ vald_NV;
  P003V1_OBU_T_TM_baseline2 /* Storage::Manage_NV::NV_onboard_out */ NV_onboard_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  P003V1_OBU_T_TM_baseline2 /* Storage::Manage_NV::_L19 */ _L19;
  kcg_bool /* Storage::Manage_NV::_L20 */ _L20;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NV_storage_Storage /* 1 */ _1_Context_1;
  outC_Read_P003V1_TM_baseline2 /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* Storage::Manage_NV::_L1 */ _L1;
  P003V1_OBU_T_TM_baseline2 /* Storage::Manage_NV::_L17 */ _L17;
  kcg_bool /* Storage::Manage_NV::_L18 */ _L18;
} outC_Manage_NV_Storage;

/* ===========  node initialization and cycle functions  =========== */
/* Storage::Manage_NV */
extern void Manage_NV_Storage(
  /* Storage::Manage_NV::packets_in */CompressedPackets_T_Common_Types_Pkg *packets_in,
  outC_Manage_NV_Storage *outC);

extern void Manage_NV_reset_Storage(outC_Manage_NV_Storage *outC);

#endif /* _Manage_NV_Storage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_NV_Storage.h
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

