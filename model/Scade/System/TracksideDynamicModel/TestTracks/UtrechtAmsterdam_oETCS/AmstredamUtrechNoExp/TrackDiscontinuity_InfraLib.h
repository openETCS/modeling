/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:50
*************************************************************$ */
#ifndef _TrackDiscontinuity_InfraLib_H_
#define _TrackDiscontinuity_InfraLib_H_

#include "kcg_types.h"
#include "TrackDiscontinuity_CalcTrainPos_InfraLib.h"

/* =====================  no input structure  ====================== */


/* InfraLib::TrackDiscontinuity */
extern void TrackDiscontinuity_InfraLib(
  /* InfraLib::TrackDiscontinuity::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackDiscontinuity::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity::EndSection */kcg_int EndSection,
  /* InfraLib::TrackDiscontinuity::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out);

#endif /* _TrackDiscontinuity_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackDiscontinuity_InfraLib.h
** Generation date: 2015-07-22T11:03:50
*************************************************************$ */

