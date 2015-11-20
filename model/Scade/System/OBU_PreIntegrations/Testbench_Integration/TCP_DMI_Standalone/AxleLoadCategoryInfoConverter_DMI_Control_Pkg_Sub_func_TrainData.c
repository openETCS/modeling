/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter */
kcg_int AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::axleLoadEnum */M_AXLELOADCAT axleLoadEnum)
{
  /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::axelLoadIndex */ kcg_int axelLoadIndex;
  
  switch (axleLoadEnum) {
    case M_AXLELOADCAT_A :
      axelLoadIndex = 1;
      break;
    case M_AXLELOADCAT_HS17 :
      axelLoadIndex = 2;
      break;
    case M_AXLELOADCAT_B1 :
      axelLoadIndex = 3;
      break;
    case M_AXLELOADCAT_B2 :
      axelLoadIndex = 4;
      break;
    case M_AXLELOADCAT_C2 :
      axelLoadIndex = 5;
      break;
    case M_AXLELOADCAT_C3 :
      axelLoadIndex = 6;
      break;
    case M_AXLELOADCAT_C4 :
      axelLoadIndex = 7;
      break;
    case M_AXLELOADCAT_D2 :
      axelLoadIndex = 8;
      break;
    case M_AXLELOADCAT_D3 :
      axelLoadIndex = 9;
      break;
    case M_AXLELOADCAT_D4 :
      axelLoadIndex = 10;
      break;
    case M_AXLELOADCAT_D4XL :
      axelLoadIndex = 11;
      break;
    case M_AXLELOADCAT_E4 :
      axelLoadIndex = 12;
      break;
    
    default :
      axelLoadIndex = 13;
  }
  return axelLoadIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

