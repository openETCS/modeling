/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-27T16:09:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestP027V1_Internal_Tests.h"

void TestP027V1_reset_Internal_Tests(void)
{
  /* 1 */
  Read_P027V1_reset_TM_baseline2(&Ctxt_TestP027V1_Internal_Tests._1_Context_1);
  /* 1 */
  Write_P027V1_reset_TM_trackside_baseline2(
    &Ctxt_TestP027V1_Internal_Tests.Context_1);
}

/* Internal_Tests::TestP027V1 */
void TestP027V1_Internal_Tests(void)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(
    &Ctxt_TestP027V1_Internal_Tests._L5,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG354_P027_1_Packets426);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_TestP027V1_Internal_Tests._L4,
    (CompressedPackets_T_Common_Types_Pkg *)
      &DEFAULT_CompressedPackets_Internal_Tests);
  /* 1 */
  Write_P027V1_TM_trackside_baseline2(
    &Ctxt_TestP027V1_Internal_Tests._L5,
    &Ctxt_TestP027V1_Internal_Tests._L4,
    &Ctxt_TestP027V1_Internal_Tests.Context_1);
  Ctxt_TestP027V1_Internal_Tests._L2 =
    Ctxt_TestP027V1_Internal_Tests.Context_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_TestP027V1_Internal_Tests._L3,
    &Ctxt_TestP027V1_Internal_Tests.Context_1.PacketsOut);
  /* 1 */
  Read_P027V1_TM_baseline2(
    &Ctxt_TestP027V1_Internal_Tests._L3,
    &Ctxt_TestP027V1_Internal_Tests._1_Context_1);
  Ctxt_TestP027V1_Internal_Tests._L1 =
    Ctxt_TestP027V1_Internal_Tests._1_Context_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &Ctxt_TestP027V1_Internal_Tests._L6,
    &Ctxt_TestP027V1_Internal_Tests._1_Context_1.P027V1_out);
  _1_noname = Ctxt_TestP027V1_Internal_Tests._L1;
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &PacketOut,
    &Ctxt_TestP027V1_Internal_Tests._L6);
  noname = Ctxt_TestP027V1_Internal_Tests._L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP027V1_Internal_Tests.c
** Generation date: 2015-08-27T16:09:02
*************************************************************$ */

