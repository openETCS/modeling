/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Output_Mode_Level_To_Use_OutputManagement_H_
#define _Output_Mode_Level_To_Use_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* OutputManagement::Output_Mode_Level_To_Use::next_level */M_LEVEL next_level,
  /* OutputManagement::Output_Mode_Level_To_Use::currentMode */T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* OutputManagement::Output_Mode_Level_To_Use::Level_Mode_Compatible */kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_Mode_Level_To_Use::isNewLevel */kcg_bool isNewLevel,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);

extern void Output_Mode_Level_To_Use_reset_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);

#endif /* _Output_Mode_Level_To_Use_OutputManagement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_Mode_Level_To_Use_OutputManagement.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

