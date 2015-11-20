/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Output_Mode_Level_To_Use_OutputManagement_H_
#define _Output_Mode_Level_To_Use_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* OutputManagement::Output_Mode_Level_To_Use::Compatible_Mode_And_Level */ Compatible_Mode_And_Level;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* OutputManagement::Output_Mode_Level_To_Use::currentMode */ rem_currentMode;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Output_Mode_Level_To_Use_OutputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* OutputManagement::Output_Mode_Level_To_Use */
extern void Output_Mode_Level_To_Use_OutputManagement(
  /* OutputManagement::Output_Mode_Level_To_Use::next_level */ M_LEVEL next_level,
  /* OutputManagement::Output_Mode_Level_To_Use::currentMode */ T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* OutputManagement::Output_Mode_Level_To_Use::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_Mode_Level_To_Use::isNewLevel */ kcg_bool isNewLevel,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_Mode_Level_To_Use_reset_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_Mode_Level_To_Use_init_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Output_Mode_Level_To_Use_OutputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Output_Mode_Level_To_Use_OutputManagement.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

