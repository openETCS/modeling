/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_CalcTrainPos_InfraLib.h"

/* InfraLib::TrackDiscontinuity_CalcTrainPos */
kcg_real TrackDiscontinuity_CalcTrainPos_InfraLib(
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::DeltaIn */kcg_int DeltaIn,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::SectionDataIn */TrackSectionData_T_InfraLib *SectionDataIn)
{
  static kcg_real tmp;
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::TrainPosCalibrated */
  static kcg_real TrainPosCalibrated;
  
  if (DeltaIn >= 0) {
    tmp = (kcg_real) 1;
  }
  else {
    tmp = (kcg_real) - 1;
  }
  TrainPosCalibrated = ((*SectionDataIn).TrainPosRaw.TrainPos_in - (kcg_real)
        (*SectionDataIn).TrainPosRaw.OffsetTotal) * tmp + (kcg_real)
      StartSection;
  return TrainPosCalibrated;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackDiscontinuity_CalcTrainPos_InfraLib.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

