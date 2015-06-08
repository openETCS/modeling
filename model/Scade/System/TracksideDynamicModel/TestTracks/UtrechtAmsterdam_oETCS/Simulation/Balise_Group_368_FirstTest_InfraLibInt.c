/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-08T14:45:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_368_FirstTest_InfraLibInt.h"

void Balise_Group_368_reset_FirstTest_InfraLibInt(
  outC_Balise_Group_368_FirstTest_InfraLibInt *outC)
{
  /* 1 */ Balise_Group_Close_reset_FirstTest_InfraLibInt(&outC->_3_Context_1);
  /* 1 */ Balise_368_1_reset_FirstTest_InfraLibInt(&outC->_2_Context_1);
  /* 1 */ Balise_368_0_reset_FirstTest_InfraLibInt(&outC->_1_Context_1);
  /* 1 */ Balise_Group_Init_reset_FirstTest_InfraLibInt(&outC->Context_1);
}

/* FirstTest::InfraLibInt::Balise_Group_368 */
void Balise_Group_368_FirstTest_InfraLibInt(
  /* FirstTest::InfraLibInt::Balise_Group_368::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* FirstTest::InfraLibInt::Balise_Group_368::TrainPos */kcg_real TrainPos,
  /* FirstTest::InfraLibInt::Balise_Group_368::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_368_FirstTest_InfraLibInt *outC)
{
  kcg_int _6_noname_7;
  BaliseTelegramHeader_int_T_TM noname_7;
  kcg_int _5_noname_6;
  BaliseTelegramHeader_int_T_TM noname_6;
  kcg_int _4_noname_5;
  BaliseTelegramHeader_int_T_TM noname_5;
  kcg_int _3_noname_4;
  BaliseTelegramHeader_int_T_TM noname_4;
  kcg_int _2_noname_3;
  BaliseTelegramHeader_int_T_TM noname_3;
  kcg_int _1_noname_2;
  BaliseTelegramHeader_int_T_TM noname_2;
  kcg_bool noname;
  
  outC->_L27 = 7;
  outC->PIG_nom_7 = outC->_L27;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->Header_7,
    (BaliseTelegramHeader_int_T_TM *)
      &DEFAULT_BaliseTelegramHd_FirstTest_InfraLibInt);
  outC->_L26 = 6;
  outC->PIG_nom_6 = outC->_L26;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->Header_6,
    (BaliseTelegramHeader_int_T_TM *)
      &DEFAULT_BaliseTelegramHd_FirstTest_InfraLibInt);
  outC->_L25 = 5;
  outC->PIG_nom_5 = outC->_L25;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->Header_5,
    (BaliseTelegramHeader_int_T_TM *)
      &DEFAULT_BaliseTelegramHd_FirstTest_InfraLibInt);
  outC->_L24 = 4;
  outC->PIG_nom_4 = outC->_L24;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->Header_4,
    (BaliseTelegramHeader_int_T_TM *)
      &DEFAULT_BaliseTelegramHd_FirstTest_InfraLibInt);
  outC->_L23 = 3;
  outC->PIG_nom_3 = outC->_L23;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->Header_3,
    (BaliseTelegramHeader_int_T_TM *)
      &DEFAULT_BaliseTelegramHd_FirstTest_InfraLibInt);
  outC->_L22 = 2;
  outC->PIG_nom_2 = outC->_L22;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->Header_2,
    (BaliseTelegramHeader_int_T_TM *)
      &DEFAULT_BaliseTelegramHd_FirstTest_InfraLibInt);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L29, BG_message_in);
  outC->_L28 = TrainPos;
  kcg_copy_BaliseGroupData_TM(&outC->_L19, Engineering_Data);
  /* 1 */
  Balise_Group_Init_FirstTest_InfraLibInt(
    outC->_L28,
    &outC->_L19,
    &outC->Context_1);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L11,
    &outC->Context_1.BG_internal_out);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->BaliseDataIn,
    &outC->_L11);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L9,
    &outC->BaliseDataIn);
  outC->_L20 = 0;
  /* 1 */
  Balise_368_0_FirstTest_InfraLibInt(
    &outC->_L9,
    (BaliseTelegramHeader_int_T_TM *) &BG368_header_B0_Balises426,
    outC->_L20,
    &outC->_1_Context_1);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L8,
    &outC->_1_Context_1.B_data_out);
  outC->_L21 = 1;
  /* 1 */
  Balise_368_1_FirstTest_InfraLibInt(
    &outC->_L8,
    (BaliseTelegramHeader_int_T_TM *) &BG368_header_B1_Balises426,
    outC->_L21,
    &outC->_2_Context_1);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L7,
    &outC->_2_Context_1.B_data_out);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_in_2,
    &outC->_L7);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L1_2,
    &outC->B_data_in_2);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_out_2,
    &outC->_L1_2);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L6,
    &outC->B_data_out_2);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_in_3,
    &outC->_L6);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L1_3,
    &outC->B_data_in_3);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_out_3,
    &outC->_L1_3);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L5,
    &outC->B_data_out_3);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_in_4,
    &outC->_L5);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L1_4,
    &outC->B_data_in_4);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_out_4,
    &outC->_L1_4);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L4,
    &outC->B_data_out_4);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_in_5,
    &outC->_L4);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L1_5,
    &outC->B_data_in_5);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_out_5,
    &outC->_L1_5);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L3,
    &outC->B_data_out_5);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_in_6,
    &outC->_L3);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L1_6,
    &outC->B_data_in_6);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_out_6,
    &outC->_L1_6);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L2,
    &outC->B_data_out_6);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_in_7,
    &outC->_L2);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L1_7,
    &outC->B_data_in_7);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->B_data_out_7,
    &outC->_L1_7);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L1,
    &outC->B_data_out_7);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->BaliseDataOut,
    &outC->_L1);
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(
    &outC->_L16,
    &outC->BaliseDataOut);
  /* 1 */
  Balise_Group_Close_FirstTest_InfraLibInt(
    &outC->_L16,
    &outC->_L29,
    &outC->_3_Context_1);
  outC->_L14 = outC->_3_Context_1.Error_out;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_3_Context_1.BG_message_out);
  noname = outC->_L14;
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_message_out, &outC->_L13);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3_2, &outC->Header_2);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&noname_2, &outC->_L3_2);
  outC->_L2_2 = outC->PIG_nom_2;
  _1_noname_2 = outC->_L2_2;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3_3, &outC->Header_3);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&noname_3, &outC->_L3_3);
  outC->_L2_3 = outC->PIG_nom_3;
  _2_noname_3 = outC->_L2_3;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3_4, &outC->Header_4);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&noname_4, &outC->_L3_4);
  outC->_L2_4 = outC->PIG_nom_4;
  _3_noname_4 = outC->_L2_4;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3_5, &outC->Header_5);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&noname_5, &outC->_L3_5);
  outC->_L2_5 = outC->PIG_nom_5;
  _4_noname_5 = outC->_L2_5;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3_6, &outC->Header_6);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&noname_6, &outC->_L3_6);
  outC->_L2_6 = outC->PIG_nom_6;
  _5_noname_6 = outC->_L2_6;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3_7, &outC->Header_7);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&noname_7, &outC->_L3_7);
  outC->_L2_7 = outC->PIG_nom_7;
  _6_noname_7 = outC->_L2_7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_368_FirstTest_InfraLibInt.c
** Generation date: 2015-06-08T14:45:57
*************************************************************$ */

