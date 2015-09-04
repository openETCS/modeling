/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _TestTrackTrackAtlasLegacy_Internal_Tests_H_
#define _TestTrackTrackAtlasLegacy_Internal_Tests_H_

#include "kcg_types.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"
#include "TestTrackTrackAtlas_Internal_Tests.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* Internal_Tests::TestTrackTrackAtlasLegacy::Compressed_Radio_Message_out */ Compressed_Radio_Message_out;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestTrackTrackAtlasLegacy::Compressed_Packets_out */ Compressed_Packets_out;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Internal_Tests::TestTrackTrackAtlasLegacy::RadioTrackTrainHeader_out */ RadioTrackTrainHeader_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_TrackTrainMessage_to_Int_TM_conversions /* 1 */ _2_Context_1;
  outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* 1 */ _1_Context_1;
  outC_TestTrackTrackAtlas_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* Internal_Tests::TestTrackTrackAtlasLegacy::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestTrackTrackAtlasLegacy::_L1 */ _L1;
  CompressedRadioMessage_TM /* Internal_Tests::TestTrackTrackAtlasLegacy::_L5 */ _L5;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Internal_Tests::TestTrackTrackAtlasLegacy::_L4 */ _L4;
  Radio_TrackTrain_Header_T_TM /* Internal_Tests::TestTrackTrackAtlasLegacy::_L3 */ _L3;
  M_TrackTrain_Radio_T_TM_radio_messages /* Internal_Tests::TestTrackTrackAtlasLegacy::_L8 */ _L8;
  kcg_bool /* Internal_Tests::TestTrackTrackAtlasLegacy::_L7 */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* Internal_Tests::TestTrackTrackAtlasLegacy::_L6 */ _L6;
  kcg_int /* Internal_Tests::TestTrackTrackAtlasLegacy::_L9 */ _L9;
} outC_TestTrackTrackAtlasLegacy_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TestTrackTrackAtlasLegacy */
extern void TestTrackTrackAtlasLegacy_Internal_Tests(
  /* Internal_Tests::TestTrackTrackAtlasLegacy::Trigger_in */kcg_int Trigger_in,
  outC_TestTrackTrackAtlasLegacy_Internal_Tests *outC);

extern void TestTrackTrackAtlasLegacy_reset_Internal_Tests(
  outC_TestTrackTrackAtlasLegacy_Internal_Tests *outC);

#endif /* _TestTrackTrackAtlasLegacy_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestTrackTrackAtlasLegacy_Internal_Tests.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

