/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MA_storage_TA_MA_H_
#define _MA_storage_TA_MA_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_OBU_T_TM /* TA_MA::MA_storage::Packet15_out */ Packet15_out;
  kcg_bool /* TA_MA::MA_storage::vald_MA */ vald_MA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_T_TM /* TA_MA::MA_storage::_L1 */ _L1;
  kcg_bool /* TA_MA::MA_storage::_L2 */ _L2;
} outC_MA_storage_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::MA_storage */
extern void MA_storage_TA_MA(
  /* TA_MA::MA_storage::Packet15_in */P015_OBU_T_TM *Packet15_in,
  outC_MA_storage_TA_MA *outC);

extern void MA_storage_reset_TA_MA(outC_MA_storage_TA_MA *outC);

#endif /* _MA_storage_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_storage_TA_MA.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

