/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC_H_
#define _RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_390_D_00067_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"
#include "Send_RBC_LRBG_391_D_00371_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"
#include "Send_RBC_LRBG_393_D_00064_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"
#include "Send_RBC_LRBG_396_D_00077_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_396_D_00077_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* 1 */ _3_Context_1;
  outC_Send_RBC_LRBG_393_D_00064_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_391_D_00371_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* 1 */ _1_Context_1;
  outC_Send_RBC_LRBG_390_D_00067_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::_L1 */ _L1;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::_L2 */ _L2;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::_L3 */ _L3;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::_L4 */ _L4;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::_L13 */ _L13;
} outC_RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen */
extern void RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::RBC_Sheet09_AbcoudeBreukelen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC *outC);

extern void RBC_Sheet09_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  outC_RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC *outC);

#endif /* _RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

