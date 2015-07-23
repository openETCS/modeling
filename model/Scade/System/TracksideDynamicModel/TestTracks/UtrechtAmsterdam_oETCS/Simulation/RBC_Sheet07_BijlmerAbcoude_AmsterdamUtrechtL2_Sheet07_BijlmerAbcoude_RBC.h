/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_
#define _RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_371_D_00024_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"
#include "Send_RBC_LRBG_371_D_00105_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"
#include "Send_RBC_LRBG_371_D_00163_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"
#include "Send_RBC_LRBG_372_D_00059_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_372_D_00059_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_371_D_00163_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* 1 */ _1_Context_1;
  outC_Send_RBC_LRBG_371_D_00105_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* 1 */ Context_1;
  outC_Send_RBC_LRBG_371_D_00024_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::_L1 */ _L1;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::_L2 */ _L2;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::_L3 */ _L3;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::_L4 */ _L4;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::_L13 */ _L13;
} outC_RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude */
extern void RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::RBC_Sheet07_BijlmerAbcoude::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);

extern void RBC_Sheet07_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);

#endif /* _RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

