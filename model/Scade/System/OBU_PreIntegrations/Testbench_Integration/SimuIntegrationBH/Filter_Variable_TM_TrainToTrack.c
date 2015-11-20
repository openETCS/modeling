/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Filter_Variable_TM_TrainToTrack.h"

/* TM_TrainToTrack::Filter_Variable */
kcg_int Filter_Variable_TM_TrainToTrack(
  /* TM_TrainToTrack::Filter_Variable::valid */ kcg_bool valid,
  /* TM_TrainToTrack::Filter_Variable::int_in */ kcg_int int_in)
{
  /* TM_TrainToTrack::Filter_Variable::_L1 */
  static kcg_bool _L1;
  /* TM_TrainToTrack::Filter_Variable::_L2 */
  static kcg_int _L2;
  /* TM_TrainToTrack::Filter_Variable::_L3 */
  static kcg_int _L3;
  /* TM_TrainToTrack::Filter_Variable::_L4 */
  static kcg_int _L4;
  /* TM_TrainToTrack::Filter_Variable::int_out */
  static kcg_int int_out;
  
  _L1 = valid;
  _L2 = int_in;
  _L3 = INVALID_VARIABLE_TM_TrainToTrack;
  /* 1 */ if (_L1) {
    _L4 = _L2;
  }
  else {
    _L4 = _L3;
  }
  int_out = _L4;
  return int_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Filter_Variable_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

