/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_CalcTrainPos_InfraLib.h"

/* InfraLib::TrackDiscontinuity_CalcTrainPos */
kcg_real TrackDiscontinuity_CalcTrainPos_InfraLib(
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::DeltaIn */ kcg_int DeltaIn,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::StartSection */ kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::SectionDataIn */ TrackSectionData_T_InfraLib *SectionDataIn)
{
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L15 */
  static kcg_int _L15;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L18 */
  static kcg_bool _L18;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L19 */
  static kcg_int _L19;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L22 */
  static kcg_int _L22;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L21 */
  static kcg_int _L21;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L20 */
  static kcg_int _L20;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L26 */
  static kcg_real _L26;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L25 */
  static kcg_real _L25;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L24 */
  static kcg_real _L24;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L23 */
  static kcg_real _L23;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L28 */
  static kcg_int _L28;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L27 */
  static TrackSectionData_T_InfraLib _L27;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L29 */
  static TrainPosRaw_T_InfraLib _L29;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L30 */
  static kcg_int _L30;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L31 */
  static kcg_real _L31;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L33 */
  static kcg_real _L33;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L32 */
  static kcg_real _L32;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::TrainPosCalibrated */
  static kcg_real TrainPosCalibrated;
  
  _L15 = DeltaIn;
  _L19 = 0;
  _L18 = _L15 >= _L19;
  _L20 = - 1;
  _L22 = 1;
  /* 2 */ if (_L18) {
    _L21 = _L22;
  }
  else {
    _L21 = _L20;
  }
  kcg_copy_TrackSectionData_T_InfraLib(&_L27, SectionDataIn);
  kcg_copy_TrainPosRaw_T_InfraLib(&_L29, &_L27.TrainPosRaw);
  _L31 = _L29.TrainPos_in;
  _L30 = _L29.OffsetTotal;
  _L26 = (kcg_real) _L30;
  _L23 = _L31 - _L26;
  _L24 = (kcg_real) _L21;
  _L25 = _L23 * _L24;
  _L28 = StartSection;
  _L33 = (kcg_real) _L28;
  _L32 = _L25 + _L33;
  TrainPosCalibrated = _L32;
  return TrainPosCalibrated;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackDiscontinuity_CalcTrainPos_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

