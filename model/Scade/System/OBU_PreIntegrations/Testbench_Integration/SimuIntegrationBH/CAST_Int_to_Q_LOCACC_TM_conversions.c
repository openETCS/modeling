/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LOCACC */
Q_LOCACC CAST_Int_to_Q_LOCACC_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc_int */ kcg_int q_locacc_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_Q_LOCACC::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_Q_LOCACC::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_Q_LOCACC::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_Q_LOCACC::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CAST_Int_to_Q_LOCACC::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc */
  static Q_LOCACC q_locacc;
  
  _L1 = q_locacc_int;
  q_locacc = _L1;
  _L10 = 63;
  _L9 = _L1 > _L10;
  noname = _L9;
  _L11 = 0;
  _L8 = _L1 < _L11;
  _1_noname = _L8;
  return q_locacc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LOCACC_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

