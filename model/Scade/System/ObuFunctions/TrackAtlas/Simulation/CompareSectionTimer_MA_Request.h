/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _CompareSectionTimer_MA_Request_H_
#define _CompareSectionTimer_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::CompareSectionTimer::smallestTimer */ smallestTimer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::CompareSectionTimer::_L1 */ _L1;
  MovementAuthoritySection_t_TrackAtlasTypes /* MA_Request::CompareSectionTimer::_L2 */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::CompareSectionTimer::_L3 */ _L3;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::CompareSectionTimer::_L5 */ _L5;
  kcg_bool /* MA_Request::CompareSectionTimer::_L7 */ _L7;
  kcg_bool /* MA_Request::CompareSectionTimer::_L8 */ _L8;
  kcg_bool /* MA_Request::CompareSectionTimer::_L9 */ _L9;
  kcg_bool /* MA_Request::CompareSectionTimer::_L10 */ _L10;
  kcg_bool /* MA_Request::CompareSectionTimer::_L11 */ _L11;
  kcg_bool /* MA_Request::CompareSectionTimer::_L12 */ _L12;
} outC_CompareSectionTimer_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::CompareSectionTimer */
extern void CompareSectionTimer_MA_Request(
  /* MA_Request::CompareSectionTimer::timer */T_internal_Type_Obu_BasicTypes_Pkg timer,
  /* MA_Request::CompareSectionTimer::ma_section */MovementAuthoritySection_t_TrackAtlasTypes *ma_section,
  outC_CompareSectionTimer_MA_Request *outC);

extern void CompareSectionTimer_reset_MA_Request(
  outC_CompareSectionTimer_MA_Request *outC);

#endif /* _CompareSectionTimer_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CompareSectionTimer_MA_Request.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

