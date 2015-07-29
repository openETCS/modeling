/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _StoreRaw_MA_TA_MA_H_
#define _StoreRaw_MA_TA_MA_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "MA_storage_TA_MA.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA::StoreRaw_MA::vald_MA */ vald_MA;
  kcg_bool /* TA_MA::StoreRaw_MA::new_MA */ new_MA;
  P015_OBU_T_TM /* TA_MA::StoreRaw_MA::MA_onboard_out */ MA_onboard_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  P015_OBU_T_TM /* TA_MA::StoreRaw_MA::_L24 */ _L24;
  kcg_bool /* TA_MA::StoreRaw_MA::_L26 */ _L26;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MA_storage_TA_MA /* 1 */ _1_Context_1;
  outC_Read_P015_TM /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* TA_MA::StoreRaw_MA::_L25 */ _L25;
  kcg_bool /* TA_MA::StoreRaw_MA::_L21 */ _L21;
  P015_OBU_T_TM /* TA_MA::StoreRaw_MA::_L22 */ _L22;
} outC_StoreRaw_MA_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::StoreRaw_MA */
extern void StoreRaw_MA_TA_MA(
  /* TA_MA::StoreRaw_MA::packets_in */CompressedPackets_T_Common_Types_Pkg *packets_in,
  outC_StoreRaw_MA_TA_MA *outC);

extern void StoreRaw_MA_reset_TA_MA(outC_StoreRaw_MA_TA_MA *outC);

#endif /* _StoreRaw_MA_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** StoreRaw_MA_TA_MA.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

