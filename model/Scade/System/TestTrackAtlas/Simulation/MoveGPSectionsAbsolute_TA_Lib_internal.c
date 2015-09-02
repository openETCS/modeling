/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_TA_Lib_internal.h"

void MoveGPSectionsAbsolute_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_TA_Lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */
    MoveGPSectionsAbsolute_Loop_reset_TA_Lib_internal(&outC->Context_1[i]);
  }
}

/* TA_Lib_internal::MoveGPSectionsAbsolute */
void MoveGPSectionsAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_MoveGPSectionsAbsolute_TA_Lib_internal *outC)
{
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  GradientProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  
  outC->_L38 = pos_prvLRBG;
  for (i4 = 0; i4 < 50; i4++) {
    outC->_L41[i4] = outC->_L38;
  }
  outC->_L37 = pos_LRBG;
  for (i3 = 0; i3 < 50; i3++) {
    outC->_L40[i3] = outC->_L37;
  }
  outC->_L36 = msg_LRBG;
  for (i2 = 0; i2 < 50; i2++) {
    outC->_L39[i2] = outC->_L36;
  }
  outC->_L35 = msg_prvLRBG;
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L6[i1] = outC->_L35;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L4, &outC->_L2);
  for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, &outC->_L4);
    /* 1 */
    MoveGPSectionsAbsolute_Loop_TA_Lib_internal(
      i,
      &tmp,
      outC->_L6[i],
      outC->_L39[i],
      outC->_L40[i],
      outC->_L41[i],
      &outC->Context_1[i]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->Context_1[i].ProfileOut);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsAbsolute_TA_Lib_internal.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

