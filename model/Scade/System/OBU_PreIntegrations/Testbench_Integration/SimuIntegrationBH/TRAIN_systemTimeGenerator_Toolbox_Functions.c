/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"

#ifndef KCG_USER_DEFINED_INIT
void TRAIN_systemTimeGenerator_init_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
  outC->_L2 = 0;
  outC->timestamp = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::TRAIN_systemTimeGenerator */
void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */ kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::_L4 */
  static kcg_int _L4;
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::_L3 */
  static kcg_int _L3;
  
  /* fby_1_init_1 */ if (outC->init) {
    _L4 = 0;
  }
  else {
    _L4 = outC->_L2;
  }
  _L3 = deltaTime;
  outC->_L2 = _L3 + _L4;
  outC->timestamp = outC->_L2;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_systemTimeGenerator_Toolbox_Functions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

