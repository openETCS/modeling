/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

#ifndef KCG_USER_DEFINED_INIT
void TrainCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->TrainCatIndex = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter */
void TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter::TrainCatEnum */ NC_TRAIN TrainCatEnum,
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L1 = TrainCatEnum;
  outC->_L3 = 2;
  outC->_L4 = 3;
  outC->_L5 = 4;
  outC->_L6 = 1;
  switch (outC->_L1) {
    case NC_TRAIN_Passenger_train :
      outC->_L2 = outC->_L3;
      break;
    case NC_TRAIN_Freight_train_braked_in_P_position :
      outC->_L2 = outC->_L4;
      break;
    case NC_TRAIN_Freight_train_braked_in_G_position :
      outC->_L2 = outC->_L5;
      break;
    
    default :
      outC->_L2 = outC->_L6;
  }
  outC->TrainCatIndex = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

