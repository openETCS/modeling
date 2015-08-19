/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T09:05:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestP021_Internal_Tests.h"

void TestP021_reset_Internal_Tests(void)
{
  /* 1 */ Read_P021_reset_TM(&Ctxt_TestP021_Internal_Tests._1_Context_1);
  /* 1 */
  Write_P021_reset_TM_trackside(&Ctxt_TestP021_Internal_Tests.Context_1);
}

/* Internal_Tests::TestP021 */
void TestP021_Internal_Tests(void)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  
  kcg_copy_P021_trackside_int_T_TM(
    &Ctxt_TestP021_Internal_Tests._L5,
    (P021_trackside_int_T_TM *) &LRBG354_P021_1_Packets426);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_TestP021_Internal_Tests._L4,
    (CompressedPackets_T_Common_Types_Pkg *)
      &DEFAULT_CompressedPackets_Internal_Tests);
  /* 1 */
  Write_P021_TM_trackside(
    &Ctxt_TestP021_Internal_Tests._L5,
    &Ctxt_TestP021_Internal_Tests._L4,
    &Ctxt_TestP021_Internal_Tests.Context_1);
  Ctxt_TestP021_Internal_Tests._L2 =
    Ctxt_TestP021_Internal_Tests.Context_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_TestP021_Internal_Tests._L3,
    &Ctxt_TestP021_Internal_Tests.Context_1.RadioPacketsOut);
  /* 1 */
  Read_P021_TM(
    &Ctxt_TestP021_Internal_Tests._L3,
    &Ctxt_TestP021_Internal_Tests._1_Context_1);
  Ctxt_TestP021_Internal_Tests._L1 =
    Ctxt_TestP021_Internal_Tests._1_Context_1.received;
  kcg_copy_P021_OBU_T_TM(
    &Ctxt_TestP021_Internal_Tests._L6,
    &Ctxt_TestP021_Internal_Tests._1_Context_1.P021_OBU_out);
  _1_noname = Ctxt_TestP021_Internal_Tests._L1;
  kcg_copy_P021_OBU_T_TM(&PacketOut, &Ctxt_TestP021_Internal_Tests._L6);
  noname = Ctxt_TestP021_Internal_Tests._L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP021_Internal_Tests.c
** Generation date: 2015-08-11T09:05:50
*************************************************************$ */

