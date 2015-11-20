/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Output_To_DMI_OutputManagement_H_
#define _Output_To_DMI_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* OutputManagement::Output_To_DMI::announcedLevel */ announcedLevel;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* OutputManagement::Output_To_DMI::Data_To_DMI_Ack */ Data_To_DMI_Ack;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* OutputManagement::Output_To_DMI::needsAckFromDriver */ rem_needsAckFromDriver;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Output_To_DMI_OutputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* OutputManagement::Output_To_DMI */
extern void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::announcedLevelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* OutputManagement::Output_To_DMI::isAvailableForUse */ kcg_bool isAvailableForUse,
  outC_Output_To_DMI_OutputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_To_DMI_reset_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_To_DMI_init_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Output_To_DMI_OutputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_DMI_OutputManagement.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

