/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */
#ifndef _TestP027V1_Internal_H_
#define _TestP027V1_Internal_H_

#include "kcg_types.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Write_P027V1_TM_trackside_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_OBU_T_TM_baseline2 /* Internal::TestP027V1::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P027V1_TM_baseline2 /* 1 */ _1_Context_1;
  outC_Write_P027V1_TM_trackside_baseline2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* Internal::TestP027V1::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* Internal::TestP027V1::_L3 */ _L3;
  kcg_bool /* Internal::TestP027V1::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal::TestP027V1::_L4 */ _L4;
  P027V1_trackside_int_T_TM_baseline2 /* Internal::TestP027V1::_L5 */ _L5;
} outC_TestP027V1_Internal;

/* ===========  node initialization and cycle functions  =========== */
/* Internal::TestP027V1 */
extern void TestP027V1_Internal(outC_TestP027V1_Internal *outC);

extern void TestP027V1_reset_Internal(outC_TestP027V1_Internal *outC);

#endif /* _TestP027V1_Internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP027V1_Internal.h
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */

