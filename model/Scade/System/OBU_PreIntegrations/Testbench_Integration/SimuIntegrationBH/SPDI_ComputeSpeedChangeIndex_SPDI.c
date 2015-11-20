/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SPDI_ComputeSpeedChangeIndex_SPDI.h"

/* SPDI::SPDI_ComputeSpeedChangeIndex */
void SPDI_ComputeSpeedChangeIndex_SPDI(
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_Last_Speed */ kcg_real Acc_Last_Speed,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_EndOfLogPart */ kcg_real Acc_EndOfLogPart,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Dist */ kcg_real Dist,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Speed */ kcg_real Speed,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_Speed_Out */ kcg_real *Acc_Speed_Out,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::Acc_EndOfLogPart_Out */ kcg_real *Acc_EndOfLogPart_Out,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeIndex */ kcg_int *_6_SpeedChangeIndex,
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeSymbolVisible */ kcg_bool *SpeedChangeSymbolVisible)
{
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeIndex */
  static kcg_int _1_SpeedChangeIndex;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeIndex */
  static kcg_int SpeedChangeIndex;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::IfBlock1::else::else::_L1 */
  static kcg_int _L15_IfBlock1;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeIndex */
  static kcg_int _2_SpeedChangeIndex;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::IfBlock1::else::then::_L1 */
  static kcg_int _L14_IfBlock1;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::SpeedChangeIndex */
  static kcg_int _3_SpeedChangeIndex;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L1 */
  static kcg_real _L1;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L2 */
  static kcg_real _L2;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L3 */
  static kcg_real _L3;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L4 */
  static kcg_real _L4;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L5 */
  static kcg_bool _L5;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L6 */
  static kcg_bool _L6;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L7 */
  static kcg_bool _L7;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L8 */
  static kcg_real _L8;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L9 */
  static kcg_real _L9;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L10 */
  static kcg_bool _L10;
  /* SPDI::SPDI_ComputeSpeedChangeIndex::_L11 */
  static kcg_real _L11;
  
  IfBlock1_clock = (Speed == 0.0) | (Speed < 0.0) | (Speed == 635.0) | (Speed >
      635.0);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = 3;
    _1_SpeedChangeIndex = _L1_IfBlock1;
    *_6_SpeedChangeIndex = _1_SpeedChangeIndex;
  }
  else {
    else_clock_IfBlock1 = Acc_Last_Speed > Speed;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L14_IfBlock1 = 2;
      _3_SpeedChangeIndex = _L14_IfBlock1;
      SpeedChangeIndex = _3_SpeedChangeIndex;
    }
    else {
      _L15_IfBlock1 = 1;
      _2_SpeedChangeIndex = _L15_IfBlock1;
      SpeedChangeIndex = _2_SpeedChangeIndex;
    }
    *_6_SpeedChangeIndex = SpeedChangeIndex;
  }
  _L1 = Speed;
  *Acc_Speed_Out = _L1;
  _L2 = Acc_EndOfLogPart;
  *Acc_EndOfLogPart_Out = _L2;
  _L3 = Acc_EndOfLogPart;
  _L4 = Dist;
  _L5 = _L3 > _L4;
  _L8 = 0.0;
  _L7 = _L4 > _L8;
  _L9 = Acc_Last_Speed;
  _L11 = Speed;
  _L10 = _L9 != _L11;
  _L6 = _L5 & _L7 & _L10;
  *SpeedChangeSymbolVisible = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SPDI_ComputeSpeedChangeIndex_SPDI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

