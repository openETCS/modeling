/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_N_TOTAL.h"

void TOOLS_Int_to_N_TOTAL_reset(outC_TOOLS_Int_to_N_TOTAL *outC)
{
}

/* TOOLS_Int_to_N_TOTAL */
void TOOLS_Int_to_N_TOTAL(
  /* TOOLS_Int_to_N_TOTAL::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_N_TOTAL *outC)
{
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig1;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig5;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig4;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig9;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig8;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig13;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig12;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig10;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig11;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig6;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig7;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig2;
  /* TOOLS_Int_to_N_TOTAL::n_pig */ N_TOTAL n_pig3;
  
  outC->_L2 = int_in;
  outC->n_total_in = outC->_L2;
  outC->IfBlock1_clock = outC->n_total_in == 0;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = ENUM_N_TOTAL_1_N_TOTAL;
    n_pig1 = outC->_L2_IfBlock1;
    outC->n_pig = n_pig1;
  }
  else {
    outC->_5_else_clock_IfBlock1 = outC->n_total_in == 1;
    if (outC->_5_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = ENUM_N_TOTAL_2_N_TOTAL;
      n_pig3 = outC->_L1_IfBlock1;
      n_pig = n_pig3;
    }
    else {
      outC->_4_else_clock_IfBlock1 = outC->n_total_in == 2;
      if (outC->_4_else_clock_IfBlock1) {
        outC->_L16_IfBlock1 = ENUM_N_TOTAL_3_N_TOTAL;
        n_pig5 = outC->_L16_IfBlock1;
        n_pig2 = n_pig5;
      }
      else {
        outC->_3_else_clock_IfBlock1 = outC->n_total_in == 3;
        if (outC->_3_else_clock_IfBlock1) {
          outC->_L17_IfBlock1 = ENUM_N_TOTAL_4_N_TOTAL;
          n_pig7 = outC->_L17_IfBlock1;
          n_pig4 = n_pig7;
        }
        else {
          outC->_2_else_clock_IfBlock1 = outC->n_total_in == 4;
          if (outC->_2_else_clock_IfBlock1) {
            outC->_L18_IfBlock1 = ENUM_N_TOTAL_5_N_TOTAL;
            n_pig9 = outC->_L18_IfBlock1;
            n_pig6 = n_pig9;
          }
          else {
            outC->_1_else_clock_IfBlock1 = outC->n_total_in == 5;
            if (outC->_1_else_clock_IfBlock1) {
              outC->_L29_IfBlock1 = ENUM_N_TOTAL_6_N_TOTAL;
              n_pig11 = outC->_L29_IfBlock1;
              n_pig8 = n_pig11;
            }
            else {
              outC->else_clock_IfBlock1 = outC->n_total_in == 6;
              if (outC->else_clock_IfBlock1) {
                outC->_L110_IfBlock1 = ENUM_N_TOTAL_7_N_TOTAL;
                n_pig13 = outC->_L110_IfBlock1;
                n_pig10 = n_pig13;
              }
              else {
                outC->_L111_IfBlock1 = ENUM_N_TOTAL_6_N_TOTAL;
                n_pig12 = outC->_L111_IfBlock1;
                n_pig10 = n_pig12;
              }
              n_pig8 = n_pig10;
            }
            n_pig6 = n_pig8;
          }
          n_pig4 = n_pig6;
        }
        n_pig2 = n_pig4;
      }
      n_pig = n_pig2;
    }
    outC->n_pig = n_pig;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_N_TOTAL.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

