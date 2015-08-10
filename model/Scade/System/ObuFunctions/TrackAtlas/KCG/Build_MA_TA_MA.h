/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
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
  outC_StoreRaw_MA_TA_MA /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

