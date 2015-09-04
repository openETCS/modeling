/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-03T16:20:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfil_TA_Lib_internal.h"

void FindStartOfNewSpeedProfil_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfil_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP */
void FindStartOfNewSpeedProfil_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::distance_in */D_STATIC distance_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  outC_FindStartOfNewSpeedProfil_TA_Lib_internal *outC)
{
  kcg_int noname;
  
  outC->_L14 = i;
  outC->_L12 = 0;
  outC->_L13 = outC->_L14 > outC->_L12;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L2, Profile_in);
  outC->_L3 = i;
  if ((0 <= outC->_L3) & (outC->_L3 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L4, &outC->_L2[outC->_L3]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &outC->_L4,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  outC->_L5 = outC->_L4.target;
  outC->_L15 = outC->_L12 == outC->_L5;
  outC->_L16 = outC->_L13 & outC->_L15;
  outC->_L17 = !outC->_L16;
  outC->_L1 = distance_in;
  outC->_L6 = outC->_L5 < outC->_L1;
  outC->_L18 = outC->_L17 & outC->_L6;
  outC->_L8 = Acc;
  noname = outC->_L8;
  outC->_L7 = i;
  outC->relevant_section = outC->_L7;
  outC->cont = outC->_L18;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfil_TA_Lib_internal.c
** Generation date: 2015-09-03T16:20:45
*************************************************************$ */

