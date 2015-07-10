/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackInit_InfraLib.h"

void TrackInit_reset_InfraLib(outC_TrackInit_InfraLib *outC)
{
}

/* InfraLib::TrackInit */
void TrackInit_InfraLib(
  /* InfraLib::TrackInit::TrainPosIn */kcg_real TrainPosIn,
  /* InfraLib::TrackInit::InitialOffset */kcg_int InitialOffset,
  outC_TrackInit_InfraLib *outC)
{
  outC->_L12 = InitialOffset;
  outC->_L11 = 0.0;
  outC->_L1 = TrainPosIn;
  outC->_L10.TrainPos_in = outC->_L1;
  outC->_L10.OffsetTotal = outC->_L12;
  outC->_L10.TrainPosCalibrated = outC->_L11;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L4,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L8.TrainPosRaw, &outC->_L10);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L8.BG_Message, &outC->_L4);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackInit_InfraLib.c
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

