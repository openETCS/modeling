/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */
#ifndef _TrackClose_InfraLib_H_
#define _TrackClose_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* InfraLib::TrackClose::BaliseMessage */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* InfraLib::TrackClose::_L1 */ _L1;
  CompressedBaliseMessage_TM /* InfraLib::TrackClose::_L6 */ _L6;
} outC_TrackClose_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackClose */
extern void TrackClose_InfraLib(
  /* InfraLib::TrackClose::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_TrackClose_InfraLib *outC);

extern void TrackClose_reset_InfraLib(outC_TrackClose_InfraLib *outC);

#endif /* _TrackClose_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackClose_InfraLib.h
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

