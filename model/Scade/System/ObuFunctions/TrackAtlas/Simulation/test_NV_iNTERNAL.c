/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "test_NV_iNTERNAL.h"

void test_NV_reset_iNTERNAL(outC_test_NV_iNTERNAL *outC)
{
  /* 1 */ Manage_NV_reset_Storage(&outC->_1_Context_1);
  /* 1 */ Write_P003V1_reset_TM_trackside_baseline2(&outC->Context_1);
}

/* iNTERNAL::test_NV */
void test_NV_iNTERNAL(inC_test_NV_iNTERNAL *inC, outC_test_NV_iNTERNAL *outC)
{
  kcg_bool noname;
  
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(
    &outC->_L11,
    (P003V1_trackside_int_T_TM_baseline2 *) &defaultP3V1_iNTERNAL);
  outC->_L8 = inC->receive;
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(
    &outC->_L3,
    (P003V1_trackside_int_T_TM_baseline2 *) &LRBG354_P003_1_Packets426);
  if (outC->_L8) {
    kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L9, &outC->_L3);
  }
  else {
    kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L9, &outC->_L11);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L7,
    (CompressedPackets_T_Common_Types_Pkg *)
      &DEFAULT_CompressedPackets_Internal_Tests);
  /* 1 */
  Write_P003V1_TM_trackside_baseline2(&outC->_L9, &outC->_L7, &outC->Context_1);
  outC->_L4 = outC->Context_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->Context_1.RadioPacketsOut);
  noname = outC->_L4;
  /* 1 */ Manage_NV_Storage(&outC->_L5, &outC->_1_Context_1);
  outC->_L1 = outC->_1_Context_1.vald_NV;
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L2,
    &outC->_1_Context_1.NV_onboard_out);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->NV_onboard_out, &outC->_L2);
  outC->vald_NV = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** test_NV_iNTERNAL.c
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

