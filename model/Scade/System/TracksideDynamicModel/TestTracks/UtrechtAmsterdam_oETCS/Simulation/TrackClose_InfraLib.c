/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackClose_InfraLib.h"

void TrackClose_reset_InfraLib(outC_TrackClose_InfraLib *outC)
{
}

/* InfraLib::TrackClose */
void TrackClose_InfraLib(
  /* InfraLib::TrackClose::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_TrackClose_InfraLib *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L1, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L6, &outC->_L1.BG_Message);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BaliseMessage, &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackClose_InfraLib.c
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

