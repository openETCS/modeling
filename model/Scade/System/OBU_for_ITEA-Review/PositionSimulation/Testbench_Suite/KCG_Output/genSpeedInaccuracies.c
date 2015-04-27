/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genSpeedInaccuracies.h"

/* genSpeedInaccuracies */
void genSpeedInaccuracies(
  /* genSpeedInaccuracies::trueVelocity */ Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* genSpeedInaccuracies::odometryProperties */ odometryFactors_T *odometryProperties,
  /* genSpeedInaccuracies::odometrySpeeds */ OdometrySpeeds_T_Obu_BasicTypes_Pkg *odometrySpeeds)
{
  /* genSpeedInaccuracies::_L12 */ kcg_real _L12;
  /* genSpeedInaccuracies::_L8 */ kcg_real _L8;
  
  _L8 = (kcg_real) trueVelocity;
  (*odometrySpeeds).v_rawNominal = (kcg_int)
      ((*odometryProperties).o_nominal * _L8);
  (*odometrySpeeds).v_lower = (kcg_int) ((*odometryProperties).o_min * _L8);
  _L12 = (*odometryProperties).o_max * _L8;
  (*odometrySpeeds).v_safeNominal = (kcg_int) (0.99 * _L12);
  (*odometrySpeeds).v_upper = (kcg_int) _L12;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** genSpeedInaccuracies.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

