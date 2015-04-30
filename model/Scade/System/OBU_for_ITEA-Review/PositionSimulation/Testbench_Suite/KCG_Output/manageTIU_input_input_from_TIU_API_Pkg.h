/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _manageTIU_input_input_from_TIU_API_Pkg_H_
#define _manageTIU_input_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "mergeTIU_Info_input_from_TIU_API_Pkg.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* input_from_TIU_API_Pkg::manageTIU_input::outTrainData */ outTrainData;
  TIU_trainStatus_T_TIU_Types_Pkg /* input_from_TIU_API_Pkg::manageTIU_input::outTIUStatus */ outTIUStatus;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* input_from_TIU_API_Pkg::manageTIU_input::outTIUCurrentInfo */ outTIUCurrentInfo;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageTIU_input_input_from_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::manageTIU_input */
extern void manageTIU_input_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::manageTIU_input::inTIUfromAPI */ TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* input_from_TIU_API_Pkg::manageTIU_input::inReset */ kcg_bool inReset,
  /* input_from_TIU_API_Pkg::manageTIU_input::validatedTrainDataDMI */ trainData_T_TIU_Types_Pkg *validatedTrainDataDMI,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);

extern void manageTIU_input_reset_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);
extern void manageTIU_input_init_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);

#endif /* _manageTIU_input_input_from_TIU_API_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageTIU_input_input_from_TIU_API_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

