/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */
#ifndef _SEND_ConvertP005forWriteS_TM_conversions_H_
#define _SEND_ConvertP005forWriteS_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P005E_array_T_TM /* TM_conversions::SEND_ConvertP005forWriteSection_IT::SectionArray */ SectionArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P005E_T_TM /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L365 */ _L365;
  kcg_int /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L374 */ _L374;
  kcg_int /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L373 */ _L373;
  kcg_int /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L372 */ _L372;
  kcg_int /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L371 */ _L371;
  kcg_int /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L370 */ _L370;
  kcg_int /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L369 */ _L369;
  kcg_int /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L368 */ _L368;
  kcg_bool /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L367 */ _L367;
  array_int_7 /* TM_conversions::SEND_ConvertP005forWriteSection_IT::_L383 */ _L383;
} outC_SEND_ConvertP005forWriteS_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::SEND_ConvertP005forWriteSection_IT */
extern void SEND_ConvertP005forWriteS_TM_conversions(
  /* TM_conversions::SEND_ConvertP005forWriteSection_IT::SectionStruct */P005E_T_TM *SectionStruct,
  outC_SEND_ConvertP005forWriteS_TM_conversions *outC);

extern void SEND_ConvertP005forWriteS_reset_TM_conversions(
  outC_SEND_ConvertP005forWriteS_TM_conversions *outC);

#endif /* _SEND_ConvertP005forWriteS_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_ConvertP005forWriteS_TM_conversions.h
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */

