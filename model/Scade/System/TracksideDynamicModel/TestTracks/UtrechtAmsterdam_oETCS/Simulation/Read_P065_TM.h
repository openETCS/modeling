/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */
#ifndef _Read_P065_TM_H_
#define _Read_P065_TM_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "C_P065_compr_onboard_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P065_OBU_T_TM /* TM::Read_P065::P065_OBU_out */ P065_OBU_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P065_compr_onboard_TM_conversions /* 1 */ _1_Context_1;
  outC_RECV_ReadPackets_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_500 /* TM::Read_P065::_L5 */ _L5;
  CompressedPackets_T_Common_Types_Pkg /* TM::Read_P065::_L6 */ _L6;
  MetadataElement_T_Common_Types_Pkg /* TM::Read_P065::_L30 */ _L30;
  P065_OBU_T_TM /* TM::Read_P065::_L166 */ _L166;
} outC_Read_P065_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::Read_P065 */
extern void Read_P065_TM(
  /* TM::Read_P065::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P065_TM *outC);

extern void Read_P065_reset_TM(outC_Read_P065_TM *outC);

#endif /* _Read_P065_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P065_TM.h
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

