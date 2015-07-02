/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestP003V1_Internal.h"

void TestP003V1_reset_Internal(outC_TestP003V1_Internal *outC)
{
  /* 1 */ Read_P003V1_reset_TM_baseline2(&outC->_1_Context_1);
  /* 1 */ Write_P003V1_reset_TM_trackside_baseline2(&outC->Context_1);
}

/* Internal::TestP003V1 */
void TestP003V1_Internal(outC_TestP003V1_Internal *outC)
{
  kcg_bool noname;
  
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(
    &outC->_L5,
    (P003V1_trackside_int_T_TM_baseline2 *) &BG354_P003_Packets426);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    (CompressedPackets_T_Common_Types_Pkg *)
      &DEFAULT_CompressedPackets_Internal);
  /* 1 */
  Write_P003V1_TM_trackside_baseline2(&outC->_L5, &outC->_L4, &outC->Context_1);
  outC->_L2 = outC->Context_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.RadioPacketsOut);
  /* 1 */ Read_P003V1_TM_baseline2(&outC->_L3, &outC->_1_Context_1);
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L1,
    &outC->_1_Context_1.P003V1_OBU_out);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->PacketOut, &outC->_L1);
  noname = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP003V1_Internal.c
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

