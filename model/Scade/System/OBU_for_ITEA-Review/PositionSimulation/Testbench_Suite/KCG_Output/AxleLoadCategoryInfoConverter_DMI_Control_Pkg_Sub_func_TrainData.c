/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter */
kcg_int AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter::axleLoadEnum */ M_AXLELOADCAT axleLoadEnum)
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

