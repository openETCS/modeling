/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "internalCycle_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::internalCycle */
void internalCycle_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::internalCycle::index */kcg_int index,
  /* SDM_GradientAcceleration_Pkg::internalCycle::Accu */ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::internalCycle::SvLPosition */L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::internalCycle::condition */kcg_bool *condition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::AccuOut */ACC_SDM_GradientAcceleration_Pkg *AccuOut)
{
  static Gradient_section_real_t_SDM_GradientAcceleration_types tmp2;
  static Gradient_real_t_SDM_GradientAcceleration_types tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L45 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L45;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L77 */
  static kcg_bool _L77;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L78 */
  static kcg_real _L78;
  
  /* CalcNearestDistance */
  CalcNearestDistance_SDM_GradientAcceleration_Pkg(
    Accu,
    GradientProfile,
    &tmp,
    &_L45,
    &_L77);
  /* MoveTrainPosition */
  MoveTrainPosition_SDM_GradientAcceleration_Pkg(_L45, Accu, &_L78, &tmp1);
  (*AccuOut).frontPos = _L78;
  (*AccuOut).rearPos = tmp1;
  *condition = tmp & (_L78 < SvLPosition);
  /* DetermineNewIndices */
  DetermineNewIndices_SDM_GradientAcceleration_Pkg(
    Accu,
    _L77,
    &(*AccuOut).frontIndex,
    &i);
  (*AccuOut).rearIndex = i;
  /* 1 */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    GradientProfile,
    (*Accu).rearIndex,
    0,
    &tmp2);
  _L45 = tmp2.gradient;
  for (i = 0; i < 50; i++) {
    tmp1 = _L45;
    /* 1 */
    lowestGradient_SDM_GradientAcceleration_Pkg(
      i,
      tmp1,
      GradientProfile,
      (*Accu).rearIndex,
      (*Accu).frontIndex,
      &tmp,
      &_L45);
    if (!tmp) {
      break;
    }
  }
  /* addNewSection */
  addNewSection_SDM_GradientAcceleration_Pkg(
    _L45,
    index,
    Accu,
    &(*AccuOut).compensatedGradientProfile);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** internalCycle_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

