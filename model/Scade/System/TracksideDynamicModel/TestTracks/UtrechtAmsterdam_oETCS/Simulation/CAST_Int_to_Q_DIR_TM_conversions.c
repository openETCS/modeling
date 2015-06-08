/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DIR_TM_conversions.h"

void CAST_Int_to_Q_DIR_reset_TM_conversions(
  outC_CAST_Int_to_Q_DIR_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_DIR */
void CAST_Int_to_Q_DIR_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */kcg_int q_dir_int,
  outC_CAST_Int_to_Q_DIR_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir9;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir7;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir3;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir5;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_dir_int;
  outC->q_dir_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_dir_in == INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    q_dir2 = outC->_L4_IfBlock1;
    outC->q_dir = q_dir2;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->q_dir_in ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L52_IfBlock1 = kcg_false;
      error6 = outC->_L52_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir5 = outC->_L3_IfBlock1;
      error = error6;
      q_dir = q_dir5;
    }
    else {
      outC->else_clock_IfBlock1 = outC->q_dir_in ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L43_IfBlock1 = kcg_false;
        error10 = outC->_L43_IfBlock1;
        outC->_L2_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        q_dir9 = outC->_L2_IfBlock1;
        error4 = error10;
        q_dir3 = q_dir9;
      }
      else {
        outC->_L24_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_IfBlock1 = kcg_true;
        error8 = outC->_L1_IfBlock1;
        q_dir7 = outC->_L24_IfBlock1;
        error4 = error8;
        q_dir3 = q_dir7;
      }
      error = error4;
      q_dir = q_dir3;
    }
    outC->q_dir = q_dir;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_DIR_TM_conversions.c
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

