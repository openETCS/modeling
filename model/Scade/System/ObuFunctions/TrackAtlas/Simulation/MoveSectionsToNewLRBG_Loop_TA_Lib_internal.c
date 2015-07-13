/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSectionsToNewLRBG_Loop_TA_Lib_internal.h"

void MoveSectionsToNewLRBG_Loop_reset_TA_Lib_internal(
  outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal *outC)
{
  /* 2 */ NormalizePos_reset_TA_Lib_internal(&outC->Context_2);
}

/* TA_Lib_internal::MoveSectionsToNewLRBG_Loop */
void MoveSectionsToNewLRBG_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveSectionsToNewLRBG_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveSectionsToNewLRBG_Loop::ProfileIn */SSP_cat_t_TA_MRSP *ProfileIn,
  /* TA_Lib_internal::MoveSectionsToNewLRBG_Loop::FirstElement */kcg_int FirstElement,
  /* TA_Lib_internal::MoveSectionsToNewLRBG_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal *outC)
{
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L2, ProfileIn);
  outC->_L3 = FirstElement;
  outC->_L1 = i;
  outC->_L5 = outC->_L3 + outC->_L1;
  if ((0 <= outC->_L5) & (outC->_L5 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L6, &outC->_L2[outC->_L5]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &outC->_L6,
      (SSP_section_t_TA_MRSP *) &INIT_SSP_section_TA_Lib_internal);
  }
  outC->_L8 = outC->_L6.target;
  outC->_L4 = Distance_2LRBGs;
  outC->_L10 = outC->_L8 - outC->_L4;
  /* 2 */ NormalizePos_TA_Lib_internal(outC->_L10, 0, &outC->Context_2);
  outC->_L12 = outC->Context_2.Out;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L9, &outC->_L6);
  if (kcg_true) {
    outC->_L9.target = outC->_L12;
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L7, &outC->_L2);
  if ((0 <= outC->_L1) & (outC->_L1 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L7[outC->_L1], &outC->_L9);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->ProfileOut, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSectionsToNewLRBG_Loop_TA_Lib_internal.c
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */

