/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Build_MA_TA_MA_H_
#define _Build_MA_TA_MA_H_

#include "kcg_types.h"
#include "Decode_P015_TA_MA.h"
#include "StoreRaw_MA_TA_MA.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA::Build_MA::new_MA */ new_MA;
  kcg_bool /* TA_MA::Build_MA::vald_MA */ vald_MA;
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Build_MA::MA_onboard_out */ MA_onboard_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Decode_P015_TA_MA /* 1 */ _1_Context_1;
  outC_StoreRaw_MA_TA_MA /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Build_MA::_L1 */ _L1;
  P015_OBU_T_TM /* TA_MA::Build_MA::_L3 */ _L3;
  kcg_bool /* TA_MA::Build_MA::_L2 */ _L2;
  kcg_bool /* TA_MA::Build_MA::_L4 */ _L4;
  ReceivedMessage_T_Common_Types_Pkg /* TA_MA::Build_MA::_L5 */ _L5;
  CompressedPackets_T_Common_Types_Pkg /* TA_MA::Build_MA::_L6 */ _L6;
  P003V1_OBU_T_TM_baseline2 /* TA_MA::Build_MA::_L7 */ _L7;
} outC_Build_MA_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::Build_MA */
extern void Build_MA_TA_MA(
  /* TA_MA::Build_MA::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA::NV_onboard_in */P003V1_OBU_T_TM_baseline2 *NV_onboard_in,
  outC_Build_MA_TA_MA *outC);

extern void Build_MA_reset_TA_MA(outC_Build_MA_TA_MA *outC);

#endif /* _Build_MA_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_TA_MA.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

