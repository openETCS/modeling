/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/GiovanniTrotta/Desktop/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/BaliseGroup/DetermineBG_Orientation_and_LRBG/Simulation/config.txt
** Generation date: 2014-06-11T14:34:48
*************************************************************$ */
#ifndef _Operator7_DetermineBGOrientation_LRBG_H_
#define _Operator7_DetermineBGOrientation_LRBG_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::Input1 */ Input1;
} inC_Operator7_DetermineBGOrientation_LRBG;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::_L1 */ _L1;
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::_L2 */ _L2;
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::_L3 */ _L3;
} outC_Operator7_DetermineBGOrientation_LRBG;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineBGOrientation_LRBG::Operator7 */
extern void Operator7_DetermineBGOrientation_LRBG(
  inC_Operator7_DetermineBGOrientation_LRBG *inC,
  outC_Operator7_DetermineBGOrientation_LRBG *outC);

extern void Operator7_reset_DetermineBGOrientation_LRBG(
  outC_Operator7_DetermineBGOrientation_LRBG *outC);
extern void Operator7_init_DetermineBGOrientation_LRBG(
  outC_Operator7_DetermineBGOrientation_LRBG *outC);

#endif /* _Operator7_DetermineBGOrientation_LRBG_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Operator7_DetermineBGOrientation_LRBG.h
** Generation date: 2014-06-11T14:34:48
*************************************************************$ */

