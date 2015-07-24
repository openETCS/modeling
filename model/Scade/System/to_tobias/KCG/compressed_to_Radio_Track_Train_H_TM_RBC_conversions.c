/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions.h"

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H */
void compressed_to_Radio_Track_Train_H_TM_RBC_conversions(
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_In */M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *Header_Out)
{
  static M_003_T_TM_radio_messages tmp4;
  static M_008_T_TM_radio_messages tmp3;
  static M_015_T_TM_radio_messages tmp2;
  static M_024_T_TM_radio_messages tmp1;
  static M_032_T_TM_radio_messages tmp;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::nid_message */
  static kcg_int nid_message;
  
  nid_message = /* 1 */
    CAST_NID_MESSAGE_to_int_TM_conversions((*Header_In).nid_message);
  IfBlock1_clock = nid_message == 3;
  if (IfBlock1_clock) {
    /* 2 */ C_header_to_M003_TM_radio_messages(Header_In, &tmp4);
    /* 1 */ M003_to_Radio_Track_Train_H_TM_RBC_conversions(&tmp4, Header_Out);
  }
  else {
    _7_else_clock_IfBlock1 = nid_message == 8;
    if (_7_else_clock_IfBlock1) {
      /* 2 */ C_header_to_M008_TM_radio_messages(Header_In, &tmp3);
      /* 1 */ M008_to_Radio_Track_Train_H_TM_RBC_conversions(&tmp3, Header_Out);
    }
    else {
      _6_else_clock_IfBlock1 = nid_message == 15;
      if (_6_else_clock_IfBlock1) {
        /* 1 */ C_header_to_M015_TM_radio_messages(Header_In, &tmp2);
        /* 1 */
        M015_to_Radio_Track_Train_H_TM_RBC_conversions(&tmp2, Header_Out);
      }
      else {
        _5_else_clock_IfBlock1 = nid_message == 24;
        if (_5_else_clock_IfBlock1) {
          /* 1 */ C_header_to_M024_TM_radio_messages(Header_In, &tmp1);
          /* 1 */
          M024_to_Radio_Track_Train_H_TM_RBC_conversions(&tmp1, Header_Out);
        }
        else {
          else_clock_IfBlock1 = nid_message == 32;
          if (else_clock_IfBlock1) {
            /* 1 */ C_header_to_M032_TM_radio_messages(Header_In, &tmp);
            /* 1 */
            M032_to_Radio_Track_Train_H_TM_RBC_conversions(&tmp, Header_Out);
          }
          else {
            kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              Header_Out,
              (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                &default_header_TM_RBC_conversions);
          }
        }
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** compressed_to_Radio_Track_Train_H_TM_RBC_conversions.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

