/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */
#ifndef _UAB_TrackDiscontinuity_InfraLib_H_
#define _UAB_TrackDiscontinuity_InfraLib_H_

#include "kcg_types.h"
#include "UAB_TrackDiscontinuity_CalcTrainPos_InfraLib.h"

/* =====================  no input structure  ====================== */


/* InfraLib::TrackDiscontinuity */
extern void UAB_TrackDiscontinuity_InfraLib(
  /* InfraLib::TrackDiscontinuity::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackDiscontinuity::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity::EndSection */kcg_int EndSection,
  /* InfraLib::TrackDiscontinuity::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out);

#endif /* _UAB_TrackDiscontinuity_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_TrackDiscontinuity_InfraLib.h
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

