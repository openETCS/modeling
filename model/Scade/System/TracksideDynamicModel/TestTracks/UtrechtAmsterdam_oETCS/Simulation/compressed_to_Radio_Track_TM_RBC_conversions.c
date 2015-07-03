/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compressed_to_Radio_Track_TM_RBC_conversions.h"

void compressed_to_Radio_Track_reset_TM_RBC_conversions(
  outC_compressed_to_Radio_Track_TM_RBC_conversions *outC)
{
  /* 1 */
  M032_to_Radio_Track_Train_H_reset_TM_RBC_conversions(&outC->_9_Context_1);
  /* 1 */ C_header_to_M032_reset_TM_radio_messages(&outC->_8_Context_1);
  /* 1 */
  M024_to_Radio_Track_Train_H_reset_TM_RBC_conversions(&outC->_7_Context_1);
  /* 1 */ C_header_to_M024_reset_TM_radio_messages(&outC->_6_Context_1);
  /* 1 */
  M015_to_Radio_Track_Train_H_reset_TM_RBC_conversions(&outC->_5_Context_1);
  /* 1 */ C_header_to_M015_reset_TM_radio_messages(&outC->_4_Context_1);
  /* 1 */
  M008_to_Radio_Track_Train_H_reset_TM_RBC_conversions(&outC->_3_Context_1);
  /* 2 */ C_header_to_M008_reset_TM_radio_messages(&outC->_2_Context_2);
  /* 1 */
  M003_to_Radio_Track_Train_H_reset_TM_RBC_conversions(&outC->_1_Context_1);
  /* 2 */ C_header_to_M003_reset_TM_radio_messages(&outC->Context_2);
  /* 1 */ CAST_NID_MESSAGE_to_int_reset_TM_conversions(&outC->Context_1);
}

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H */
void compressed_to_Radio_Track_TM_RBC_conversions(
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_In */M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  outC_compressed_to_Radio_Track_TM_RBC_conversions *outC)
{
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _1_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _5_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _4_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _9_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _8_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _6_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _7_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _2_Header_Out;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _3_Header_Out;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, Header_In);
  outC->_L32 = outC->_L1.nid_message;
  /* 1 */ CAST_NID_MESSAGE_to_int_TM_conversions(outC->_L32, &outC->Context_1);
  outC->_L33 = outC->Context_1.nid_message_int;
  outC->nid_message = outC->_L33;
  outC->IfBlock1_clock = outC->nid_message == 3;
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L1_IfBlock1,
      Header_In);
    /* 2 */
    C_header_to_M003_TM_radio_messages(&outC->_L1_IfBlock1, &outC->Context_2);
    kcg_copy_M_003_T_TM_radio_messages(
      &outC->_L2_IfBlock1,
      &outC->Context_2.message_out);
    /* 1 */
    M003_to_Radio_Track_Train_H_TM_RBC_conversions(
      &outC->_L2_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_1_Context_1.Radio_Track_Train_Hd_out);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_1_Header_Out,
      &outC->_L3_IfBlock1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->Header_Out,
      &_1_Header_Out);
  }
  else {
    outC->_12_else_clock_IfBlock1 = outC->nid_message == 8;
    if (outC->_12_else_clock_IfBlock1) {
      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
        &outC->_L113_IfBlock1,
        Header_In);
      /* 2 */
      C_header_to_M008_TM_radio_messages(
        &outC->_L113_IfBlock1,
        &outC->_2_Context_2);
      kcg_copy_M_008_T_TM_radio_messages(
        &outC->_L315_IfBlock1,
        &outC->_2_Context_2.message_out);
      /* 1 */
      M008_to_Radio_Track_Train_H_TM_RBC_conversions(
        &outC->_L315_IfBlock1,
        &outC->_3_Context_1);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &outC->_L214_IfBlock1,
        &outC->_3_Context_1.Radio_Track_Train_Hd_out);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_3_Header_Out,
        &outC->_L214_IfBlock1);
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &Header_Out,
        &_3_Header_Out);
    }
    else {
      outC->_11_else_clock_IfBlock1 = outC->nid_message == 15;
      if (outC->_11_else_clock_IfBlock1) {
        kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
          &outC->_L116_IfBlock1,
          Header_In);
        /* 1 */
        C_header_to_M015_TM_radio_messages(
          &outC->_L116_IfBlock1,
          &outC->_4_Context_1);
        kcg_copy_M_015_T_TM_radio_messages(
          &outC->_L318_IfBlock1,
          &outC->_4_Context_1.message_out);
        /* 1 */
        M015_to_Radio_Track_Train_H_TM_RBC_conversions(
          &outC->_L318_IfBlock1,
          &outC->_5_Context_1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &outC->_L217_IfBlock1,
          &outC->_5_Context_1.Radio_Track_Train_Hd_out);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_5_Header_Out,
          &outC->_L217_IfBlock1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_2_Header_Out,
          &_5_Header_Out);
      }
      else {
        outC->_10_else_clock_IfBlock1 = outC->nid_message == 24;
        if (outC->_10_else_clock_IfBlock1) {
          kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
            &outC->_L321_IfBlock1,
            Header_In);
          /* 1 */
          C_header_to_M024_TM_radio_messages(
            &outC->_L321_IfBlock1,
            &outC->_6_Context_1);
          kcg_copy_M_024_T_TM_radio_messages(
            &outC->_L119_IfBlock1,
            &outC->_6_Context_1.message_out);
          /* 1 */
          M024_to_Radio_Track_Train_H_TM_RBC_conversions(
            &outC->_L119_IfBlock1,
            &outC->_7_Context_1);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &outC->_L220_IfBlock1,
            &outC->_7_Context_1.Radio_Track_Train_Hd_out);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_7_Header_Out,
            &outC->_L220_IfBlock1);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_4_Header_Out,
            &_7_Header_Out);
        }
        else {
          outC->else_clock_IfBlock1 = outC->nid_message == 32;
          if (outC->else_clock_IfBlock1) {
            kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
              &outC->_L324_IfBlock1,
              Header_In);
            /* 1 */
            C_header_to_M032_TM_radio_messages(
              &outC->_L324_IfBlock1,
              &outC->_8_Context_1);
            kcg_copy_M_032_T_TM_radio_messages(
              &outC->_L223_IfBlock1,
              &outC->_8_Context_1.message_out);
            /* 1 */
            M032_to_Radio_Track_Train_H_TM_RBC_conversions(
              &outC->_L223_IfBlock1,
              &outC->_9_Context_1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &outC->_L122_IfBlock1,
              &outC->_9_Context_1.Radio_Track_Train_Hd_out);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_9_Header_Out,
              &outC->_L122_IfBlock1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_6_Header_Out,
              &_9_Header_Out);
          }
          else {
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &outC->_L125_IfBlock1,
              (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                &default_header_TM_RBC_conversions);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_8_Header_Out,
              &outC->_L125_IfBlock1);
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_6_Header_Out,
              &_8_Header_Out);
          }
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_4_Header_Out,
            &_6_Header_Out);
        }
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_2_Header_Out,
          &_4_Header_Out);
      }
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &Header_Out,
        &_2_Header_Out);
    }
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->Header_Out,
      &Header_Out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** compressed_to_Radio_Track_TM_RBC_conversions.c
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

