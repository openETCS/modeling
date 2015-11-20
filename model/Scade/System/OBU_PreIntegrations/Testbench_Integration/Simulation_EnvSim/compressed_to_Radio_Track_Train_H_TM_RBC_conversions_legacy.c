/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H */
void compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::Header_In */M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::Header_Out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *Header_Out)
{
  static M_002_T_TM_radio_messages tmp19;
  static M_003_T_TM_radio_messages tmp18;
  static M_006_T_TM_radio_messages tmp17;
  static M_008_T_TM_radio_messages tmp16;
  static M_009_T_TM_radio_messages tmp15;
  static M_015_T_TM_radio_messages tmp14;
  static M_016_T_TM_radio_messages tmp13;
  static M_018_T_TM_radio_messages tmp12;
  static M_024_T_TM_radio_messages tmp11;
  static M_027_T_TM_radio_messages tmp10;
  static M_028_T_TM_radio_messages tmp9;
  static M_032_T_TM_radio_messages tmp8;
  static M_033_T_TM_radio_messages tmp7;
  static M_034_T_TM_radio_messages tmp6;
  static M_038_T_TM_radio_messages tmp5;
  static M_039_T_TM_radio_messages tmp4;
  static M_040_T_TM_radio_messages tmp3;
  static M_041_T_TM_radio_messages tmp2;
  static M_043_T_TM_radio_messages tmp1;
  static M_045_T_TM_radio_messages tmp;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else */
  static kcg_bool _27_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else */
  static kcg_bool _25_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else */
  static kcg_bool _23_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else */
  static kcg_bool _21_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else */
  static kcg_bool _20_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else */
  static kcg_bool _22_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else */
  static kcg_bool _24_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else */
  static kcg_bool _26_else_clock_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else */
  static kcg_bool _35_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else */
  static kcg_bool _33_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else */
  static kcg_bool _31_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _29_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _30_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else */
  static kcg_bool _32_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else */
  static kcg_bool _34_else_clock_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::nid_message */
  static kcg_int nid_message;
  
  nid_message = /* 1 */
    CAST_NID_MESSAGE_to_int_TM_conversions((*Header_In).nid_message);
  IfBlock1_clock = nid_message == 2;
  if (IfBlock1_clock) {
  }
  else {
    _35_else_clock_IfBlock1 = nid_message == 3;
    if (_35_else_clock_IfBlock1) {
    }
    else {
      _34_else_clock_IfBlock1 = nid_message == 6;
      if (_34_else_clock_IfBlock1) {
      }
      else {
        _33_else_clock_IfBlock1 = nid_message == 8;
        if (_33_else_clock_IfBlock1) {
        }
        else {
          _32_else_clock_IfBlock1 = nid_message == 9;
          if (_32_else_clock_IfBlock1) {
          }
          else {
            _31_else_clock_IfBlock1 = nid_message == 15;
            if (_31_else_clock_IfBlock1) {
            }
            else {
              _30_else_clock_IfBlock1 = nid_message == 16;
              if (_30_else_clock_IfBlock1) {
              }
              else {
                _29_else_clock_IfBlock1 = nid_message == 18;
                if (_29_else_clock_IfBlock1) {
                }
                else {
                  _28_else_clock_IfBlock1 = nid_message == 24;
                  if (_28_else_clock_IfBlock1) {
                  }
                  else {
                    else_clock_IfBlock1 = nid_message == 27;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  IfBlock2_clock = nid_message == 28;
  if (IfBlock2_clock) {
  }
  else {
    _27_else_clock_IfBlock2 = nid_message == 32;
    if (_27_else_clock_IfBlock2) {
    }
    else {
      _26_else_clock_IfBlock2 = nid_message == 33;
      if (_26_else_clock_IfBlock2) {
      }
      else {
        _25_else_clock_IfBlock2 = nid_message == 34;
        if (_25_else_clock_IfBlock2) {
        }
        else {
          _24_else_clock_IfBlock2 = nid_message == 38;
          if (_24_else_clock_IfBlock2) {
          }
          else {
            _23_else_clock_IfBlock2 = nid_message == 39;
            if (_23_else_clock_IfBlock2) {
            }
            else {
              _22_else_clock_IfBlock2 = nid_message == 40;
              if (_22_else_clock_IfBlock2) {
              }
              else {
                _21_else_clock_IfBlock2 = nid_message == 41;
                if (_21_else_clock_IfBlock2) {
                }
                else {
                  _20_else_clock_IfBlock2 = nid_message == 43;
                  if (_20_else_clock_IfBlock2) {
                  }
                  else {
                    else_clock_IfBlock2 = nid_message == 45;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (nid_message <= 27) {
    if (IfBlock1_clock) {
      /* 1 */ C_header_to_M002_TM_RBC_conversions(Header_In, &tmp19);
      /* 1 */
      M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp19, Header_Out);
    }
    else if (_35_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M003_TM_RBC_conversions(Header_In, &tmp18);
      /* 4 */
      M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp18, Header_Out);
    }
    else if (_34_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M006_TM_RBC_conversions(Header_In, &tmp17);
      /* 1 */
      M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp17, Header_Out);
    }
    else if (_33_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M008_TM_RBC_conversions(Header_In, &tmp16);
      /* 2 */
      M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp16, Header_Out);
    }
    else if (_32_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M009_TM_RBC_conversions(Header_In, &tmp15);
      /* 1 */
      M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp15, Header_Out);
    }
    else if (_31_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M015_TM_RBC_conversions(Header_In, &tmp14);
      /* 2 */
      M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp14, Header_Out);
    }
    else if (_30_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M016_TM_RBC_conversions(Header_In, &tmp13);
      /* 2 */
      M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp13, Header_Out);
    }
    else if (_29_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M018_TM_RBC_conversions(Header_In, &tmp12);
      /* 2 */
      M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp12, Header_Out);
    }
    else if (_28_else_clock_IfBlock1) {
      /* 1 */ C_header_to_M024_TM_RBC_conversions(Header_In, &tmp11);
      /* 9 */
      M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp11, Header_Out);
    }
    else if (else_clock_IfBlock1) {
      /* 1 */ C_header_to_M027_TM_RBC_conversions(Header_In, &tmp10);
      /* 1 */
      M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp10, Header_Out);
    }
    else {
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        Header_Out,
        (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
          &default_header_TM_RBC_conversions_legacy);
    }
  }
  else if (IfBlock2_clock) {
    /* 1 */ C_header_to_M028_TM_RBC_conversions(Header_In, &tmp9);
    /* 1 */
    M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp9, Header_Out);
  }
  else if (_27_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M032_TM_RBC_conversions(Header_In, &tmp8);
    /* 2 */
    M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp8, Header_Out);
  }
  else if (_26_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M033_TM_RBC_conversions(Header_In, &tmp7);
    /* 1 */
    M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp7, Header_Out);
  }
  else if (_25_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M034_TM_RBC_conversions(Header_In, &tmp6);
    /* 1 */
    M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp6, Header_Out);
  }
  else if (_24_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M038_TM_RBC_conversions(Header_In, &tmp5);
    /* 1 */
    M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp5, Header_Out);
  }
  else if (_23_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M039_TM_RBC_conversions(Header_In, &tmp4);
    /* 1 */
    M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp4, Header_Out);
  }
  else if (_22_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M040_TM_RBC_conversions(Header_In, &tmp3);
    /* 1 */
    M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp3, Header_Out);
  }
  else if (_21_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M041_TM_RBC_conversions(Header_In, &tmp2);
    /* 1 */
    M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp2, Header_Out);
  }
  else if (_20_else_clock_IfBlock2) {
    /* 1 */ C_header_to_M043_TM_RBC_conversions(Header_In, &tmp1);
    /* 1 */
    M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp1, Header_Out);
  }
  else if (else_clock_IfBlock2) {
    /* 1 */ C_header_to_M045_TM_RBC_conversions(Header_In, &tmp);
    /* 1 */
    M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&tmp, Header_Out);
  }
  else {
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      Header_Out,
      (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
        &default_header_TM_RBC_conversions_legacy);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

