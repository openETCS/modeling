/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestP041_specific_Internal_Tests.h"

void TestP041_specific_reset_Internal_Tests(void)
{
  /* 1 */
  C_P041_to_legacy_t_reset_TM_conversions(
    &Ctxt_TestP041_specific_Internal_Tests._2_Context_1);
  /* 1 */
  Read_P041_reset_TM(&Ctxt_TestP041_specific_Internal_Tests._1_Context_1);
  /* 1 */
  Write_P041_reset_TM_trackside(
    &Ctxt_TestP041_specific_Internal_Tests.Context_1);
}

/* Internal_Tests::TestP041_specific */
void TestP041_specific_Internal_Tests(void)
{
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg tmp;
  static kcg_bool noname;
  
  kcg_copy_P041_trackside_int_T_TM(
    &Ctxt_TestP041_specific_Internal_Tests._L5,
    (P041_trackside_int_T_TM *) &BG356_P041_Packets426);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_TestP041_specific_Internal_Tests._L4,
    (CompressedPackets_T_Common_Types_Pkg *)
      &DEFAULT_CompressedPackets_Internal_Tests);
  /* 1 */
  Write_P041_TM_trackside(
    &Ctxt_TestP041_specific_Internal_Tests._L5,
    &Ctxt_TestP041_specific_Internal_Tests._L4,
    &Ctxt_TestP041_specific_Internal_Tests.Context_1);
  Ctxt_TestP041_specific_Internal_Tests._L2 =
    Ctxt_TestP041_specific_Internal_Tests.Context_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_TestP041_specific_Internal_Tests._L3,
    &Ctxt_TestP041_specific_Internal_Tests.Context_1.RadioPacketsOut);
  /* 1 */
  Read_P041_TM(
    &Ctxt_TestP041_specific_Internal_Tests._L3,
    &Ctxt_TestP041_specific_Internal_Tests._1_Context_1);
  Ctxt_TestP041_specific_Internal_Tests._L1 =
    Ctxt_TestP041_specific_Internal_Tests._1_Context_1.received;
  kcg_copy_P041_OBU_T_TM(
    &Ctxt_TestP041_specific_Internal_Tests._L6,
    &Ctxt_TestP041_specific_Internal_Tests._1_Context_1.P041_OBU_out);
  Ctxt_TestP041_specific_Internal_Tests.tmp =
    Ctxt_TestP041_specific_Internal_Tests._L1;
  if (Ctxt_TestP041_specific_Internal_Tests.tmp) {
    /* 1 */
    C_P041_to_legacy_t_TM_conversions(
      &Ctxt_TestP041_specific_Internal_Tests._L6,
      &Ctxt_TestP041_specific_Internal_Tests._2_Context_1);
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &tmp,
      &Ctxt_TestP041_specific_Internal_Tests._2_Context_1.P041_legacy_out);
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &Ctxt_TestP041_specific_Internal_Tests._L7,
      &tmp);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &Ctxt_TestP041_specific_Internal_Tests._L7,
      (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
        &DEFAULT_P041_legacy_TM_specific);
  }
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &PacketOut,
    &Ctxt_TestP041_specific_Internal_Tests._L7);
  noname = Ctxt_TestP041_specific_Internal_Tests._L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP041_specific_Internal_Tests.c
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */

