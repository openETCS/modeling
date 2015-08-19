/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_SP_per_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Update_SP_per_LRBG */
void Update_SP_per_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Update_SP_per_LRBG::new_SP */SSP_cat_t_TA_MRSP *new_SP,
  /* TA_Lib_internal::Update_SP_per_LRBG::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_Lib_internal::Update_SP_per_LRBG::section1_delay */SSP_section_t_TA_MRSP *section1_delay,
  /* TA_Lib_internal::Update_SP_per_LRBG::section1 */SSP_section_t_TA_MRSP *section1,
  /* TA_Lib_internal::Update_SP_per_LRBG::Last_SpeedProfile_in */SSP_cat_t_TA_MRSP *Last_SpeedProfile_in,
  /* TA_Lib_internal::Update_SP_per_LRBG::SpeedProfile_out */SSP_cat_t_TA_MRSP *SpeedProfile_out)
{
  SSP_section_t_TA_MRSP tmp1;
  SSP_cat_t_TA_MRSP tmp;
  kcg_int i;
  /* TA_Lib_internal::Update_SP_per_LRBG::_L1 */ kcg_int _L1;
  /* TA_Lib_internal::Update_SP_per_LRBG::_L39 */ array__11213 _L39;
  
  _L1 = /* 1 */
    FindStartOfNewSpeedProfile_TA_Lib_internal(Last_SpeedProfile_in, new_SP);
  if ((0 <= _L1 - 1) & (_L1 - 1 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&tmp1, &(*Last_SpeedProfile_in)[_L1 - 1]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &tmp1,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  if ((_L1 > 0) & (tmp1.speed < v_static_section1)) {
    kcg_copy_SSP_section_t_TA_MRSP(&(&_L39[0])[0], section1_delay);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(&(&_L39[0])[0], section1);
  }
  kcg_copy_array__12126(&_L39[1], (array__12126 *) &(*new_SP)[1]);
  kcg_copy_SSP_cat_t_TA_MRSP(SpeedProfile_out, Last_SpeedProfile_in);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_cat_t_TA_MRSP(&tmp, SpeedProfile_out);
    /* 1 */
    Update_SP_per_LRBG_loop_TA_Lib_internal(
      i,
      &tmp,
      _L1,
      &_L39,
      SpeedProfile_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_SP_per_LRBG_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

