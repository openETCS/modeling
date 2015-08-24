/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_TrackClose_InfraLib.h"

/* InfraLib::TrackClose */
void UAB_TrackClose_InfraLib(
  /* InfraLib::TrackClose::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackClose::BaliseMessage */UAB_CompressedBaliseMessage_TM *BaliseMessage)
{
  UAB_kcg_copy_CompressedBaliseMessage_TM(
    BaliseMessage,
    &(*SectionData_in).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_TrackClose_InfraLib.c
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

