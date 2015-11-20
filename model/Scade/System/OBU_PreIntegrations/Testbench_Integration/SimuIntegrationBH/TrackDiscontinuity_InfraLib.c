/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_InfraLib.h"

/* InfraLib::TrackDiscontinuity */
void TrackDiscontinuity_InfraLib(
  /* InfraLib::TrackDiscontinuity::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackDiscontinuity::StartSection */ kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity::EndSection */ kcg_int EndSection,
  /* InfraLib::TrackDiscontinuity::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* math::Abs::A_Output */
  static kcg_int A_Output_3;
  /* math::Abs::A_Input */
  static kcg_int A_Input_3;
  /* math::Abs::_L8 */
  static kcg_int _L8_3;
  /* math::Abs::_L5 */
  static kcg_int _L5_3;
  /* math::Abs::_L3 */
  static kcg_int _L3_3;
  /* math::Abs::_L2 */
  static kcg_int _L2_3;
  /* math::Abs::_L1 */
  static kcg_bool _L1_3;
  /* InfraLib::TrackDiscontinuity */
  static kcg_real op_call;
  /* InfraLib::TrackDiscontinuity */
  static kcg_bool ck_every;
  /* InfraLib::TrackDiscontinuity::NewOffset */
  static kcg_int NewOffset;
  /* InfraLib::TrackDiscontinuity::_L2 */
  static kcg_int _L2;
  /* InfraLib::TrackDiscontinuity::_L3 */
  static kcg_int _L3;
  /* InfraLib::TrackDiscontinuity::_L16 */
  static TrackSectionData_T_InfraLib _L16;
  /* InfraLib::TrackDiscontinuity::_L49 */
  static kcg_int _L49;
  /* InfraLib::TrackDiscontinuity::_L50 */
  static kcg_int _L50;
  /* InfraLib::TrackDiscontinuity::_L57 */
  static kcg_int _L57;
  /* InfraLib::TrackDiscontinuity::_L59 */
  static kcg_real _L59;
  /* InfraLib::TrackDiscontinuity::_L60 */
  static kcg_real _L60;
  /* InfraLib::TrackDiscontinuity::_L61 */
  static kcg_bool _L61;
  /* InfraLib::TrackDiscontinuity::_L62 */
  static kcg_bool _L62;
  /* InfraLib::TrackDiscontinuity::_L63 */
  static kcg_bool _L63;
  /* InfraLib::TrackDiscontinuity::_L79 */
  static kcg_real _L79;
  /* InfraLib::TrackDiscontinuity::_L80 */
  static TrackSectionData_T_InfraLib _L80;
  /* InfraLib::TrackDiscontinuity::_L81 */
  static TrainPosRaw_T_InfraLib _L81;
  /* InfraLib::TrackDiscontinuity::_L82 */
  static kcg_real _L82;
  /* InfraLib::TrackDiscontinuity::_L83 */
  static kcg_int _L83;
  /* InfraLib::TrackDiscontinuity::_L88 */
  static TrackSectionData_T_InfraLib _L88;
  /* InfraLib::TrackDiscontinuity::_L89 */
  static TrainPosRaw_T_InfraLib _L89;
  /* InfraLib::TrackDiscontinuity::_L90 */
  static TrainPosRaw_T_InfraLib _L90;
  /* InfraLib::TrackDiscontinuity::_L91 */
  static kcg_int _L91;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L16, SectionData_in);
  kcg_copy_TrainPosRaw_T_InfraLib(&_L81, &_L16.TrainPosRaw);
  _L82 = _L81.TrainPos_in;
  _L83 = _L81.OffsetTotal;
  _L60 = (kcg_real) _L83;
  _L61 = _L82 >= _L60;
  _L8_3 = 0;
  _L3 = EndSection;
  _L2 = StartSection;
  _L49 = _L3 - _L2;
  A_Input_3 = _L49;
  _L5_3 = A_Input_3;
  _L1_3 = _L8_3 <= _L5_3;
  _L3_3 = - _L5_3;
  /* 2 */ if (_L1_3) {
    _L2_3 = _L5_3;
  }
  else {
    _L2_3 = _L3_3;
  }
  A_Output_3 = _L2_3;
  _L50 = A_Output_3;
  _L57 = _L83 + _L50;
  _L59 = (kcg_real) _L57;
  _L62 = _L82 < _L59;
  _L63 = _L61 & _L62;
  ck_every = _L63;
  kcg_copy_TrackSectionData_T_InfraLib(&_L80, SectionData_in);
  /* ck_TrackDiscontinuity */ if (ck_every) {
    op_call = /* 2 */
      TrackDiscontinuity_CalcTrainPos_InfraLib(_L49, _L2, &_L80);
  }
  NewOffset = _L57;
  _L91 = NewOffset;
  kcg_copy_TrainPosRaw_T_InfraLib(&_L90, &_L81);
  if (kcg_true) {
    _L90.OffsetTotal = _L91;
  }
  /* ck_TrackDiscontinuity */ if (ck_every) {
    _L79 = op_call;
  }
  else {
    _L79 = 0.0;
  }
  kcg_copy_TrainPosRaw_T_InfraLib(&_L89, &_L90);
  if (kcg_true) {
    _L89.TrainPosCalibrated = _L79;
  }
  kcg_copy_TrackSectionData_T_InfraLib(&_L88, &_L16);
  if (kcg_true) {
    kcg_copy_TrainPosRaw_T_InfraLib(&_L88.TrainPosRaw, &_L89);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L88);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackDiscontinuity_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

