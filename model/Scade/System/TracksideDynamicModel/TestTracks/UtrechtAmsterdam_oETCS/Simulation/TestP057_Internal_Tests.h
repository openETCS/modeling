/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T16:18:38
*************************************************************$ */
#ifndef _TestP057_Internal_Tests_H_
#define _TestP057_Internal_Tests_H_

#include "kcg_types.h"
#include "Read_P057_TM.h"
#include "Write_P057_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P057_TM /* 1 */ _1_Context_1;
  outC_Write_P057_TM_trackside /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Internal_Tests::TestP057::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestP057::_L3 */ _L3;
  kcg_bool /* Internal_Tests::TestP057::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestP057::_L4 */ _L4;
  P057_trackside_int_T_TM /* Internal_Tests::TestP057::_L5 */ _L5;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* Internal_Tests::TestP057::_L6 */ _L6;
} outC_TestP057_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TestP057 */
extern void TestP057_Internal_Tests(void);

extern void TestP057_reset_Internal_Tests(void);

extern outC_TestP057_Internal_Tests Ctxt_TestP057_Internal_Tests;


/* Internal_Tests::TestP057::PacketOut */
extern P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg PacketOut;

#endif /* _TestP057_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP057_Internal_Tests.h
** Generation date: 2015-08-20T16:18:38
*************************************************************$ */

