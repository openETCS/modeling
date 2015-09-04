/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestTrackTrackAtlas_Internal_Tests.h"

void TestTrackTrackAtlas_reset_Internal_Tests(
  outC_TestTrackTrackAtlas_Internal_Tests *outC)
{
  /* 1 */ RBC_close_reset_RadioLib(&outC->_3_Context_1);
  /* 1 */
  Send_RBC_LRBG_364_D_00091_1_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_362_D_00238_9_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_1);
  /* 2 */
  Send_RBC_LRBG_351_D_00054_9_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_2);
  /* 3 */
  Send_RBC_LRBG_354_D_00275_3_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_1_Context_3);
  /* 3 */ RBC_init_reset_RadioLib(&outC->Context_3);
}

/* Internal_Tests::TestTrackTrackAtlas */
void TestTrackTrackAtlas_Internal_Tests(
  /* Internal_Tests::TestTrackTrackAtlas::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Internal_Tests::TestTrackTrackAtlas::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Internal_Tests::TestTrackTrackAtlas::Trigger_in */kcg_int Trigger_in,
  /* Internal_Tests::TestTrackTrackAtlas::Message_sent */kcg_bool Message_sent,
  outC_TestTrackTrackAtlas_Internal_Tests *outC)
{
  outC->_L21 = Trigger_in;
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L20, Message_in);
  outC->_L19 = Message_sent;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L17, Packets_in);
  /* 3 */
  RBC_init_RadioLib(
    &outC->_L20,
    &outC->_L17,
    outC->_L21,
    outC->_L19,
    &outC->Context_3);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L18, &outC->Context_3.R_data_out);
  /* 3 */
  Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L18,
    1,
    &outC->_1_Context_3);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->_1_Context_3.R_data_out);
  /* 2 */
  Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L1,
    2,
    &outC->Context_2);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L2, &outC->Context_2.R_data_out);
  /* 1 */
  Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L2,
    3,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L3, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L3,
    4,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->_2_Context_1.R_data_out);
  /* 1 */ RBC_close_RadioLib(&outC->_L4, &outC->_3_Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L5,
    &outC->_3_Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->_3_Context_1.Packets_out);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_out, &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestTrackTrackAtlas_Internal_Tests.c
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

