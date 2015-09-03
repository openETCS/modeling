/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */
#ifndef _TestTrackTrackAtlas_Internal_Tests_H_
#define _TestTrackTrackAtlas_Internal_Tests_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "RBC_close_RadioLib.h"
#include "RBC_init_RadioLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* Internal_Tests::TestTrackTrackAtlas::Message_out */ Message_out;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestTrackTrackAtlas::Packets_out */ Packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC_close_RadioLib /* 1 */ _4_Context_1;
  outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 1 */ _3_Context_1;
  outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 1 */ _1_Context_1;
  outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 1 */ Context_1;
  outC_RBC_init_RadioLib /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* Internal_Tests::TestTrackTrackAtlas::_L1 */ _L1;
  R_data_internal_T_InfraLib /* Internal_Tests::TestTrackTrackAtlas::_L2 */ _L2;
  R_data_internal_T_InfraLib /* Internal_Tests::TestTrackTrackAtlas::_L3 */ _L3;
  R_data_internal_T_InfraLib /* Internal_Tests::TestTrackTrackAtlas::_L4 */ _L4;
  M_TrackTrain_Radio_T_TM_radio_messages /* Internal_Tests::TestTrackTrackAtlas::_L5 */ _L5;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestTrackTrackAtlas::_L6 */ _L6;
  kcg_int /* Internal_Tests::TestTrackTrackAtlas::_L21 */ _L21;
  M_TrackTrain_Radio_T_TM_radio_messages /* Internal_Tests::TestTrackTrackAtlas::_L20 */ _L20;
  kcg_bool /* Internal_Tests::TestTrackTrackAtlas::_L19 */ _L19;
  R_data_internal_T_InfraLib /* Internal_Tests::TestTrackTrackAtlas::_L18 */ _L18;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestTrackTrackAtlas::_L17 */ _L17;
} outC_TestTrackTrackAtlas_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TestTrackTrackAtlas */
extern void TestTrackTrackAtlas_Internal_Tests(
  /* Internal_Tests::TestTrackTrackAtlas::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Internal_Tests::TestTrackTrackAtlas::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Internal_Tests::TestTrackTrackAtlas::Trigger_in */kcg_int Trigger_in,
  /* Internal_Tests::TestTrackTrackAtlas::Message_sent */kcg_bool Message_sent,
  outC_TestTrackTrackAtlas_Internal_Tests *outC);

extern void TestTrackTrackAtlas_reset_Internal_Tests(
  outC_TestTrackTrackAtlas_Internal_Tests *outC);

#endif /* _TestTrackTrackAtlas_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestTrackTrackAtlas_Internal_Tests.h
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

