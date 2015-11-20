/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_
#define _AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::axelLoadIndex */ axelLoadIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_AXLELOADCAT /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L5 */ _L5;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L6 */ _L6;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L7 */ _L7;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L19 */ _L19;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L18 */ _L18;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L17 */ _L17;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L16 */ _L16;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L15 */ _L15;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L24 */ _L24;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L22 */ _L22;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::_L20 */ _L20;
} outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter */
extern void AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::axleLoadEnum */ M_AXLELOADCAT axleLoadEnum,
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AxleLoadCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AxleLoadCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

