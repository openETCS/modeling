/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P27_to_DistancePr_TA_SSP.h"

void Convert_P27_to_DistancePr_reset_TA_SSP(
  outC_Convert_P27_to_DistancePr_TA_SSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 3 */ _3_Convert_P27_to_DistancePr_reset_TA_SSP(&outC->_1_Context_3[i]);
  }
  /* 3 */ _2_Convert_P27_to_DistancePr_reset_TA_SSP(&outC->Context_3);
}

/* TA_SSP::Convert_P27_to_DistanceProfile */
void Convert_P27_to_DistancePr_TA_SSP(
  inC_Convert_P27_to_DistancePr_TA_SSP *inC,
  outC_Convert_P27_to_DistancePr_TA_SSP *outC)
{
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  SSP_cat_t_TA_MRSP tmp;
  kcg_int i;
  
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->_L86,
    (P027V1_section_enum_T_TM_baseline2 *)
      &DEFAULT_P027v1_OBU_section_TM_baseline2);
  for (i5 = 0; i5 < 1; i5++) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(&outC->_L85[i5], &outC->_L86);
  }
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L73, &inC->Packet_in);
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->_L71,
    &outC->_L73.sections);
  kcg_copy_array__491(&outC->_L64, (array__491 *) &outC->_L71[1]);
  kcg_copy_array__491(&outC->_L84[0], &outC->_L64);
  kcg_copy_array__503(&outC->_L84[32], &outC->_L85);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L63, &inC->Packet_in);
  outC->_L65 = outC->_L63.q_scale;
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L70, &inC->Packet_in);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->_L62,
    &outC->_L70.sections[0]);
  outC->_L72 = inC->TrainLength;
  /* 3 */
  _2_Convert_P27_to_DistancePr_TA_SSP(
    outC->_L65,
    &outC->_L62,
    outC->_L72,
    &outC->Context_3);
  outC->_L68 = outC->Context_3.v_static_section1;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L66, &outC->Context_3.section1_delay);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L67, &outC->Context_3.section1);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->section1, &outC->_L67);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->section1_delay, &outC->_L66);
  outC->v_static_section1 = outC->_L68;
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L83,
    (SSP_cat_t_TA_MRSP *) &DEFAULT_SSP_cat_TA_MRSP);
  for (i4 = 0; i4 < 33; i4++) {
    kcg_copy_array__473(&outC->_L74[i4], &outC->_L84);
  }
  outC->_L69 = inC->TrainLength;
  for (i3 = 0; i3 < 33; i3++) {
    outC->_L82[i3] = outC->_L69;
  }
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L76[i2] = outC->_L65;
  }
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L81[i1] = outC->_L68;
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L77, &outC->_L83);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_cat_t_TA_MRSP(&tmp, &outC->_L77);
    /* 3 */
    _3_Convert_P27_to_DistancePr_TA_SSP(
      i,
      &tmp,
      &outC->_L74[i],
      outC->_L82[i],
      outC->_L76[i],
      outC->_L81[i],
      &outC->_1_Context_3[i]);
    kcg_copy_SSP_cat_t_TA_MRSP(
      &outC->_L77,
      &outC->_1_Context_3[i].SpeedProfile);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->SpeedProfile, &outC->_L77);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistancePr_TA_SSP.c
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */

