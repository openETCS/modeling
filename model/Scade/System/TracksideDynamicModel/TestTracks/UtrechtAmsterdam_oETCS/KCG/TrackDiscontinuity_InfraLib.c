/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_InfraLib.h"

/* InfraLib::TrackDiscontinuity */
void TrackDiscontinuity_InfraLib(
  /* InfraLib::TrackDiscontinuity::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackDiscontinuity::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity::EndSection */kcg_int EndSection,
  /* InfraLib::TrackDiscontinuity::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static kcg_int tmp;
  /* InfraLib::TrackDiscontinuity::NewOffset */
  static kcg_int NewOffset;
  /* InfraLib::TrackDiscontinuity::_L49 */
  static kcg_int _L49;
  /* InfraLib::TrackDiscontinuity::_L63 */
  static kcg_bool _L63;
  
  _L49 = EndSection - StartSection;
  if (0 <= _L49) {
    tmp = _L49;
  }
  else {
    tmp = - _L49;
  }
  NewOffset = (*SectionData_in).TrainPosRaw.OffsetTotal + tmp;
  _L63 = ((*SectionData_in).TrainPosRaw.TrainPos_in >= (kcg_real)
        (*SectionData_in).TrainPosRaw.OffsetTotal) &
    ((*SectionData_in).TrainPosRaw.TrainPos_in < (kcg_real) NewOffset);
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  kcg_copy_TrainPosRaw_T_InfraLib(
    &(*SectionData_out).TrainPosRaw,
    &(*SectionData_in).TrainPosRaw);
  (*SectionData_out).TrainPosRaw.OffsetTotal = NewOffset;
  if (_L63) {
    (*SectionData_out).TrainPosRaw.TrainPosCalibrated = /* 2 */
      TrackDiscontinuity_CalcTrainPos_InfraLib(
        _L49,
        StartSection,
        SectionData_in);
  }
  else {
    (*SectionData_out).TrainPosRaw.TrainPosCalibrated = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackDiscontinuity_InfraLib.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

