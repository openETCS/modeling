/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_RELEASEOL */
V_RELEASEOL CAST_Int_to_V_RELEASEOL_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol_int */ kcg_int v_releaseol_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L7 */
  static kcg_int _L7;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L6 */
  static kcg_int _L6;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L13 */
  static kcg_int _L13;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L14 */
  static kcg_int _L14;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L15 */
  static kcg_bool _L15;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L16 */
  static kcg_bool _L16;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::_L17 */
  static kcg_bool _L17;
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol */
  static V_RELEASEOL v_releaseol;
  
  _L1 = v_releaseol_int;
  _L12 = 5;
  _L11 = _L1 * _L12;
  v_releaseol = _L11;
  _L6 = 0;
  _L7 = 120;
  _L9 = _L1 > _L7;
  _L13 = 126;
  _L15 = _L1 != _L13;
  _L14 = 127;
  _L16 = _L1 != _L14;
  _L17 = _L9 & _L15 & _L16;
  noname = _L17;
  _L8 = _L1 < _L6;
  _1_noname = _L8;
  return v_releaseol;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_RELEASEOL_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

