/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindFirstRelevantGPForNew_TA_Lib_internal.h"

void FindFirstRelevantGPForNew_reset_TA_Lib_internal(
  outC_FindFirstRelevantGPForNew_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop */
void FindFirstRelevantGPForNew_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::i */kcg_int i,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_FindFirstRelevantGPForNew_TA_Lib_internal *outC)
{
  kcg_int noname;
  
  outC->_L182 = i;
  outC->_L176 = 0;
  outC->_L181 = outC->_L182 > outC->_L176;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L170, Profile_in);
  outC->_L168 = i;
  if ((0 <= outC->_L168) & (outC->_L168 < 10)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L172,
      &outC->_L170[outC->_L168]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L172,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  outC->_L173 = outC->_L172.Loc_LRBG;
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
** FindFirstRelevantGPForNew_TA_Lib_internal.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

