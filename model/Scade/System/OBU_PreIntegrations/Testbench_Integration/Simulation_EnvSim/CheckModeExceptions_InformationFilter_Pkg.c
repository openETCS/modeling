/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckModeExceptions_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::CheckModeExceptions */
kcg_bool CheckModeExceptions_InformationFilter_Pkg(
  /* InformationFilter_Pkg::CheckModeExceptions::inAction */ModeDecisionTableActionKind_DataDictionary_Pkg inAction)
{
  /* InformationFilter_Pkg::CheckModeExceptions::outAccept */
  static kcg_bool outAccept;
  
  switch (inAction) {
    case MD_Invalid_DataDictionary_Pkg :
      outAccept = kcg_false;
      break;
    case MD_Accept_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_Reject_DataDictionary_Pkg :
      outAccept = kcg_false;
      break;
    case MD_NotRelevant_DataDictionary_Pkg :
      outAccept = kcg_false;
      break;
    case MD_01IfFollowingExitTRMode_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_02IfCabActive_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_03StoreRBCIDAndPhone_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_04IfValidTrainDataStored_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_05OnlyLevelTransitionAnnouncements_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_06RejectIfOverrideActive_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_07AcceptImmediateAndConditionalLevelTransitionOrder_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_08NullDistanceRBCTransition_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_09MaxSafeFrontWithinSupervision_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_0204Accept_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    case MD_0105Accept_DataDictionary_Pkg :
      outAccept = kcg_true;
      break;
    
  }
  return outAccept;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckModeExceptions_InformationFilter_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

