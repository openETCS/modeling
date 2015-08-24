/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */
#ifndef _TrackDiscontinuity_InfraLib_H_
#define _TrackDiscontinuity_InfraLib_H_

#include "kcg_types.h"
#include "TrackDiscontinuity_CalcTr_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* InfraLib::TrackDiscontinuity::SectionData_out */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackDiscontinuity_CalcTr_InfraLib /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* math::Abs::_L1 */ _L1_3;
  kcg_int /* math::Abs::_L2 */ _L2_3;
  kcg_int /* math::Abs::_L3 */ _L3_3;
  kcg_int /* math::Abs::_L5 */ _L5_3;
  kcg_int /* math::Abs::_L8 */ _L8_3;
  kcg_int /* math::Abs::A_Output */ A_Output_3;
  kcg_int /* math::Abs::A_Input */ A_Input_3;
  kcg_int /* InfraLib::TrackDiscontinuity::NewOffset */ NewOffset;
  kcg_int /* InfraLib::TrackDiscontinuity::_L2 */ _L2;
  kcg_int /* InfraLib::TrackDiscontinuity::_L3 */ _L3;
  TrackSectionData_T_InfraLib /* InfraLib::TrackDiscontinuity::_L16 */ _L16;
  kcg_int /* InfraLib::TrackDiscontinuity::_L49 */ _L49;
  kcg_int /* InfraLib::TrackDiscontinuity::_L50 */ _L50;
  kcg_int /* InfraLib::TrackDiscontinuity::_L57 */ _L57;
  kcg_real /* InfraLib::TrackDiscontinuity::_L59 */ _L59;
  kcg_real /* InfraLib::TrackDiscontinuity::_L60 */ _L60;
  kcg_bool /* InfraLib::TrackDiscontinuity::_L61 */ _L61;
  kcg_bool /* InfraLib::TrackDiscontinuity::_L62 */ _L62;
  kcg_bool /* InfraLib::TrackDiscontinuity::_L63 */ _L63;
  kcg_real /* InfraLib::TrackDiscontinuity::_L79 */ _L79;
  TrackSectionData_T_InfraLib /* InfraLib::TrackDiscontinuity::_L80 */ _L80;
  TrainPosRaw_T_InfraLib /* InfraLib::TrackDiscontinuity::_L81 */ _L81;
  kcg_real /* InfraLib::TrackDiscontinuity::_L82 */ _L82;
  kcg_int /* InfraLib::TrackDiscontinuity::_L83 */ _L83;
  TrackSectionData_T_InfraLib /* InfraLib::TrackDiscontinuity::_L88 */ _L88;
  TrainPosRaw_T_InfraLib /* InfraLib::TrackDiscontinuity::_L89 */ _L89;
  TrainPosRaw_T_InfraLib /* InfraLib::TrackDiscontinuity::_L90 */ _L90;
  kcg_int /* InfraLib::TrackDiscontinuity::_L91 */ _L91;
} outC_TrackDiscontinuity_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackDiscontinuity */
extern void TrackDiscontinuity_InfraLib(
  /* InfraLib::TrackDiscontinuity::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackDiscontinuity::StartSection */kcg_int StartSection,
  /* InfraLib::TrackDiscontinuity::EndSection */kcg_int EndSection,
  outC_TrackDiscontinuity_InfraLib *outC);

extern void TrackDiscontinuity_reset_InfraLib(
  outC_TrackDiscontinuity_InfraLib *outC);

#endif /* _TrackDiscontinuity_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackDiscontinuity_InfraLib.h
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

