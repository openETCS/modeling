/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _TrackInit_InfraLib_H_
#define _TrackInit_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* InfraLib::TrackInit::SectionData_out */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* InfraLib::TrackInit::_L1 */ _L1;
  CompressedBaliseMessage_TM /* InfraLib::TrackInit::_L4 */ _L4;
  TrackSectionData_T_InfraLib /* InfraLib::TrackInit::_L8 */ _L8;
  TrainPosRaw_T_InfraLib /* InfraLib::TrackInit::_L10 */ _L10;
  kcg_real /* InfraLib::TrackInit::_L11 */ _L11;
  kcg_int /* InfraLib::TrackInit::_L12 */ _L12;
} outC_TrackInit_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackInit */
extern void TrackInit_InfraLib(
  /* InfraLib::TrackInit::TrainPosIn */kcg_real TrainPosIn,
  /* InfraLib::TrackInit::InitialOffset */kcg_int InitialOffset,
  outC_TrackInit_InfraLib *outC);

extern void TrackInit_reset_InfraLib(outC_TrackInit_InfraLib *outC);

#endif /* _TrackInit_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackInit_InfraLib.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

