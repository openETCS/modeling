/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestP021_Internal_Tests.h"

void TestP021_reset_Internal_Tests(outC_TestP021_Internal_Tests *outC)
{
  /* 1 */ Read_P021_reset_TM(&outC->_1_Context_1);
  /* 1 */ Write_P021_reset_TM_trackside(&outC->Context_1);
}

/* Internal_Tests::TestP021 */
void TestP021_Internal_Tests(outC_TestP021_Internal_Tests *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  kcg_copy_P021_trackside_int_T_TM(
    &outC->_L5,
    (P021_trackside_int_T_TM *) &LRBG354_P021_1_Packets426);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    (CompressedPackets_T_Common_Types_Pkg *)
      &DEFAULT_CompressedPackets_Internal_Tests);
  /* 1 */ Write_P021_TM_trackside(&outC->_L5, &outC->_L4, &outC->Context_1);
  outC->_L2 = outC->Context_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.RadioPacketsOut);
  /* 1 */ Read_P021_TM(&outC->_L3, &outC->_1_Context_1);
  outC->_L1 = outC->_1_Context_1.received;
  kcg_copy_P021_OBU_T_TM(&outC->_L6, &outC->_1_Context_1.P021_OBU_out);
  _1_noname = outC->_L1;
  kcg_copy_P021_OBU_T_TM(&outC->PacketOut, &outC->_L6);
  noname = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP021_Internal_Tests.c
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

