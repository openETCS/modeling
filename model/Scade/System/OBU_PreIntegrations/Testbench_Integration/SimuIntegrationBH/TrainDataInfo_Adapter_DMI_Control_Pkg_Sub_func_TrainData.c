/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.h"

#ifndef KCG_USER_DEFINED_INIT
void TrainDataInfo_Adapter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L17 = 0.0;
  outC->_L16 = 0;
  outC->_L15 = 0;
  outC->_L14 = 0.0;
  outC->_L13 = 0.0;
  outC->_L12 = 0;
  outC->_L11 = 0;
  outC->_L10 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9 = M_AIRTIGHT_Not_fitted;
  outC->_L8 = M_AXLELOADCAT_A;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3 = 0;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = 0;
  outC->_L1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.l_train = 0;
  outC->_L1.m_brakeperct = 0;
  outC->_L1.v_maxTrain = 0;
  outC->_L1.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->BrakePerc = 0.0;
  outC->AirtightIndex = 0;
  outC->LoadingGougeIndex = 0;
  outC->MaxSpeed = 0.0;
  outC->TrainLenght = 0.0;
  outC->AxleLoadIndex = 0;
  outC->TrainCategoryIndex = 0;
  /* 1 */
  TrainCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->_3_Context_1);
  /* 1 */
  AxleLoadCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->_2_Context_1);
  /* 1 */
  LoadingGougeInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->_1_Context_1);
  /* 1 */
  AirtightManagerInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainDataInfo_Adapter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  /* 1 */
  TrainCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->_3_Context_1);
  /* 1 */
  AxleLoadCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->_2_Context_1);
  /* 1 */
  LoadingGougeInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->_1_Context_1);
  /* 1 */
  AirtightManagerInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter */
void TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter::TrainData */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *TrainData,
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  static T_internal_Type_Obu_BasicTypes_Pkg noname;
  static kcg_bool _1_noname;
  
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L1, TrainData);
  outC->_L6 = outC->_L1.m_brakeperct;
  outC->_L17 = (kcg_real) outC->_L6;
  outC->BrakePerc = outC->_L17;
  outC->_L9 = outC->_L1.m_airTight;
  /* 1 */
  AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L9,
    &outC->Context_1);
  outC->_L16 = outC->Context_1.airtightIndex;
  outC->AirtightIndex = outC->_L16;
  outC->_L10 = outC->_L1.m_loadingGauge;
  /* 1 */
  LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L10,
    &outC->_1_Context_1);
  outC->_L15 = outC->_1_Context_1.loadingGougeIndex;
  outC->LoadingGougeIndex = outC->_L15;
  outC->_L7 = outC->_L1.v_maxTrain;
  outC->_L14 = (kcg_real) outC->_L7;
  outC->MaxSpeed = outC->_L14;
  outC->_L5 = outC->_L1.l_train;
  outC->_L13 = (kcg_real) outC->_L5;
  outC->TrainLenght = outC->_L13;
  outC->_L8 = outC->_L1.m_axleLoad;
  /* 1 */
  AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L8,
    &outC->_2_Context_1);
  outC->_L12 = outC->_2_Context_1.axelLoadIndex;
  outC->AxleLoadIndex = outC->_L12;
  outC->_L4 = outC->_L1.trainCategory;
  /* 1 */
  TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
    outC->_L4,
    &outC->_3_Context_1);
  outC->_L11 = outC->_3_Context_1.TrainCatIndex;
  outC->TrainCategoryIndex = outC->_L11;
  outC->_L3 = outC->_L1.systemTime;
  outC->_L2 = outC->_L1.valid;
  noname = outC->_L3;
  _1_noname = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

