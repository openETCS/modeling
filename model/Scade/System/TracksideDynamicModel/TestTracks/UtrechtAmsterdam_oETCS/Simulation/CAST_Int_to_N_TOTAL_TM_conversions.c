/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_TOTAL_TM_conversions.h"

void CAST_Int_to_N_TOTAL_reset_TM_conversions(
  outC_CAST_Int_to_N_TOTAL_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_N_TOTAL */
void CAST_Int_to_N_TOTAL_TM_conversions(
  /* TM_conversions::CAST_Int_to_N_TOTAL::int_in */kcg_int int_in,
  outC_CAST_Int_to_N_TOTAL_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig2;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error1;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig9;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig7;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig17;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig15;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error26;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig25;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error24;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig23;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig27;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error28;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig29;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig19;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig21;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig11;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig13;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig3;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_N_TOTAL::n_pig */
  static N_TOTAL n_pig5;
  /* TM_conversions::CAST_Int_to_N_TOTAL::error */
  static kcg_bool error6;
  static kcg_bool noname;
  
  outC->_L3 = int_in;
  outC->n_total_in = outC->_L3;
  outC->IfBlock1_clock = outC->n_total_in == INT_N_TOTAL_1_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_6_else_clock_IfBlock1 = outC->n_total_in ==
      INT_N_TOTAL_2_TM_conversions;
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L37_IfBlock1 = kcg_false;
      error6 = outC->_L37_IfBlock1;
      error = error6;
    }
    else {
      outC->_5_else_clock_IfBlock1 = outC->n_total_in ==
        INT_N_TOTAL_3_TM_conversions;
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L38_IfBlock1 = kcg_false;
        error10 = outC->_L38_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_4_else_clock_IfBlock1 = outC->n_total_in ==
          INT_N_TOTAL_4_TM_conversions;
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L310_IfBlock1 = kcg_false;
          error14 = outC->_L310_IfBlock1;
          error8 = error14;
        }
        else {
          outC->_3_else_clock_IfBlock1 = outC->n_total_in ==
            INT_N_TOTAL_5_TM_conversions;
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L312_IfBlock1 = kcg_false;
            error18 = outC->_L312_IfBlock1;
            error12 = error18;
          }
          else {
            outC->_2_else_clock_IfBlock1 = outC->n_total_in ==
              INT_N_TOTAL_6_TM_conversions;
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L5_IfBlock1 = kcg_false;
              error22 = outC->_L5_IfBlock1;
              error16 = error22;
            }
            else {
              outC->_1_else_clock_IfBlock1 = outC->n_total_in ==
                INT_N_TOTAL_7_TM_conversions;
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L315_IfBlock1 = kcg_false;
                error26 = outC->_L315_IfBlock1;
                error20 = error26;
              }
              else {
                outC->else_clock_IfBlock1 = outC->n_total_in ==
                  INT_N_TOTAL_8_TM_conversions;
                if (outC->else_clock_IfBlock1) {
                  outC->_L317_IfBlock1 = kcg_false;
                  error30 = outC->_L317_IfBlock1;
                  error24 = error30;
                }
                else {
                  outC->_L4_IfBlock1 = kcg_true;
                  error28 = outC->_L4_IfBlock1;
                  error24 = error28;
                }
                error20 = error24;
              }
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = ENUM_N_TOTAL_1_TM_conversions;
    n_pig2 = outC->_L2_IfBlock1;
    outC->n_pig = n_pig2;
  }
  else {
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = ENUM_N_TOTAL_2_TM_conversions;
      n_pig5 = outC->_L1_IfBlock1;
      n_pig = n_pig5;
    }
    else {
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L19_IfBlock1 = ENUM_N_TOTAL_3_TM_conversions;
        n_pig9 = outC->_L19_IfBlock1;
        n_pig3 = n_pig9;
      }
      else {
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L111_IfBlock1 = ENUM_N_TOTAL_4_TM_conversions;
          n_pig13 = outC->_L111_IfBlock1;
          n_pig7 = n_pig13;
        }
        else {
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L113_IfBlock1 = ENUM_N_TOTAL_5_TM_conversions;
            n_pig17 = outC->_L113_IfBlock1;
            n_pig11 = n_pig17;
          }
          else {
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L214_IfBlock1 = ENUM_N_TOTAL_6_TM_conversions;
              n_pig21 = outC->_L214_IfBlock1;
              n_pig15 = n_pig21;
            }
            else {
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L116_IfBlock1 = ENUM_N_TOTAL_7_TM_conversions;
                n_pig25 = outC->_L116_IfBlock1;
                n_pig19 = n_pig25;
              }
              else {
                if (outC->else_clock_IfBlock1) {
                  outC->_L118_IfBlock1 = ENUM_N_TOTAL_8_TM_conversions;
                  n_pig29 = outC->_L118_IfBlock1;
                  n_pig23 = n_pig29;
                }
                else {
                  outC->_L119_IfBlock1 = ENUM_N_TOTAL_8_TM_conversions;
                  n_pig27 = outC->_L119_IfBlock1;
                  n_pig23 = n_pig27;
                }
                n_pig19 = n_pig23;
              }
              n_pig15 = n_pig19;
            }
            n_pig11 = n_pig15;
          }
          n_pig7 = n_pig11;
        }
        n_pig3 = n_pig7;
      }
      n_pig = n_pig3;
    }
    outC->n_pig = n_pig;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_N_TOTAL_TM_conversions.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

