/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "internalCycle_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::internalCycle */
void internalCycle_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::internalCycle::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::internalCycle::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::internalCycle::SvLPosition */ L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::internalCycle::condition */ kcg_bool *condition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::AccuOut */ ACC_SDM_GradientAcceleration_Pkg *AccuOut)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* SDM_GradientAcceleration_Pkg::internalCycle */
  static Gradient_real_t_SDM_GradientAcceleration_types acc;
  /* SDM_GradientAcceleration_Pkg::internalCycle */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L9 */
  static L_internal_real_Type_SDM_Types_Pkg _L9;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L13 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L13;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L26 */
  static ACC_SDM_GradientAcceleration_Pkg _L26;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L41 */
  static ACC_SDM_GradientAcceleration_Pkg _L41;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L45 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L45;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L46 */
  static kcg_int _L46;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L48 */
  static kcg_bool _L48;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L49 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L49;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L50 */
  static array_170701 _L50;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L51 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L51;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L52 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L52;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L53 */
  static ACC_SDM_GradientAcceleration_Pkg _L53;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L60 */
  static ACC_SDM_GradientAcceleration_Pkg _L60;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L74 */
  static kcg_int _L74;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L73 */
  static kcg_int _L73;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L77 */
  static kcg_bool _L77;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L76 */
  static kcg_real _L76;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L75 */
  static kcg_bool _L75;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L79 */
  static kcg_real _L79;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L78 */
  static kcg_real _L78;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L80 */
  static ACC_SDM_GradientAcceleration_Pkg _L80;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L83 */
  static kcg_int _L83;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L88 */
  static kcg_bool _L88;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L92 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L92;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L94 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L94;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L99 */
  static kcg_bool _L99;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L104 */
  static ACC_SDM_GradientAcceleration_Pkg _L104;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L105 */
  static kcg_int _L105;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L109 */
  static ACC_SDM_GradientAcceleration_Pkg _L109;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L108 */
  static kcg_int _L108;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L112 */
  static kcg_int _L112;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L115 */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types _L115;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L116 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L116;
  /* SDM_GradientAcceleration_Pkg::internalCycle::_L117 */
  static kcg_int _L117;
  
  _L9 = SvLPosition;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L26, Accu);
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L13,
    GradientProfile);
  /* CalcNearestDistance */
  CalcNearestDistance_SDM_GradientAcceleration_Pkg(
    &_L26,
    &_L13,
    &_L75,
    &_L76,
    &_L77);
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L41, Accu);
  /* MoveTrainPosition */
  MoveTrainPosition_SDM_GradientAcceleration_Pkg(_L76, &_L41, &_L78, &_L79);
  _L88 = _L78 < _L9;
  _L99 = _L75 & _L88;
  *condition = _L99;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L92,
    GradientProfile);
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L104, Accu);
  _L105 = _L104.rearIndex;
  _L117 = 0;
  /* 1 */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    &_L92,
    _L105,
    _L117,
    &_L116);
  _L94 = _L116.gradient;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L49,
    GradientProfile);
  /* pow */ for (i3 = 0; i3 < 50; i3++) {
    kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
      &_L50[i3],
      &_L49);
  }
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L109, Accu);
  _L108 = _L109.rearIndex;
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    _L51[i2] = _L108;
  }
  _L112 = _L109.frontIndex;
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L52[i1] = _L112;
  }
  _L48 = kcg_true;
  _L45 = _L94;
  if (_L48) {
    for (i = 0; i < 50; i++) {
      acc = _L45;
      /* 1 */
      lowestGradient_SDM_GradientAcceleration_Pkg(
        i,
        acc,
        &_L50[i],
        _L51[i],
        _L52[i],
        &cond_iterw,
        &_L45);
      _L46 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L46 = 0;
  }
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L60, Accu);
  /* DetermineNewIndices */
  DetermineNewIndices_SDM_GradientAcceleration_Pkg(&_L60, _L77, &_L73, &_L74);
  _L83 = index;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L80, Accu);
  /* addNewSection */
  addNewSection_SDM_GradientAcceleration_Pkg(_L45, _L83, &_L80, &_L115);
  _L53.frontPos = _L78;
  _L53.frontIndex = _L73;
  _L53.rearPos = _L79;
  _L53.rearIndex = _L74;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &_L53.compensatedGradientProfile,
    &_L115);
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(AccuOut, &_L53);
  noname = _L46;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** internalCycle_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

