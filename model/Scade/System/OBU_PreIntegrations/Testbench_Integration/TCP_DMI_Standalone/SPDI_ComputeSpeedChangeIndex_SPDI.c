/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SPDI_ComputeSpeedChangeIndex_SPDI.h"

/* SPDI::SPDI_ComputeSpeedChangeIndex */
void SPDI_ComputeSpeedChangeIndex_SPDI(
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_Last_Speed */kcg_real Acc_Last_Speed,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_EndOfLogPart */kcg_real Acc_EndOfLogPart,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Dist */kcg_real Dist,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Speed */kcg_real Speed,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_Speed_Out */kcg_real *Acc_Speed_Out,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_EndOfLogPart_Out */kcg_real *Acc_EndOfLogPart_Out,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeIndex */kcg_int *SpeedChangeIndex,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeSymbolVisible */kcg_bool *SpeedChangeSymbolVisible)
{
  /* SPDI::SPDI_ComputeSpeedChangeIndex::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  *Acc_EndOfLogPart_Out = Acc_EndOfLogPart;
  *Acc_Speed_Out = Speed;
  *SpeedChangeSymbolVisible = (*Acc_EndOfLogPart_Out > Dist) & (Dist > 0.0) &
    (Acc_Last_Speed != *Acc_Speed_Out);
  IfBlock1_clock = (*Acc_Speed_Out == 0.0) | (*Acc_Speed_Out < 0.0) |
    (*Acc_Speed_Out == 635.0) | (*Acc_Speed_Out > 635.0);
  if (IfBlock1_clock) {
    *SpeedChangeIndex = 3;
  }
  else {
    else_clock_IfBlock1 = Acc_Last_Speed > *Acc_Speed_Out;
    if (else_clock_IfBlock1) {
      *SpeedChangeIndex = 2;
    }
    else {
      *SpeedChangeIndex = 1;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SPDI_ComputeSpeedChangeIndex_SPDI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

