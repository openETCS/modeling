/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_SP_per_LRBG_TA_Lib_internal.h"

void Update_SP_per_LRBG_reset_TA_Lib_internal(
  outC_Update_SP_per_LRBG_TA_Lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    Update_SP_per_LRBG_loop_reset_TA_Lib_internal(&outC->_1_Context_1[i]);
  }
  /* 1 */ FindStartOfNewSpeedProfile_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Lib_internal::Update_SP_per_LRBG */
void Update_SP_per_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Update_SP_per_LRBG::new_SP */SSP_cat_t_TA_MRSP *new_SP,
  /* TA_Lib_internal::Update_SP_per_LRBG::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_Lib_internal::Update_SP_per_LRBG::section1_delay */SSP_section_t_TA_MRSP *section1_delay,
  /* TA_Lib_internal::Update_SP_per_LRBG::section1 */SSP_section_t_TA_MRSP *section1,
  /* TA_Lib_internal::Update_SP_per_LRBG::Last_SpeedProfile_in */SSP_cat_t_TA_MRSP *Last_SpeedProfile_in,
  outC_Update_SP_per_LRBG_TA_Lib_internal *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  SSP_cat_t_TA_MRSP tmp;
  kcg_int i;
  
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L46, Last_SpeedProfile_in);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L45, Last_SpeedProfile_in);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L5, new_SP);
  /* 1 */
  FindStartOfNewSpeedProfile_TA_Lib_internal(
    &outC->_L45,
    &outC->_L5,
    &outC->Context_1);
  outC->_L1 = outC->Context_1.relevant_section;
  outC->_L38 = 0;
  outC->_L37 = outC->_L1 > outC->_L38;
  outC->_L21 = 1;
  outC->_L20 = outC->_L1 - outC->_L21;
  if ((0 <= outC->_L20) & (outC->_L20 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L26, &outC->_L46[outC->_L20]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &outC->_L26,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  outC->_L27 = outC->_L26.speed;
  outC->_L23 = v_static_section1;
  outC->_L29 = outC->_L27 < outC->_L23;
  outC->_L36 = outC->_L37 & outC->_L29;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L24, section1_delay);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L25, section1);
  if (outC->_L36) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L30, &outC->_L24);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L30, &outC->_L25);
  }
  for (i3 = 0; i3 < 1; i3++) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L41[i3], &outC->_L30);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L35, new_SP);
  kcg_copy_array__10591(&outC->_L34, (array__10591 *) &outC->_L35[1]);
  kcg_copy_array__10594(&outC->_L39[0], &outC->_L41);
  kcg_copy_array__10591(&outC->_L39[1], &outC->_L34);
  for (i2 = 0; i2 < 33; i2++) {
    kcg_copy_array__10399(&outC->_L15[i2], &outC->_L39);
  }
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L9[i1] = outC->_L1;
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L14, &outC->_L45);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_cat_t_TA_MRSP(&tmp, &outC->_L14);
    /* 1 */
    Update_SP_per_LRBG_loop_TA_Lib_internal(
      i,
      &tmp,
      outC->_L9[i],
      &outC->_L15[i],
      &outC->_1_Context_1[i]);
    kcg_copy_SSP_cat_t_TA_MRSP(
      &outC->_L14,
      &outC->_1_Context_1[i].SpeedProfile_out);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->SpeedProfile_out, &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_SP_per_LRBG_TA_Lib_internal.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

