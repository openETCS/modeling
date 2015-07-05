/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */
#ifndef _TestP065_Internal_Tests_H_
#define _TestP065_Internal_Tests_H_

#include "kcg_types.h"
#include "Read_P065_TM.h"
#include "Write_P065_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P065_OBU_T_TM /* Internal_Tests::TestP065::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P065_TM /* 1 */ _1_Context_1;
  outC_Write_P065_TM_trackside /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P065_OBU_T_TM /* Internal_Tests::TestP065::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestP065::_L3 */ _L3;
  kcg_bool /* Internal_Tests::TestP065::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestP065::_L4 */ _L4;
  P065_trackside_int_T_TM /* Internal_Tests::TestP065::_L5 */ _L5;
} outC_TestP065_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TestP065 */
extern void TestP065_Internal_Tests(outC_TestP065_Internal_Tests *outC);

extern void TestP065_reset_Internal_Tests(outC_TestP065_Internal_Tests *outC);

#endif /* _TestP065_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP065_Internal_Tests.h
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

