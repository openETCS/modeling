/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T14:09:22
*************************************************************$ */
#ifndef _DIRTY_m_version_filter_fo_TM_specific_H_
#define _DIRTY_m_version_filter_fo_TM_specific_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  CompressedRadioMessage_TM /* TM_specific::DIRTY_m_version_filter_for_aprobst::RadioMessage_in */ RadioMessage_in;
} inC_DIRTY_m_version_filter_fo_TM_specific;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* TM_specific::DIRTY_m_version_filter_for_aprobst::RadioMessage_out */ RadioMessage_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedRadioMessage_TM /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L3 */ _L3;
  Radio_TrackTrain_Header_T_TM /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L2 */ _L2;
  CompressedRadioMessage_TM /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L6 */ _L6;
  kcg_int /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L37 */ _L37;
  Radio_TrackTrain_Header_T_TM /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L38 */ _L38;
  kcg_int /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L39 */ _L39;
  kcg_int /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L40 */ _L40;
  kcg_bool /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L41 */ _L41;
  kcg_int /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L42 */ _L42;
  kcg_int /* TM_specific::DIRTY_m_version_filter_for_aprobst::_L43 */ _L43;
} outC_DIRTY_m_version_filter_fo_TM_specific;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific::DIRTY_m_version_filter_for_aprobst */
extern void DIRTY_m_version_filter_fo_TM_specific(
  inC_DIRTY_m_version_filter_fo_TM_specific *inC,
  outC_DIRTY_m_version_filter_fo_TM_specific *outC);

extern void DIRTY_m_version_filter_fo_reset_TM_specific(
  outC_DIRTY_m_version_filter_fo_TM_specific *outC);

#endif /* _DIRTY_m_version_filter_fo_TM_specific_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DIRTY_m_version_filter_fo_TM_specific.h
** Generation date: 2015-07-03T14:09:22
*************************************************************$ */

