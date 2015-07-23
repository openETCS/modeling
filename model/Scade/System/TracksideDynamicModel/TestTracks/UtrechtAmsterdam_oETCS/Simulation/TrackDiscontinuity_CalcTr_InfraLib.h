/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _TrackDiscontinuity_CalcTr_InfraLib_H_
#define _TrackDiscontinuity_CalcTr_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::TrainPosCalibrated */ TrainPosCalibrated;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L15 */ _L15;
  kcg_bool /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L18 */ _L18;
  kcg_int /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L19 */ _L19;
  kcg_int /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L22 */ _L22;
  kcg_int /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L21 */ _L21;
  kcg_int /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L20 */ _L20;
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L26 */ _L26;
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L25 */ _L25;
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L24 */ _L24;
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L23 */ _L23;
  kcg_int /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L28 */ _L28;
  TrackSectionData_T_InfraLib /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L27 */ _L27;
  TrainPosRaw_T_InfraLib /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L29 */ _L29;
  kcg_int /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L30 */ _L30;
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L31 */ _L31;
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L33 */ _L33;
  kcg_real /* InfraLib::TrackDiscontinuity_CalcTrainPos::_L32 */ _L32;
} outC_TrackDiscontinuity_CalcTr_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackDiscontinuity_CalcTrainPos */
extern void TrackDiscontinuity_CalcTr_InfraLib(
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::DeltaIn */kcg_int DeltaIn,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity_CalcTrainPos::SectionDataIn */TrackSectionData_T_InfraLib *SectionDataIn,
  outC_TrackDiscontinuity_CalcTr_InfraLib *outC);

extern void TrackDiscontinuity_CalcTr_reset_InfraLib(
  outC_TrackDiscontinuity_CalcTr_InfraLib *outC);

#endif /* _TrackDiscontinuity_CalcTr_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackDiscontinuity_CalcTr_InfraLib.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

