/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeDistDisplay.h"

/* ComputeDistDisplay */
kcg_real ComputeDistDisplay(
  /* ComputeDistDisplay::MaxLinearDistance */kcg_real MaxLinearDistance,
  /* ComputeDistDisplay::MaxLogDistance */kcg_real MaxLogDistance,
  /* ComputeDistDisplay::ObjectPosition */kcg_real ObjectPosition,
  /* ComputeDistDisplay::TrainPosition */kcg_real TrainPosition,
  /* ComputeDistDisplay::Zoomlevel */kcg_int Zoomlevel)
{
  kcg_real tmp;
  /* ComputeDistDisplay::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* ComputeDistDisplay::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* ComputeDistDisplay::l_objectDistance */ kcg_real l_objectDistance;
  /* ComputeDistDisplay::ObjectScreenYPosition */ kcg_real ObjectScreenYPosition;
  
  l_objectDistance = ObjectPosition - TrainPosition;
  IfBlock1_clock = l_objectDistance <= MaxLinearDistance;
  if (IfBlock1_clock) {
    if ((0 <= Zoomlevel) & (Zoomlevel < 6)) {
      tmp = LinearScaleFactors[Zoomlevel];
    }
    else {
      tmp = - 1.0;
    }
    ObjectScreenYPosition = l_objectDistance / tmp;
  }
  else {
    _1_else_clock_IfBlock1 = l_objectDistance < 0.0;
    if (_1_else_clock_IfBlock1) {
      ObjectScreenYPosition = 0.0;
    }
    else {
      else_clock_IfBlock1 = l_objectDistance > MaxLogDistance;
      if (else_clock_IfBlock1) {
        ObjectScreenYPosition = 262.0;
      }
      else {
        ObjectScreenYPosition = logScaleFactor * (/* 1 */
            LogR_mathext(l_objectDistance) - /* 2 */
            LogR_mathext(MaxLinearDistance)) + ScaleLine5;
      }
    }
  }
  return ObjectScreenYPosition;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeDistDisplay.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

