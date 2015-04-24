/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_N_PIG.h"

void TOOLS_Int_to_N_PIG_reset(outC_TOOLS_Int_to_N_PIG *outC)
{
}

/* TOOLS_Int_to_N_PIG */
void TOOLS_Int_to_N_PIG(
  /* TOOLS_Int_to_N_PIG::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_N_PIG *outC)
{
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig1;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig5;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig4;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig9;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig8;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig13;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig12;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig10;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig11;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig6;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig7;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig2;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig3;
  
  outC->_L2 = int_in;
  outC->n_pig_in = outC->_L2;
  outC->IfBlock1_clock = outC->n_pig_in == 0;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = ENUM_N_PIG_1st_N_PIG;
    n_pig1 = outC->_L2_IfBlock1;
    outC->n_pig = n_pig1;
  }
  else {
    outC->_5_else_clock_IfBlock1 = outC->n_pig_in == 1;
    if (outC->_5_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = ENUM_N_PIG_2nd_N_PIG;
      n_pig3 = outC->_L1_IfBlock1;
      n_pig = n_pig3;
    }
    else {
      outC->_4_else_clock_IfBlock1 = outC->n_pig_in == 2;
      if (outC->_4_else_clock_IfBlock1) {
        outC->_L16_IfBlock1 = ENUM_N_PIG_3rd_N_PIG;
        n_pig5 = outC->_L16_IfBlock1;
        n_pig2 = n_pig5;
      }
      else {
        outC->_3_else_clock_IfBlock1 = outC->n_pig_in == 3;
        if (outC->_3_else_clock_IfBlock1) {
          outC->_L17_IfBlock1 = ENUM_N_PIG_4th_N_PIG;
          n_pig7 = outC->_L17_IfBlock1;
          n_pig4 = n_pig7;
        }
        else {
          outC->_2_else_clock_IfBlock1 = outC->n_pig_in == 4;
          if (outC->_2_else_clock_IfBlock1) {
            outC->_L18_IfBlock1 = ENUM_N_PIG_5th_N_PIG;
            n_pig9 = outC->_L18_IfBlock1;
            n_pig6 = n_pig9;
          }
          else {
            outC->_1_else_clock_IfBlock1 = outC->n_pig_in == 5;
            if (outC->_1_else_clock_IfBlock1) {
              outC->_L29_IfBlock1 = ENUM_N_PIG_6th_N_PIG;
              n_pig11 = outC->_L29_IfBlock1;
              n_pig8 = n_pig11;
            }
            else {
              outC->else_clock_IfBlock1 = outC->n_pig_in == 6;
              if (outC->else_clock_IfBlock1) {
                outC->_L110_IfBlock1 = ENUM_N_PIG_7th_N_PIG;
                n_pig13 = outC->_L110_IfBlock1;
                n_pig10 = n_pig13;
              }
              else {
                outC->_L111_IfBlock1 = ENUM_N_PIG_8th_N_PIG;
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
** TOOLS_Int_to_N_PIG.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

