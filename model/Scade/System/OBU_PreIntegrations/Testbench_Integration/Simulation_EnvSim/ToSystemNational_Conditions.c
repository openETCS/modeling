/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemNational_Conditions.h"

void ToSystemNational_reset_Conditions(outC_ToSystemNational_Conditions *outC)
{
  outC->init = kcg_true;
}

/* Conditions::ToSystemNational */
void ToSystemNational_Conditions(
  /* Conditions::ToSystemNational::Current_Level */M_LEVEL Current_Level,
  outC_ToSystemNational_Conditions *outC)
{
  static M_LEVEL tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->rem_Current_Level;
  }
  outC->Condition56 = (Current_Level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC) & (Current_Level != tmp);
  outC->rem_Current_Level = Current_Level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToSystemNational_Conditions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

