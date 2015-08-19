/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_InfraLib.h"

void TrackDiscontinuity_reset_InfraLib(outC_TrackDiscontinuity_InfraLib *outC)
{
  /* 2 */ TrackDiscontinuity_CalcTr_reset_InfraLib(&outC->Context_2);
}

/* InfraLib::TrackDiscontinuity */
void TrackDiscontinuity_InfraLib(
  /* InfraLib::TrackDiscontinuity::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackDiscontinuity::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity::EndSection */kcg_int EndSection,
  outC_TrackDiscontinuity_InfraLib *outC)
{
  static kcg_real tmp;
  
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L16, SectionData_in);
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L81, &outC->_L16.TrainPosRaw);
  outC->_L83 = outC->_L81.OffsetTotal;
  outC->_L8_3 = 0;
  outC->_L3 = EndSection;
  outC->_L2 = StartSection;
  outC->_L49 = outC->_L3 - outC->_L2;
  outC->A_Input_3 = outC->_L49;
  outC->_L5_3 = outC->A_Input_3;
  outC->_L1_3 = outC->_L8_3 <= outC->_L5_3;
  outC->_L3_3 = - outC->_L5_3;
  if (outC->_L1_3) {
    outC->_L2_3 = outC->_L5_3;
  }
  else {
    outC->_L2_3 = outC->_L3_3;
  }
  outC->A_Output_3 = outC->_L2_3;
  outC->_L50 = outC->A_Output_3;
  outC->_L57 = outC->_L83 + outC->_L50;
  outC->NewOffset = outC->_L57;
  outC->_L91 = outC->NewOffset;
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L90, &outC->_L81);
  if (kcg_true) {
    outC->_L90.OffsetTotal = outC->_L91;
  }
  outC->_L82 = outC->_L81.TrainPos_in;
  outC->_L60 = (kcg_real) outC->_L83;
  outC->_L61 = outC->_L82 >= outC->_L60;
  outC->_L59 = (kcg_real) outC->_L57;
  outC->_L62 = outC->_L82 < outC->_L59;
  outC->_L63 = outC->_L61 & outC->_L62;
  outC->tmp = outC->_L63;
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L80, SectionData_in);
  if (outC->tmp) {
    /* 2 */
    TrackDiscontinuity_CalcTr_InfraLib(
      outC->_L49,
      outC->_L2,
      &outC->_L80,
      &outC->Context_2);
    tmp = outC->Context_2.TrainPosCalibrated;
    outC->_L79 = tmp;
  }
  else {
    outC->_L79 = 0.0;
  }
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L89, &outC->_L90);
  if (kcg_true) {
    outC->_L89.TrainPosCalibrated = outC->_L79;
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L88, &outC->_L16);
  if (kcg_true) {
    kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L88.TrainPosRaw, &outC->_L89);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L88);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackDiscontinuity_InfraLib.c
** Generation date: 2015-08-12T20:04:59
*************************************************************$ */

