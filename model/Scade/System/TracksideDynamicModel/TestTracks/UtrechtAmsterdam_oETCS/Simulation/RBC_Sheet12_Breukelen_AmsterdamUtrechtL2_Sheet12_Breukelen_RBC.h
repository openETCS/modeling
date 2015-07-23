/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC_H_
#define _RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_417_D_00052_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"
#include "Send_RBC_LRBG_418_D_00204_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"
#include "Send_RBC_LRBG_419_D_00053_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"
#include "Send_RBC_LRBG_476_D_00251_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_476_D_00251_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* 1 */ _3_Context_1;
  outC_Send_RBC_LRBG_419_D_00053_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_418_D_00204_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* 1 */ _1_Context_1;
  outC_Send_RBC_LRBG_417_D_00052_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::_L1 */ _L1;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::_L2 */ _L2;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::_L3 */ _L3;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::_L4 */ _L4;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::_L13 */ _L13;
} outC_RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen */
extern void RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC *outC);

extern void RBC_Sheet12_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  outC_RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC *outC);

#endif /* _RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

