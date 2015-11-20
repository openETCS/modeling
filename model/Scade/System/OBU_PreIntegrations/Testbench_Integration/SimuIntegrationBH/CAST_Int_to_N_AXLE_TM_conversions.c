/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_AXLE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_N_AXLE */
N_AXLE CAST_Int_to_N_AXLE_TM_conversions(
  /* TM_conversions::CAST_Int_to_N_AXLE::n_axlle_in */ kcg_int n_axlle_in)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_N_AXLE::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_N_AXLE::_L12 */
  static kcg_bool _L12;
  /* TM_conversions::CAST_Int_to_N_AXLE::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_Int_to_N_AXLE::_L10 */
  static kcg_bool _L10;
  /* TM_conversions::CAST_Int_to_N_AXLE::_L9 */
  static kcg_int _L9;
  /* TM_conversions::CAST_Int_to_N_AXLE::n_axle */
  static N_AXLE n_axle;
  
  _L1 = n_axlle_in;
  n_axle = _L1;
  _L9 = 1023;
  _L11 = 0;
  _L10 = _L1 < _L11;
  _L12 = _L1 > _L9;
  noname = _L12;
  _1_noname = _L10;
  return n_axle;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_N_AXLE_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

