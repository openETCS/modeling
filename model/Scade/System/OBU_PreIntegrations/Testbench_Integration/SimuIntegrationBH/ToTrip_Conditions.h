/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ToTrip_Conditions_H_
#define _ToTrip_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToTrip::Condition2Trip */ Condition2Trip;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Conditions::ToTrip::Current_Level */ rem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToTrip_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToTrip */
extern void ToTrip_Conditions(
  /* Conditions::ToTrip::BG_In_Expected_List_In_SH */ kcg_bool BG_In_Expected_List_In_SH,
  /* Conditions::ToTrip::BG_In_Expected_List_In_SR */ kcg_bool BG_In_Expected_List_In_SR,
  /* Conditions::ToTrip::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToTrip::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Conditions::ToTrip::Driver_Select_SH */ kcg_bool Driver_Select_SH,
  /* Conditions::ToTrip::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  /* Conditions::ToTrip::Error_BG_System_Version */ kcg_bool Error_BG_System_Version,
  /* Conditions::ToTrip::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool Estimated_Front_End_Overpass_SR_Distance,
  /* Conditions::ToTrip::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* Conditions::ToTrip::Interface_To_National_System */ kcg_bool Interface_To_National_System,
  /* Conditions::ToTrip::Linked_BG_Pased_In_Wrong_Direction */ kcg_bool Linked_BG_Pased_In_Wrong_Direction,
  /* Conditions::ToTrip::Linking_Reaction_To_Trip */ kcg_bool Linking_Reaction_To_Trip,
  /* Conditions::ToTrip::List_BG_Related_To_SR_Empty */ kcg_bool List_BG_Related_To_SR_Empty,
  /* Conditions::ToTrip::MA_Available */ kcg_bool MA_Available,
  /* Conditions::ToTrip::National_Trip_Order */ kcg_bool National_Trip_Order,
  /* Conditions::ToTrip::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* Conditions::ToTrip::Override_Function_Former_Active */ kcg_bool Override_Function_Former_Active,
  /* Conditions::ToTrip::Stop_If_In_Shunting */ kcg_bool Stop_If_In_Shunting,
  /* Conditions::ToTrip::Stop_If_In_SR */ kcg_bool Stop_If_In_SR,
  /* Conditions::ToTrip::T_NVCONTACT_Overpass */ kcg_bool T_NVCONTACT_Overpass,
  /* Conditions::ToTrip::Train_Overpass_EOA_Antenna */ kcg_bool Train_Overpass_EOA_Antenna,
  /* Conditions::ToTrip::Train_Overpass_EOA_Front_End */ kcg_bool Train_Overpass_EOA_Front_End,
  /* Conditions::ToTrip::Train_Overpass_Former_EOA_Antenna */ kcg_bool Train_Overpass_Former_EOA_Antenna,
  /* Conditions::ToTrip::Trip_Order_Given_By_Balise */ kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToTrip::TripModeFromLevel */ kcg_bool TripModeFromLevel,
  outC_ToTrip_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToTrip_reset_Conditions(outC_ToTrip_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToTrip_init_Conditions(outC_ToTrip_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToTrip_Conditions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToTrip_Conditions.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

