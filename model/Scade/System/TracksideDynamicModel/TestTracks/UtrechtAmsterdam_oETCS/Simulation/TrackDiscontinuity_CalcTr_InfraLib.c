/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_CalcTr_InfraLib.h"

void TrackDiscontinuity_CalcTr_reset_InfraLib(
  outC_TrackDiscontinuity_CalcTr_InfraLib *outC)
{
}

/* InfraLib::TrackDiscontinuity_CalcTrainPos */
void TrackDiscontinuity_CalcTr_InfraLib(
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::DeltaIn */kcg_int DeltaIn,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::SectionDataIn */TrackSectionData_T_InfraLib *SectionDataIn,
  outC_TrackDiscontinuity_CalcTr_InfraLib *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L27, SectionDataIn);
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L29, &outC->_L27.TrainPosRaw);
  outC->_L31 = outC->_L29.TrainPos_in;
  outC->_L30 = outC->_L29.OffsetTotal;
  outC->_L26 = (kcg_real) outC->_L30;
  outC->_L23 = outC->_L31 - outC->_L26;
  outC->_L15 = DeltaIn;
  outC->_L19 = 0;
  outC->_L18 = outC->_L15 >= outC->_L19;
  outC->_L22 = 1;
  outC->_L20 = - 1;
  if (outC->_L18) {
    outC->_L21 = outC->_L22;
  }
  else {
    outC->_L21 = outC->_L20;
  }
  outC->_L24 = (kcg_real) outC->_L21;
  outC->_L25 = outC->_L23 * outC->_L24;
  outC->_L28 = StartSection;
  outC->_L33 = (kcg_real) outC->_L28;
  outC->_L32 = outC->_L25 + outC->_L33;
  outC->TrainPosCalibrated = outC->_L32;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackDiscontinuity_CalcTr_InfraLib.c
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

