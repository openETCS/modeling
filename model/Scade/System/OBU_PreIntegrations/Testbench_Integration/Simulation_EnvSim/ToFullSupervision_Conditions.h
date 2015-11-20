/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ToFullSupervision_Conditions_H_
#define _ToFullSupervision_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToFullSupervision::Condition25 */ Condition25;
  kcg_bool /* Conditions::ToFullSupervision::Condition31 */ Condition31;
  kcg_bool /* Conditions::ToFullSupervision::Condition32 */ Condition32;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Conditions::ToFullSupervision::Current_Level */ rem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToFullSupervision_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToFullSupervision */
extern void ToFullSupervision_Conditions(
  /* Conditions::ToFullSupervision::Current_Level */M_LEVEL Current_Level,
  /* Conditions::ToFullSupervision::Trip_Order_Given_By_Balise */kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToFullSupervision::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Conditions::ToFullSupervision::MA_SSP_Gradiant_Available */kcg_bool MA_SSP_Gradiant_Available,
  outC_ToFullSupervision_Conditions *outC);

extern void ToFullSupervision_reset_Conditions(
  outC_ToFullSupervision_Conditions *outC);

#endif /* _ToFullSupervision_Conditions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToFullSupervision_Conditions.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

