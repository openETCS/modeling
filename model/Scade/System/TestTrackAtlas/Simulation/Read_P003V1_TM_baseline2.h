/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _Read_P003V1_TM_baseline2_H_
#define _Read_P003V1_TM_baseline2_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "C_P003V1_compr_onboard_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_baseline2::Read_P003V1::received */ received;
  P003V1_OBU_T_TM_baseline2 /* TM_baseline2::Read_P003V1::P003V1_OBU_out */ P003V1_OBU_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 /* 1 */ _1_Context_1;
  outC_RECV_ReadPackets_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* TM_baseline2::Read_P003V1::_L6 */ _L6;
  P003V1_OBU_T_TM_baseline2 /* TM_baseline2::Read_P003V1::_L166 */ _L166;
  MetadataElement_T_Common_Types_Pkg /* TM_baseline2::Read_P003V1::_L30 */ _L30;
  array_int_500 /* TM_baseline2::Read_P003V1::_L5 */ _L5;
  kcg_bool /* TM_baseline2::Read_P003V1::_L167 */ _L167;
} outC_Read_P003V1_TM_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_baseline2::Read_P003V1 */
extern void Read_P003V1_TM_baseline2(
  /* TM_baseline2::Read_P003V1::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P003V1_TM_baseline2 *outC);

extern void Read_P003V1_reset_TM_baseline2(outC_Read_P003V1_TM_baseline2 *outC);

#endif /* _Read_P003V1_TM_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P003V1_TM_baseline2.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

