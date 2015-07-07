/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */
#ifndef _test_NV_iNTERNAL_H_
#define _test_NV_iNTERNAL_H_

#include "kcg_types.h"
#include "Manage_NV_Storage.h"
#include "Write_P003V1_TM_trackside_baseline2.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* iNTERNAL::test_NV::receive */ receive;
} inC_test_NV_iNTERNAL;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* iNTERNAL::test_NV::vald_NV */ vald_NV;
  P003V1_OBU_T_TM_baseline2 /* iNTERNAL::test_NV::NV_onboard_out */ NV_onboard_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Manage_NV_Storage /* 1 */ _1_Context_1;
  outC_Write_P003V1_TM_trackside_baseline2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003V1_OBU_T_TM_baseline2 /* iNTERNAL::test_NV::_L2 */ _L2;
  kcg_bool /* iNTERNAL::test_NV::_L1 */ _L1;
  P003V1_trackside_int_T_TM_baseline2 /* iNTERNAL::test_NV::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* iNTERNAL::test_NV::_L5 */ _L5;
  kcg_bool /* iNTERNAL::test_NV::_L4 */ _L4;
  CompressedPackets_T_Common_Types_Pkg /* iNTERNAL::test_NV::_L7 */ _L7;
  kcg_bool /* iNTERNAL::test_NV::_L8 */ _L8;
  P003V1_trackside_int_T_TM_baseline2 /* iNTERNAL::test_NV::_L9 */ _L9;
  P003V1_trackside_int_T_TM_baseline2 /* iNTERNAL::test_NV::_L11 */ _L11;
} outC_test_NV_iNTERNAL;

/* ===========  node initialization and cycle functions  =========== */
/* iNTERNAL::test_NV */
extern void test_NV_iNTERNAL(
  inC_test_NV_iNTERNAL *inC,
  outC_test_NV_iNTERNAL *outC);

extern void test_NV_reset_iNTERNAL(outC_test_NV_iNTERNAL *outC);

#endif /* _test_NV_iNTERNAL_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** test_NV_iNTERNAL.h
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

