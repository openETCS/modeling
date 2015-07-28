/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindFirstRelevantSPForNew_TA_Lib_internal.h"

void FindFirstRelevantSPForNew_reset_TA_Lib_internal(
  outC_FindFirstRelevantSPForNew_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop */
void FindFirstRelevantSPForNew_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::i */kcg_int i,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_FindFirstRelevantSPForNew_TA_Lib_internal *outC)
{
  kcg_int noname;
  
  outC->_L182 = i;
  outC->_L176 = 0;
  outC->_L181 = outC->_L182 > outC->_L176;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L170, Profile_in);
  outC->_L168 = i;
  if ((0 <= outC->_L168) & (outC->_L168 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L172, &outC->_L170[outC->_L168]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &outC->_L172,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  outC->_L173 = outC->_L172.target;
  outC->_L177 = outC->_L176 == outC->_L173;
  outC->_L178 = outC->_L181 & outC->_L177;
  outC->_L179 = !outC->_L178;
  outC->_L171 = Distance_2LRBGs;
  outC->_L174 = outC->_L173 < outC->_L171;
  outC->_L180 = outC->_L179 & outC->_L174;
  outC->cont = outC->_L180;
  outC->_L175 = i;
  outC->_L169 = Acc;
  noname = outC->_L169;
  outC->relevant_section = outC->_L175;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantSPForNew_TA_Lib_internal.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

