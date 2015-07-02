/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */
#ifndef _TestP003V1_Internal_H_
#define _TestP003V1_Internal_H_

#include "kcg_types.h"
#include "Read_P003V1_TM_baseline2.h"
#include "Write_P003V1_TM_trackside_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003V1_OBU_T_TM_baseline2 /* Internal::TestP003V1::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P003V1_TM_baseline2 /* 1 */ _1_Context_1;
  outC_Write_P003V1_TM_trackside_baseline2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003V1_OBU_T_TM_baseline2 /* Internal::TestP003V1::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* Internal::TestP003V1::_L3 */ _L3;
  kcg_bool /* Internal::TestP003V1::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal::TestP003V1::_L4 */ _L4;
  P003V1_trackside_int_T_TM_baseline2 /* Internal::TestP003V1::_L5 */ _L5;
} outC_TestP003V1_Internal;

/* ===========  node initialization and cycle functions  =========== */
/* Internal::TestP003V1 */
extern void TestP003V1_Internal(outC_TestP003V1_Internal *outC);

extern void TestP003V1_reset_Internal(outC_TestP003V1_Internal *outC);

#endif /* _TestP003V1_Internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP003V1_Internal.h
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

