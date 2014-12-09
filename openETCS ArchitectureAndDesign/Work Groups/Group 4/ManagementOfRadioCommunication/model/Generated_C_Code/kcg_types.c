/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_types.h"

#ifdef MoRC_kcg_use_validRadioNetworkID_Type
kcg_bool MoRC_kcg_comp_validRadioNetworkID_Type(
  MoRC_validRadioNetworkID_Type *kcg_c1,
  MoRC_validRadioNetworkID_Type *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->radioNetworkID == kcg_c2->radioNetworkID;
  kcg_equ = kcg_equ && kcg_c1->valid == kcg_c2->valid;
  return kcg_equ;
}
#endif /* MoRC_kcg_use_validRadioNetworkID_Type */

#ifdef MoRC_kcg_use_orderToContactAnRBC_Type
kcg_bool MoRC_kcg_comp_orderToContactAnRBC_Type(
  MoRC_orderToContactAnRBC_Type *kcg_c1,
  MoRC_orderToContactAnRBC_Type *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->appliesAlsoToSleepingUnits ==
    kcg_c2->appliesAlsoToSleepingUnits;
  kcg_equ = kcg_equ && kcg_c1->actionToBePerformed ==
    kcg_c2->actionToBePerformed;
  kcg_equ = kcg_equ && kcg_c1->telephoneNoOfTheRBC ==
    kcg_c2->telephoneNoOfTheRBC;
  kcg_equ = kcg_equ && kcg_c1->rbc_id == kcg_c2->rbc_id;
  kcg_equ = kcg_equ && kcg_c1->valid == kcg_c2->valid;
  return kcg_equ;
}
#endif /* MoRC_kcg_use_orderToContactAnRBC_Type */

#ifdef MoRC_kcg_use_mobileSWCmd_Type
kcg_bool MoRC_kcg_comp_mobileSWCmd_Type(
  MoRC_mobileSWCmd_Type *kcg_c1,
  MoRC_mobileSWCmd_Type *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->radioNetworkID == kcg_c2->radioNetworkID;
  kcg_equ = kcg_equ && kcg_c1->action == kcg_c2->action;
  kcg_equ = kcg_equ && kcg_c1->valid == kcg_c2->valid;
  return kcg_equ;
}
#endif /* MoRC_kcg_use_mobileSWCmd_Type */

#ifdef MoRC_kcg_use_mobileHWCmd_Type
kcg_bool MoRC_kcg_comp_mobileHWCmd_Type(
  MoRC_mobileHWCmd_Type *kcg_c1,
  MoRC_mobileHWCmd_Type *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->radioNetworkID == kcg_c2->radioNetworkID;
  kcg_equ = kcg_equ && kcg_c1->action == kcg_c2->action;
  kcg_equ = kcg_equ && kcg_c1->valid == kcg_c2->valid;
  return kcg_equ;
}
#endif /* MoRC_kcg_use_mobileHWCmd_Type */

#ifdef MoRC_kcg_use_safeRadioConnectionStatusValid_Type
kcg_bool MoRC_kcg_comp_safeRadioConnectionStatusValid_Type(
  MoRC_safeRadioConnectionStatusValid_Type *kcg_c1,
  MoRC_safeRadioConnectionStatusValid_Type *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->status == kcg_c2->status;
  kcg_equ = kcg_equ && kcg_c1->valid == kcg_c2->valid;
  return kcg_equ;
}
#endif /* MoRC_kcg_use_safeRadioConnectionStatusValid_Type */

#ifdef MoRC_kcg_use_mobileSWStatus_Type
kcg_bool MoRC_kcg_comp_mobileSWStatus_Type(
  MoRC_mobileSWStatus_Type *kcg_c1,
  MoRC_mobileSWStatus_Type *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->settingUpConnectionHasFailed ==
    kcg_c2->settingUpConnectionHasFailed;
  kcg_equ = kcg_equ && kcg_c1->registeredRadioNetworkID ==
    kcg_c2->registeredRadioNetworkID;
  kcg_equ = kcg_equ && kcg_c1->connectionStatus == kcg_c2->connectionStatus;
  kcg_equ = kcg_equ && kcg_c1->mobileHW_available == kcg_c2->mobileHW_available;
  kcg_equ = kcg_equ && kcg_c1->valid == kcg_c2->valid;
  return kcg_equ;
}
#endif /* MoRC_kcg_use_mobileSWStatus_Type */

#ifdef MoRC_kcg_use_mobileHWStatus_Type
kcg_bool MoRC_kcg_comp_mobileHWStatus_Type(
  MoRC_mobileHWStatus_Type *kcg_c1,
  MoRC_mobileHWStatus_Type *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->settingUpConnectionHasFailed ==
    kcg_c2->settingUpConnectionHasFailed;
  kcg_equ = kcg_equ && kcg_c1->connectionStatus == kcg_c2->connectionStatus;
  kcg_equ = kcg_equ && kcg_c1->valid == kcg_c2->valid;
  return kcg_equ;
}
#endif /* MoRC_kcg_use_mobileHWStatus_Type */

/* $************* KCG Version 6.4 beta3 (build i9) **************
** kcg_types.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

