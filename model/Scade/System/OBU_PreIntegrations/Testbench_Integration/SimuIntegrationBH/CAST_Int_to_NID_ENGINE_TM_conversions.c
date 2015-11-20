/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_ENGINE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_ENGINE */
NID_ENGINE CAST_Int_to_NID_ENGINE_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_ENGINE::nid_engine_int */ kcg_int nid_engine_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_NID_ENGINE::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_NID_ENGINE::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_NID_ENGINE::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_NID_ENGINE::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CAST_Int_to_NID_ENGINE::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_Int_to_NID_ENGINE::nid_engine */
  static NID_ENGINE nid_engine;
  
  _L1 = nid_engine_int;
  nid_engine = _L1;
  _L10 = 16777215;
  _L9 = _L1 > _L10;
  noname = _L9;
  _L11 = 0;
  _L8 = _L1 < _L11;
  _1_noname = _L8;
  return nid_engine;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_ENGINE_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

