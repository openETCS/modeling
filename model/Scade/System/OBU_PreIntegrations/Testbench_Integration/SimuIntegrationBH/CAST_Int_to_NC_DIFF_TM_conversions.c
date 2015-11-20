/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_DIFF_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NC_DIFF */
NC_DIFF CAST_Int_to_NC_DIFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_NC_DIFF::nc_diff_int */ kcg_int nc_diff_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_NC_DIFF::_L16 */
  static kcg_int _L16;
  /* TM_conversions::CAST_Int_to_NC_DIFF::_L15 */
  static kcg_bool _L15;
  /* TM_conversions::CAST_Int_to_NC_DIFF::_L14 */
  static kcg_int _L14;
  /* TM_conversions::CAST_Int_to_NC_DIFF::_L13 */
  static kcg_int _L13;
  /* TM_conversions::CAST_Int_to_NC_DIFF::_L12 */
  static kcg_bool _L12;
  /* TM_conversions::CAST_Int_to_NC_DIFF::nc_diff */
  static NC_DIFF nc_diff;
  
  _L13 = nc_diff_int;
  _L16 = 2;
  _L12 = _L13 > _L16;
  noname = _L12;
  _L14 = 0;
  _L15 = _L13 < _L14;
  _1_noname = _L15;
  nc_diff = _L13;
  return nc_diff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NC_DIFF_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

