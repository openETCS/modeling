/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SPDI_ComputeSpeedChangeIndex_SPDI_H_
#define _SPDI_ComputeSpeedChangeIndex_SPDI_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SPDI::SPDI_ComputeSpeedChangeIndex */
extern void SPDI_ComputeSpeedChangeIndex_SPDI(
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_Last_Speed */ kcg_real Acc_Last_Speed,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_EndOfLogPart */ kcg_real Acc_EndOfLogPart,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Dist */ kcg_real Dist,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Speed */ kcg_real Speed,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_Speed_Out */ kcg_real *Acc_Speed_Out,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_EndOfLogPart_Out */ kcg_real *Acc_EndOfLogPart_Out,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeIndex */ kcg_int *_6_SpeedChangeIndex,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeSymbolVisible */ kcg_bool *SpeedChangeSymbolVisible);

#endif /* _SPDI_ComputeSpeedChangeIndex_SPDI_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SPDI_ComputeSpeedChangeIndex_SPDI.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

