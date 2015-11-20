/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToFullSupervision_Conditions.h"

void ToFullSupervision_reset_Conditions(outC_ToFullSupervision_Conditions *outC)
{
  outC->init = kcg_true;
}

/* Conditions::ToFullSupervision */
void ToFullSupervision_Conditions(
  /* Conditions::ToFullSupervision::Current_Level */M_LEVEL Current_Level,
  /* Conditions::ToFullSupervision::Trip_Order_Given_By_Balise */kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToFullSupervision::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Conditions::ToFullSupervision::MA_SSP_Gradiant_Available */kcg_bool MA_SSP_Gradiant_Available,
  outC_ToFullSupervision_Conditions *outC)
{
  static kcg_bool tmp2;
  static M_LEVEL tmp1;
  static kcg_bool tmp;
  /* Conditions::ToFullSupervision::FS_Data_Condition */
  static kcg_bool FS_Data_Condition;
  
  FS_Data_Condition = ((*Mode_Profile_On_Board).Mode ==
      No_Profile_Level_And_Mode_Types_Pkg) & MA_SSP_Gradiant_Available;
  switch (Current_Level) {
    case M_LEVEL_Level_1 :
      tmp2 = kcg_true;
      break;
    case M_LEVEL_Level_2 :
      tmp2 = kcg_true;
      break;
    case M_LEVEL_Level_3 :
      tmp2 = kcg_true;
      break;
    
    default :
      tmp2 = kcg_false;
  }
  if (outC->init) {
    outC->init = kcg_false;
    tmp1 = M_LEVEL_Level_0;
  }
  else {
    tmp1 = outC->rem_Current_Level;
  }
  switch (tmp1) {
    case M_LEVEL_Level_0 :
      tmp = kcg_true;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      tmp = kcg_true;
      break;
    
    default :
      tmp = kcg_false;
  }
  outC->Condition25 = tmp2 & tmp & FS_Data_Condition;
  outC->Condition32 = (Current_Level == M_LEVEL_Level_1) &
    !Trip_Order_Given_By_Balise & FS_Data_Condition;
  switch (Current_Level) {
    case M_LEVEL_Level_2 :
      tmp = kcg_true;
      break;
    case M_LEVEL_Level_3 :
      tmp = kcg_true;
      break;
    
    default :
      tmp = kcg_false;
  }
  outC->Condition31 = tmp & FS_Data_Condition;
  outC->rem_Current_Level = Current_Level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToFullSupervision_Conditions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

