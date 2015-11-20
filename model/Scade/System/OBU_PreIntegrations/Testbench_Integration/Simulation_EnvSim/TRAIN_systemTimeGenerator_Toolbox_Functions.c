/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"

void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Functions::TRAIN_systemTimeGenerator */
void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  static kcg_int tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp = outC->timestamp;
  }
  outC->timestamp = deltaTime + tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TRAIN_systemTimeGenerator_Toolbox_Functions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

