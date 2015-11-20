/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_
#define _AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::airtightIndex */ airtightIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_AIRTIGHT /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::_L4 */ _L4;
} outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter */
extern void AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter::airtightEnum */ M_AIRTIGHT airtightEnum,
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AirtightManagerInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AirtightManagerInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

