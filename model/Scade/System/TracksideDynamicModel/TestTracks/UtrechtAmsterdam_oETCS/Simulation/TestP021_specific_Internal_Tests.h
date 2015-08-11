/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T09:13:50
*************************************************************$ */
#ifndef _TestP021_specific_Internal_Tests_H_
#define _TestP021_specific_Internal_Tests_H_

#include "kcg_types.h"
#include "Read_P021_TM.h"
#include "C_P021_to_legacy_t_TM_conversions.h"
#include "Write_P021_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P021_to_legacy_t_TM_conversions /* 1 */ _2_Context_1;
  outC_Read_P021_TM /* 1 */ _1_Context_1;
  outC_Write_P021_TM_trackside /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Internal_Tests::TestP021_specific::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestP021_specific::_L3 */ _L3;
  kcg_bool /* Internal_Tests::TestP021_specific::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestP021_specific::_L4 */ _L4;
  P021_trackside_int_T_TM /* Internal_Tests::TestP021_specific::_L5 */ _L5;
  P021_OBU_T_TM /* Internal_Tests::TestP021_specific::_L6 */ _L6;
  P21_GradientProfiles_T_Packet_Types_Pkg /* Internal_Tests::TestP021_specific::_L7 */ _L7;
} outC_TestP021_specific_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TestP021_specific */
extern void TestP021_specific_Internal_Tests(void);

extern void TestP021_specific_reset_Internal_Tests(void);

extern outC_TestP021_specific_Internal_Tests Ctxt_TestP021_specific_Internal_Tests;


/* Internal_Tests::TestP021_specific::PacketOut */
extern P21_GradientProfiles_T_Packet_Types_Pkg PacketOut;

#endif /* _TestP021_specific_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP021_specific_Internal_Tests.h
** Generation date: 2015-08-11T09:13:50
*************************************************************$ */

