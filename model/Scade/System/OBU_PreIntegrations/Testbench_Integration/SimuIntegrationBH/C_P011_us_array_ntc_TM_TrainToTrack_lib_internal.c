/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc */
NID_NTC C_P011_us_array_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::flat */ kcg_int flat)
{
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::_L1 */
  static kcg_int _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::_L34 */
  static NID_NTC _L34;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::sections */
  static NID_NTC sections;
  
  _L1 = flat;
  _L34 = /* 1 */ CAST_Int_to_NID_NTC_TM_conversions(_L1);
  sections = _L34;
  return sections;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_us_array_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

