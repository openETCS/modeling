/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData_H_
#define _TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData_H_

#include "kcg_types.h"
#include "TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::TrainCategoryIndex */ TrainCategoryIndex;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::AxleLoadIndex */ AxleLoadIndex;
  kcg_real /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::TrainLenght */ TrainLenght;
  kcg_real /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::MaxSpeed */ MaxSpeed;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::LoadingGougeIndex */ LoadingGougeIndex;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::AirtightIndex */ AirtightIndex;
  kcg_real /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::BrakePerc */ BrakePerc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* 1 */ _3_Context_1;
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* 1 */ _2_Context_1;
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* 1 */ _1_Context_1;
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L2 */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L3 */ _L3;
  NC_TRAIN /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L4 */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L5 */ _L5;
  M_BRAKEPERCT_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L6 */ _L6;
  V_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L7 */ _L7;
  M_AXLELOADCAT /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L8 */ _L8;
  M_AIRTIGHT /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L9 */ _L9;
  M_LOADINGGAUGE /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L10 */ _L10;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L11 */ _L11;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L12 */ _L12;
  kcg_real /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L13 */ _L13;
  kcg_real /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L14 */ _L14;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L15 */ _L15;
  kcg_int /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L16 */ _L16;
  kcg_real /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::_L17 */ _L17;
} outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter */
extern void TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::TrainData */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *TrainData,
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainDataInfo_Adapter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainDataInfo_Adapter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

