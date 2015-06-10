/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */
#ifndef _Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer_H_
#define _Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer_H_

#include "kcg_types.h"
#include "Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
#include "Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
#include "Balise_Group_Init_InfraLib.h"
#include "Balise_Group_Close_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_Close_InfraLib /* 1 */ _3_Context_1;
  outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer /* 1 */ _2_Context_1;
  outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer /* 1 */ _1_Context_1;
  outC_Balise_Group_Init_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::_L1 */ _L1_6;
  kcg_int /* InfraLib::No_Balise::_L2 */ _L2_6;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::_L3 */ _L3_6;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_out */ B_data_out_6;
  kcg_int /* InfraLib::No_Balise::PIG_nom */ PIG_nom_6;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::Header */ Header_6;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_in */ B_data_in_6;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::_L1 */ _L1_5;
  kcg_int /* InfraLib::No_Balise::_L2 */ _L2_5;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::_L3 */ _L3_5;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_out */ B_data_out_5;
  kcg_int /* InfraLib::No_Balise::PIG_nom */ PIG_nom_5;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::Header */ Header_5;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_in */ B_data_in_5;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::_L1 */ _L1_4;
  kcg_int /* InfraLib::No_Balise::_L2 */ _L2_4;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::_L3 */ _L3_4;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_out */ B_data_out_4;
  kcg_int /* InfraLib::No_Balise::PIG_nom */ PIG_nom_4;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::Header */ Header_4;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_in */ B_data_in_4;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::_L1 */ _L1_3;
  kcg_int /* InfraLib::No_Balise::_L2 */ _L2_3;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::_L3 */ _L3_3;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_out */ B_data_out_3;
  kcg_int /* InfraLib::No_Balise::PIG_nom */ PIG_nom_3;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::Header */ Header_3;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_in */ B_data_in_3;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::_L1 */ _L1_2;
  kcg_int /* InfraLib::No_Balise::_L2 */ _L2_2;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::_L3 */ _L3_2;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_out */ B_data_out_2;
  kcg_int /* InfraLib::No_Balise::PIG_nom */ PIG_nom_2;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::Header */ Header_2;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_in */ B_data_in_2;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::_L1 */ _L1_1;
  kcg_int /* InfraLib::No_Balise::_L2 */ _L2_1;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::_L3 */ _L3_1;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_out */ B_data_out_1;
  kcg_int /* InfraLib::No_Balise::PIG_nom */ PIG_nom_1;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise::Header */ Header_1;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise::B_data_in */ B_data_in_1;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::BaliseDataIn */ BaliseDataIn;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::BaliseDataOut */ BaliseDataOut;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L1 */ _L1;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L2 */ _L2;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L3 */ _L3;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L4 */ _L4;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L5 */ _L5;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L6 */ _L6;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L7 */ _L7;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L9 */ _L9;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L11 */ _L11;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L13 */ _L13;
  kcg_bool /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L14 */ _L14;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L16 */ _L16;
  BaliseGroupData_TM /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L19 */ _L19;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L20 */ _L20;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L21 */ _L21;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L22 */ _L22;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L23 */ _L23;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L24 */ _L24;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L25 */ _L25;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L26 */ _L26;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L27 */ _L27;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L8 */ _L8;
  kcg_real /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L28 */ _L28;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::_L29 */ _L29;
} outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369 */
extern void Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer(
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::TrainPos */kcg_real TrainPos,
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer *outC);

extern void Balise_Group_369_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
  outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer *outC);

#endif /* _Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer.h
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */

