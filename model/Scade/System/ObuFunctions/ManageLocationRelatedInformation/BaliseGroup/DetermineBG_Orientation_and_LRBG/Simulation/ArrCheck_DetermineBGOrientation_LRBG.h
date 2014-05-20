/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-20T18:38:18
*************************************************************$ */
#ifndef _ArrCheck_DetermineBGOrientation_LRBG_H_
#define _ArrCheck_DetermineBGOrientation_LRBG_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::ArrCheck::Orientation */ Orientation;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::ArrCheck::_L13 */ _L13;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::ArrCheck::_L17 */ _L17;
  kcg_bool /* DetermineBGOrientation_LRBG::ArrCheck::_L20 */ _L20;
  N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::ArrCheck::_L34 */ _L34;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::ArrCheck::_L38 */ _L38;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::ArrCheck::_L37 */ _L37;
} outC_ArrCheck_DetermineBGOrientation_LRBG;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineBGOrientation_LRBG::ArrCheck */
extern void ArrCheck_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::ArrCheck::N_PIG */N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable N_PIG,
  outC_ArrCheck_DetermineBGOrientation_LRBG *outC);

extern void ArrCheck_reset_DetermineBGOrientation_LRBG(
  outC_ArrCheck_DetermineBGOrientation_LRBG *outC);

#endif /* _ArrCheck_DetermineBGOrientation_LRBG_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ArrCheck_DetermineBGOrientation_LRBG.h
** Generation date: 2014-05-20T18:38:18
*************************************************************$ */

