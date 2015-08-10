/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSPSectionsToNewLRBGafter_TA_Lib_internal.h"

void MoveSPSectionsToNewLRBGafter_reset_TA_Lib_internal(
  outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    MoveSPSectionsToNewLRBGaf_reset_TA_Lib_internal(&outC->_1_Context_1[i]);
  }
  /* 1 */ FindFirstRelevantSPForNewLRBG_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter */
void MoveSPSectionsToNewLRBGafter_TA_Lib_internal(
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::ProfileIn */SSP_cat_t_TA_MRSP *ProfileIn,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  SSP_cat_t_TA_MRSP tmp;
  kcg_int i;
  
  outC->_L3 = Distance_2LRBGs;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L6[i2] = outC->_L3;
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L2, ProfileIn);
  /* 1 */
  FindFirstRelevantSPForNewLRBG_TA_Lib_internal(
    &outC->_L2,
    outC->_L3,
    &outC->Context_1);
  outC->_L1 = outC->Context_1.relevant_section;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L5[i1] = outC->_L1;
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L4, &outC->_L2);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_cat_t_TA_MRSP(&tmp, &outC->_L4);
    /* 1 */
    MoveSPSectionsToNewLRBGaf_TA_Lib_internal(
      i,
      &tmp,
      outC->_L5[i],
      outC->_L6[i],
      &outC->_1_Context_1[i]);
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L4, &outC->_1_Context_1[i].ProfileOut);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->ProfileOut, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSPSectionsToNewLRBGafter_TA_Lib_internal.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

