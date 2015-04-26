/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */
#ifndef _Balise_Group_364_FirstTest_InfraLib_H_
#define _Balise_Group_364_FirstTest_InfraLib_H_

#include "kcg_types.h"
#include "Balise_364_1_FirstTest_InfraLib.h"
#include "Balise_Group_Init_FirstTest_InfraLib.h"
#include "Balise_Group_Close_FirstTest_InfraLib.h"
#include "Balise_364_0_FirstTest_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TM_CompressedBaliseMessage /* FirstTest::InfraLib::Balise_Group_364::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_Close_FirstTest_InfraLib /* 1 */ _3_Context_1;
  outC_Balise_364_1_FirstTest_InfraLib /* 1 */ _2_Context_1;
  outC_Balise_364_0_FirstTest_InfraLib /* 1 */ _1_Context_1;
  outC_Balise_Group_Init_FirstTest_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::_L1 */ _L1_7;
  kcg_int /* FirstTest::InfraLib::No_Balise::_L2 */ _L2_7;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::_L3 */ _L3_7;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_out */ B_data_out_7;
  kcg_int /* FirstTest::InfraLib::No_Balise::PIG_nom */ PIG_nom_7;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::Header */ Header_7;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_in */ B_data_in_7;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::_L1 */ _L1_6;
  kcg_int /* FirstTest::InfraLib::No_Balise::_L2 */ _L2_6;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::_L3 */ _L3_6;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_out */ B_data_out_6;
  kcg_int /* FirstTest::InfraLib::No_Balise::PIG_nom */ PIG_nom_6;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::Header */ Header_6;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_in */ B_data_in_6;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::_L1 */ _L1_5;
  kcg_int /* FirstTest::InfraLib::No_Balise::_L2 */ _L2_5;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::_L3 */ _L3_5;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_out */ B_data_out_5;
  kcg_int /* FirstTest::InfraLib::No_Balise::PIG_nom */ PIG_nom_5;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::Header */ Header_5;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_in */ B_data_in_5;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::_L1 */ _L1_4;
  kcg_int /* FirstTest::InfraLib::No_Balise::_L2 */ _L2_4;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::_L3 */ _L3_4;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_out */ B_data_out_4;
  kcg_int /* FirstTest::InfraLib::No_Balise::PIG_nom */ PIG_nom_4;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::Header */ Header_4;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_in */ B_data_in_4;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::_L1 */ _L1_3;
  kcg_int /* FirstTest::InfraLib::No_Balise::_L2 */ _L2_3;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::_L3 */ _L3_3;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_out */ B_data_out_3;
  kcg_int /* FirstTest::InfraLib::No_Balise::PIG_nom */ PIG_nom_3;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::Header */ Header_3;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_in */ B_data_in_3;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::_L1 */ _L1_2;
  kcg_int /* FirstTest::InfraLib::No_Balise::_L2 */ _L2_2;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::_L3 */ _L3_2;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_out */ B_data_out_2;
  kcg_int /* FirstTest::InfraLib::No_Balise::PIG_nom */ PIG_nom_2;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::No_Balise::Header */ Header_2;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::No_Balise::B_data_in */ B_data_in_2;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::BaliseDataIn */ BaliseDataIn;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::BaliseDataOut */ BaliseDataOut;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L1 */ _L1;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L2 */ _L2;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L3 */ _L3;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L4 */ _L4;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L5 */ _L5;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L6 */ _L6;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L7 */ _L7;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L9 */ _L9;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L11 */ _L11;
  TM_CompressedBaliseMessage /* FirstTest::InfraLib::Balise_Group_364::_L13 */ _L13;
  kcg_bool /* FirstTest::InfraLib::Balise_Group_364::_L14 */ _L14;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L16 */ _L16;
  TM_BaliseGroupData /* FirstTest::InfraLib::Balise_Group_364::_L19 */ _L19;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L20 */ _L20;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L21 */ _L21;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L22 */ _L22;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L23 */ _L23;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L24 */ _L24;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L25 */ _L25;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L26 */ _L26;
  kcg_int /* FirstTest::InfraLib::Balise_Group_364::_L27 */ _L27;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_364::_L8 */ _L8;
  kcg_real /* FirstTest::InfraLib::Balise_Group_364::_L28 */ _L28;
  TM_CompressedBaliseMessage /* FirstTest::InfraLib::Balise_Group_364::_L29 */ _L29;
} outC_Balise_Group_364_FirstTest_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::InfraLib::Balise_Group_364 */
extern void Balise_Group_364_FirstTest_InfraLib(
  /* FirstTest::InfraLib::Balise_Group_364::BG_message_in */TM_CompressedBaliseMessage *BG_message_in,
  /* FirstTest::InfraLib::Balise_Group_364::TrainPos */kcg_real TrainPos,
  /* FirstTest::InfraLib::Balise_Group_364::Engineering_Data */TM_BaliseGroupData *Engineering_Data,
  outC_Balise_Group_364_FirstTest_InfraLib *outC);

extern void Balise_Group_364_reset_FirstTest_InfraLib(
  outC_Balise_Group_364_FirstTest_InfraLib *outC);

#endif /* _Balise_Group_364_FirstTest_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_364_FirstTest_InfraLib.h
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */

