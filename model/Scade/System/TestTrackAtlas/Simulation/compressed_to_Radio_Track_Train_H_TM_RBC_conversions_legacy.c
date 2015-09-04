/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

void compressed_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
  outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
  /* 1 */
  M028_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_37_Context_1);
  /* 1 */ C_header_to_M028_reset_TM_RBC_conversions(&outC->_36_Context_1);
  /* 2 */
  M032_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_35_Context_2);
  /* 1 */ C_header_to_M032_reset_TM_RBC_conversions(&outC->_34_Context_1);
  /* 1 */
  M033_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_33_Context_1);
  /* 1 */ C_header_to_M033_reset_TM_RBC_conversions(&outC->_32_Context_1);
  /* 1 */
  M034_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_31_Context_1);
  /* 1 */ C_header_to_M034_reset_TM_RBC_conversions(&outC->_30_Context_1);
  /* 1 */
  M038_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_29_Context_1);
  /* 1 */ C_header_to_M038_reset_TM_RBC_conversions(&outC->_28_Context_1);
  /* 1 */
  M039_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_27_Context_1);
  /* 1 */ C_header_to_M039_reset_TM_RBC_conversions(&outC->_26_Context_1);
  /* 1 */
  M040_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_25_Context_1);
  /* 1 */ C_header_to_M040_reset_TM_RBC_conversions(&outC->_24_Context_1);
  /* 1 */
  M041_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_23_Context_1);
  /* 1 */ C_header_to_M041_reset_TM_RBC_conversions(&outC->_22_Context_1);
  /* 1 */
  M043_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_21_Context_1);
  /* 1 */ C_header_to_M043_reset_TM_RBC_conversions(&outC->_20_Context_1);
  /* 1 */
  M045_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_19_Context_1);
  /* 1 */ C_header_to_M045_reset_TM_RBC_conversions(&outC->_18_Context_1);
  /* 1 */
  M002_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_17_Context_1);
  /* 1 */ C_header_to_M002_reset_TM_RBC_conversions(&outC->_16_Context_1);
  /* 4 */
  M003_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(&outC->Context_4);
  /* 1 */ C_header_to_M003_reset_TM_RBC_conversions(&outC->_15_Context_1);
  /* 1 */
  M006_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_14_Context_1);
  /* 1 */ C_header_to_M006_reset_TM_RBC_conversions(&outC->_13_Context_1);
  /* 2 */
  M008_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_12_Context_2);
  /* 1 */ C_header_to_M008_reset_TM_RBC_conversions(&outC->_11_Context_1);
  /* 1 */
  M009_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_10_Context_1);
  /* 1 */ C_header_to_M009_reset_TM_RBC_conversions(&outC->_9_Context_1);
  /* 2 */
  M015_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_8_Context_2);
  /* 1 */ C_header_to_M015_reset_TM_RBC_conversions(&outC->_7_Context_1);
  /* 2 */
  M016_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_6_Context_2);
  /* 1 */ C_header_to_M016_reset_TM_RBC_conversions(&outC->_5_Context_1);
  /* 2 */
  M018_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(&outC->Context_2);
  /* 1 */ C_header_to_M018_reset_TM_RBC_conversions(&outC->_4_Context_1);
  /* 9 */
  M024_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(&outC->Context_9);
  /* 1 */ C_header_to_M024_reset_TM_RBC_conversions(&outC->_3_Context_1);
  /* 1 */
  M027_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->_2_Context_1);
  /* 1 */ C_header_to_M027_reset_TM_RBC_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_NID_MESSAGE_to_int_reset_TM_conversions(&outC->Context_1);
}

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H */
void compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::Header_In */M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _1_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _5_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _4_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _9_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _8_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _13_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _12_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _17_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _16_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _18_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _19_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _14_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _15_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _10_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _11_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _6_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _7_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _2_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet2 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _3_header_sheet2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _20_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _24_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _23_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _28_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _27_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _32_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _31_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _36_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _35_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _37_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _38_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _33_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _34_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _29_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _30_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _25_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _26_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _21_header_sheet1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::header_sheet1 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _22_header_sheet1;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, Header_In);
  outC->_L32 = outC->_L1.nid_message;
  /* 1 */ CAST_NID_MESSAGE_to_int_TM_conversions(outC->_L32, &outC->Context_1);
  outC->_L33 = outC->Context_1.nid_message_int;
  outC->nid_message = outC->_L33;
  outC->_L36 = outC->nid_message;
  outC->_L38 = 27;
  outC->_L37 = outC->_L36 <= outC->_L38;
  outC->IfBlock1_clock = outC->nid_message == 2;
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L1_IfBlock1,
      Header_In);
    /* 1 */
    C_header_to_M002_TM_RBC_conversions(
      &outC->_L1_IfBlock1,
      &outC->_16_Context_1);
    kcg_copy_M_002_T_TM_radio_messages(
      &outC->_L2_IfBlock1,
      &outC->_16_Context_1.message_out);
    /* 1 */
    M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
      &outC->_L2_IfBlock1,
      &outC->_17_Context_1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_17_Context_1.Radio_Track_Train_Hd_out);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_20_header_sheet1,
      &outC->_L3_IfBlock1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet1,
      &_20_header_sheet1);
  }
  else {
    outC->_53_else_clock_IfBlock1 = outC->nid_message == 3;
    if (outC->_53_else_clock_IfBlock1) {
      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
        &outC->_L181_IfBlock1,
        Header_In);
      /* 1 */
      C_header_to_M003_TM_RBC_conversions(
        &outC->_L181_IfBlock1,
        &outC->_15_Context_1);
      kcg_copy_M_003_T_TM_radio_messages(
        &outC->_L383_IfBlock1,
        &outC->_15_Context_1.message_out);
      /* 4 */
      M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
        &outC->_L383_IfBlock1,
        &outC->Context_4);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &outC->_L282_IfBlock1,
        &outC->Context_4.Radio_Track_Train_Hd_out);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_22_header_sheet1,
        &outC->_L282_IfBlock1);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet1,
        &_22_header_sheet1);
    }
    else {
      outC->_52_else_clock_IfBlock1 = outC->nid_message == 6;
      if (outC->_52_else_clock_IfBlock1) {
        kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
          &outC->_L184_IfBlock1,
          Header_In);
        /* 1 */
        C_header_to_M006_TM_RBC_conversions(
          &outC->_L184_IfBlock1,
          &outC->_13_Context_1);
        kcg_copy_M_006_T_TM_radio_messages(
          &outC->_L386_IfBlock1,
          &outC->_13_Context_1.message_out);
        /* 1 */
        M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
          &outC->_L386_IfBlock1,
          &outC->_14_Context_1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &outC->_L285_IfBlock1,
          &outC->_14_Context_1.Radio_Track_Train_Hd_out);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_24_header_sheet1,
          &outC->_L285_IfBlock1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_21_header_sheet1,
          &_24_header_sheet1);
      }
      else {
        outC->_51_else_clock_IfBlock1 = outC->nid_message == 8;
        if (outC->_51_else_clock_IfBlock1) {
          kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
            &outC->_L187_IfBlock1,
            Header_In);
          /* 1 */
          C_header_to_M008_TM_RBC_conversions(
            &outC->_L187_IfBlock1,
            &outC->_11_Context_1);
          kcg_copy_M_008_T_TM_radio_messages(
            &outC->_L389_IfBlock1,
            &outC->_11_Context_1.message_out);
          /* 2 */
          M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
            &outC->_L389_IfBlock1,
            &outC->_12_Context_2);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &outC->_L288_IfBlock1,
            &outC->_12_Context_2.Radio_Track_Train_Hd_out);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_26_header_sheet1,
            &outC->_L288_IfBlock1);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_23_header_sheet1,
            &_26_header_sheet1);
        }
        else {
          outC->_50_else_clock_IfBlock1 = outC->nid_message == 9;
          if (outC->_50_else_clock_IfBlock1) {
            kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
              &outC->_L190_IfBlock1,
              Header_In);
            /* 1 */
            C_header_to_M009_TM_RBC_conversions(
              &outC->_L190_IfBlock1,
              &outC->_9_Context_1);
            kcg_copy_M_009_T_TM_radio_messages(
              &outC->_L392_IfBlock1,
              &outC->_9_Context_1.message_out);
            /* 1 */
            M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
              &outC->_L392_IfBlock1,
              &outC->_10_Context_1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &outC->_L291_IfBlock1,
              &outC->_10_Context_1.Radio_Track_Train_Hd_out);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_28_header_sheet1,
              &outC->_L291_IfBlock1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_25_header_sheet1,
              &_28_header_sheet1);
          }
          else {
            outC->_49_else_clock_IfBlock1 = outC->nid_message == 15;
            if (outC->_49_else_clock_IfBlock1) {
              kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                &outC->_L395_IfBlock1,
                Header_In);
              /* 1 */
              C_header_to_M015_TM_RBC_conversions(
                &outC->_L395_IfBlock1,
                &outC->_7_Context_1);
              kcg_copy_M_015_T_TM_radio_messages(
                &outC->_L193_IfBlock1,
                &outC->_7_Context_1.message_out);
              /* 2 */
              M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                &outC->_L193_IfBlock1,
                &outC->_8_Context_2);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &outC->_L294_IfBlock1,
                &outC->_8_Context_2.Radio_Track_Train_Hd_out);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_30_header_sheet1,
                &outC->_L294_IfBlock1);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_27_header_sheet1,
                &_30_header_sheet1);
            }
            else {
              outC->_48_else_clock_IfBlock1 = outC->nid_message == 16;
              if (outC->_48_else_clock_IfBlock1) {
                kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                  &outC->_L398_IfBlock1,
                  Header_In);
                /* 1 */
                C_header_to_M016_TM_RBC_conversions(
                  &outC->_L398_IfBlock1,
                  &outC->_5_Context_1);
                kcg_copy_M_016_T_TM_radio_messages(
                  &outC->_L196_IfBlock1,
                  &outC->_5_Context_1.message_out);
                /* 2 */
                M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                  &outC->_L196_IfBlock1,
                  &outC->_6_Context_2);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &outC->_L297_IfBlock1,
                  &outC->_6_Context_2.Radio_Track_Train_Hd_out);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_32_header_sheet1,
                  &outC->_L297_IfBlock1);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_29_header_sheet1,
                  &_32_header_sheet1);
              }
              else {
                outC->_47_else_clock_IfBlock1 = outC->nid_message == 18;
                if (outC->_47_else_clock_IfBlock1) {
                  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                    &outC->_L4_IfBlock1,
                    Header_In);
                  /* 1 */
                  C_header_to_M018_TM_RBC_conversions(
                    &outC->_L4_IfBlock1,
                    &outC->_4_Context_1);
                  kcg_copy_M_018_T_TM_radio_messages(
                    &outC->_L3100_IfBlock1,
                    &outC->_4_Context_1.message_out);
                  /* 2 */
                  M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                    &outC->_L3100_IfBlock1,
                    &outC->Context_2);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &outC->_L299_IfBlock1,
                    &outC->Context_2.Radio_Track_Train_Hd_out);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_34_header_sheet1,
                    &outC->_L299_IfBlock1);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_31_header_sheet1,
                    &_34_header_sheet1);
                }
                else {
                  outC->_46_else_clock_IfBlock1 = outC->nid_message == 24;
                  if (outC->_46_else_clock_IfBlock1) {
                    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                      &outC->_L3103_IfBlock1,
                      Header_In);
                    /* 1 */
                    C_header_to_M024_TM_RBC_conversions(
                      &outC->_L3103_IfBlock1,
                      &outC->_3_Context_1);
                    kcg_copy_M_024_T_TM_radio_messages(
                      &outC->_L2102_IfBlock1,
                      &outC->_3_Context_1.message_out);
                    /* 9 */
                    M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                      &outC->_L2102_IfBlock1,
                      &outC->Context_9);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &outC->_L1101_IfBlock1,
                      &outC->Context_9.Radio_Track_Train_Hd_out);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_36_header_sheet1,
                      &outC->_L1101_IfBlock1);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_33_header_sheet1,
                      &_36_header_sheet1);
                  }
                  else {
                    outC->else_clock_IfBlock1 = outC->nid_message == 27;
                    if (outC->else_clock_IfBlock1) {
                      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                        &outC->_L1104_IfBlock1,
                        Header_In);
                      /* 1 */
                      C_header_to_M027_TM_RBC_conversions(
                        &outC->_L1104_IfBlock1,
                        &outC->_1_Context_1);
                      kcg_copy_M_027_T_TM_radio_messages(
                        &outC->_L3106_IfBlock1,
                        &outC->_1_Context_1.message_out);
                      /* 1 */
                      M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                        &outC->_L3106_IfBlock1,
                        &outC->_2_Context_1);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L2105_IfBlock1,
                        &outC->_2_Context_1.Radio_Track_Train_Hd_out);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_38_header_sheet1,
                        &outC->_L2105_IfBlock1);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_35_header_sheet1,
                        &_38_header_sheet1);
                    }
                    else {
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L1107_IfBlock1,
                        (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                          &default_header_TM_RBC_conversions_legacy);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_37_header_sheet1,
                        &outC->_L1107_IfBlock1);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_35_header_sheet1,
                        &_37_header_sheet1);
                    }
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_33_header_sheet1,
                      &_35_header_sheet1);
                  }
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_31_header_sheet1,
                    &_33_header_sheet1);
                }
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_29_header_sheet1,
                  &_31_header_sheet1);
              }
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_27_header_sheet1,
                &_29_header_sheet1);
            }
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_25_header_sheet1,
              &_27_header_sheet1);
          }
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_23_header_sheet1,
            &_25_header_sheet1);
        }
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_21_header_sheet1,
          &_23_header_sheet1);
      }
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet1,
        &_21_header_sheet1);
    }
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet1,
      &header_sheet1);
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L34,
    &outC->header_sheet1);
  outC->IfBlock2_clock = outC->nid_message == 28;
  if (outC->IfBlock2_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L1_IfBlock2,
      Header_In);
    /* 1 */
    C_header_to_M028_TM_RBC_conversions(
      &outC->_L1_IfBlock2,
      &outC->_36_Context_1);
    kcg_copy_M_028_T_TM_radio_messages(
      &outC->_L2_IfBlock2,
      &outC->_36_Context_1.message_out);
    /* 1 */
    M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
      &outC->_L2_IfBlock2,
      &outC->_37_Context_1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L3_IfBlock2,
      &outC->_37_Context_1.Radio_Track_Train_Hd_out);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_1_header_sheet2,
      &outC->_L3_IfBlock2);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet2,
      &_1_header_sheet2);
  }
  else {
    outC->_45_else_clock_IfBlock2 = outC->nid_message == 32;
    if (outC->_45_else_clock_IfBlock2) {
      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
        &outC->_L4_IfBlock2,
        Header_In);
      /* 1 */
      C_header_to_M032_TM_RBC_conversions(
        &outC->_L4_IfBlock2,
        &outC->_34_Context_1);
      kcg_copy_M_032_T_TM_radio_messages(
        &outC->_L254_IfBlock2,
        &outC->_34_Context_1.message_out);
      /* 2 */
      M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
        &outC->_L254_IfBlock2,
        &outC->_35_Context_2);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &outC->_L355_IfBlock2,
        &outC->_35_Context_2.Radio_Track_Train_Hd_out);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_3_header_sheet2,
        &outC->_L355_IfBlock2);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet2,
        &_3_header_sheet2);
    }
    else {
      outC->_44_else_clock_IfBlock2 = outC->nid_message == 33;
      if (outC->_44_else_clock_IfBlock2) {
        kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
          &outC->_L156_IfBlock2,
          Header_In);
        /* 1 */
        C_header_to_M033_TM_RBC_conversions(
          &outC->_L156_IfBlock2,
          &outC->_32_Context_1);
        kcg_copy_M_033_T_TM_radio_messages(
          &outC->_L358_IfBlock2,
          &outC->_32_Context_1.message_out);
        /* 1 */
        M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
          &outC->_L358_IfBlock2,
          &outC->_33_Context_1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &outC->_L257_IfBlock2,
          &outC->_33_Context_1.Radio_Track_Train_Hd_out);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_5_header_sheet2,
          &outC->_L257_IfBlock2);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_2_header_sheet2,
          &_5_header_sheet2);
      }
      else {
        outC->_43_else_clock_IfBlock2 = outC->nid_message == 34;
        if (outC->_43_else_clock_IfBlock2) {
          kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
            &outC->_L159_IfBlock2,
            Header_In);
          /* 1 */
          C_header_to_M034_TM_RBC_conversions(
            &outC->_L159_IfBlock2,
            &outC->_30_Context_1);
          kcg_copy_M_034_T_TM_radio_messages(
            &outC->_L361_IfBlock2,
            &outC->_30_Context_1.message_out);
          /* 1 */
          M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
            &outC->_L361_IfBlock2,
            &outC->_31_Context_1);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &outC->_L260_IfBlock2,
            &outC->_31_Context_1.Radio_Track_Train_Hd_out);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_7_header_sheet2,
            &outC->_L260_IfBlock2);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_4_header_sheet2,
            &_7_header_sheet2);
        }
        else {
          outC->_42_else_clock_IfBlock2 = outC->nid_message == 38;
          if (outC->_42_else_clock_IfBlock2) {
            kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
              &outC->_L162_IfBlock2,
              Header_In);
            /* 1 */
            C_header_to_M038_TM_RBC_conversions(
              &outC->_L162_IfBlock2,
              &outC->_28_Context_1);
            kcg_copy_M_038_T_TM_radio_messages(
              &outC->_L364_IfBlock2,
              &outC->_28_Context_1.message_out);
            /* 1 */
            M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
              &outC->_L364_IfBlock2,
              &outC->_29_Context_1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &outC->_L263_IfBlock2,
              &outC->_29_Context_1.Radio_Track_Train_Hd_out);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_9_header_sheet2,
              &outC->_L263_IfBlock2);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_6_header_sheet2,
              &_9_header_sheet2);
          }
          else {
            outC->_41_else_clock_IfBlock2 = outC->nid_message == 39;
            if (outC->_41_else_clock_IfBlock2) {
              kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                &outC->_L165_IfBlock2,
                Header_In);
              /* 1 */
              C_header_to_M039_TM_RBC_conversions(
                &outC->_L165_IfBlock2,
                &outC->_26_Context_1);
              kcg_copy_M_039_T_TM_radio_messages(
                &outC->_L367_IfBlock2,
                &outC->_26_Context_1.message_out);
              /* 1 */
              M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                &outC->_L367_IfBlock2,
                &outC->_27_Context_1);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &outC->_L266_IfBlock2,
                &outC->_27_Context_1.Radio_Track_Train_Hd_out);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_11_header_sheet2,
                &outC->_L266_IfBlock2);
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_8_header_sheet2,
                &_11_header_sheet2);
            }
            else {
              outC->_40_else_clock_IfBlock2 = outC->nid_message == 40;
              if (outC->_40_else_clock_IfBlock2) {
                kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                  &outC->_L370_IfBlock2,
                  Header_In);
                /* 1 */
                C_header_to_M040_TM_RBC_conversions(
                  &outC->_L370_IfBlock2,
                  &outC->_24_Context_1);
                kcg_copy_M_040_T_TM_radio_messages(
                  &outC->_L168_IfBlock2,
                  &outC->_24_Context_1.message_out);
                /* 1 */
                M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                  &outC->_L168_IfBlock2,
                  &outC->_25_Context_1);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &outC->_L269_IfBlock2,
                  &outC->_25_Context_1.Radio_Track_Train_Hd_out);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_13_header_sheet2,
                  &outC->_L269_IfBlock2);
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_10_header_sheet2,
                  &_13_header_sheet2);
              }
              else {
                outC->_39_else_clock_IfBlock2 = outC->nid_message == 41;
                if (outC->_39_else_clock_IfBlock2) {
                  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                    &outC->_L373_IfBlock2,
                    Header_In);
                  /* 1 */
                  C_header_to_M041_TM_RBC_conversions(
                    &outC->_L373_IfBlock2,
                    &outC->_22_Context_1);
                  kcg_copy_M_041_T_TM_radio_messages(
                    &outC->_L171_IfBlock2,
                    &outC->_22_Context_1.message_out);
                  /* 1 */
                  M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                    &outC->_L171_IfBlock2,
                    &outC->_23_Context_1);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &outC->_L272_IfBlock2,
                    &outC->_23_Context_1.Radio_Track_Train_Hd_out);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_15_header_sheet2,
                    &outC->_L272_IfBlock2);
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_12_header_sheet2,
                    &_15_header_sheet2);
                }
                else {
                  outC->_38_else_clock_IfBlock2 = outC->nid_message == 43;
                  if (outC->_38_else_clock_IfBlock2) {
                    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                      &outC->_L476_IfBlock2,
                      Header_In);
                    /* 1 */
                    C_header_to_M043_TM_RBC_conversions(
                      &outC->_L476_IfBlock2,
                      &outC->_20_Context_1);
                    kcg_copy_M_043_T_TM_radio_messages(
                      &outC->_L375_IfBlock2,
                      &outC->_20_Context_1.message_out);
                    /* 1 */
                    M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                      &outC->_L375_IfBlock2,
                      &outC->_21_Context_1);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &outC->_L274_IfBlock2,
                      &outC->_21_Context_1.Radio_Track_Train_Hd_out);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_17_header_sheet2,
                      &outC->_L274_IfBlock2);
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_14_header_sheet2,
                      &_17_header_sheet2);
                  }
                  else {
                    outC->else_clock_IfBlock2 = outC->nid_message == 45;
                    if (outC->else_clock_IfBlock2) {
                      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                        &outC->_L379_IfBlock2,
                        Header_In);
                      /* 1 */
                      C_header_to_M045_TM_RBC_conversions(
                        &outC->_L379_IfBlock2,
                        &outC->_18_Context_1);
                      kcg_copy_M_045_T_TM_radio_messages(
                        &outC->_L278_IfBlock2,
                        &outC->_18_Context_1.message_out);
                      /* 1 */
                      M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                        &outC->_L278_IfBlock2,
                        &outC->_19_Context_1);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L177_IfBlock2,
                        &outC->_19_Context_1.Radio_Track_Train_Hd_out);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_19_header_sheet2,
                        &outC->_L177_IfBlock2);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_16_header_sheet2,
                        &_19_header_sheet2);
                    }
                    else {
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L180_IfBlock2,
                        (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                          &default_header_TM_RBC_conversions_legacy);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_18_header_sheet2,
                        &outC->_L180_IfBlock2);
                      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_16_header_sheet2,
                        &_18_header_sheet2);
                    }
                    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_14_header_sheet2,
                      &_16_header_sheet2);
                  }
                  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_12_header_sheet2,
                    &_14_header_sheet2);
                }
                kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_10_header_sheet2,
                  &_12_header_sheet2);
              }
              kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_8_header_sheet2,
                &_10_header_sheet2);
            }
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_6_header_sheet2,
              &_8_header_sheet2);
          }
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_4_header_sheet2,
            &_6_header_sheet2);
        }
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_2_header_sheet2,
          &_4_header_sheet2);
      }
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &header_sheet2,
        &_2_header_sheet2);
    }
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet2,
      &header_sheet2);
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L35,
    &outC->header_sheet2);
  if (outC->_L37) {
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L39,
      &outC->_L34);
  }
  else {
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L39,
      &outC->_L35);
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->Header_Out,
    &outC->_L39);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

