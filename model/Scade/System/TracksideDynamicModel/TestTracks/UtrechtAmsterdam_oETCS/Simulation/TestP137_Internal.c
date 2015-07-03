/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:35:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestP137_Internal.h"

void TestP137_reset_Internal(outC_TestP137_Internal *outC)
{
  /* 1 */ Read_P137_reset_TM(&outC->_1_Context_1);
  /* 1 */ Write_P137_reset_TM_trackside(&outC->Context_1);
}

/* Internal::TestP137 */
void TestP137_Internal(outC_TestP137_Internal *outC)
{
  kcg_bool noname;
  
  kcg_copy_P137_trackside_int_T_TM(
    &outC->_L5,
    (P137_trackside_int_T_TM *) &BG361_P137_Packets426);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    (CompressedPackets_T_Common_Types_Pkg *)
      &DEFAULT_CompressedPackets_Internal);
  /* 1 */ Write_P137_TM_trackside(&outC->_L5, &outC->_L4, &outC->Context_1);
  outC->_L2 = outC->Context_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.RadioPacketsOut);
  /* 1 */ Read_P137_TM(&outC->_L3, &outC->_1_Context_1);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L1,
    &outC->_1_Context_1.P137_OBU_out);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->PacketOut,
    &outC->_L1);
  noname = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP137_Internal.c
** Generation date: 2015-07-03T00:35:44
*************************************************************$ */

