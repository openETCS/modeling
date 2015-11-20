/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _manageTIU_input_input_from_TIU_API_Pkg_H_
#define _manageTIU_input_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"
#include "mergeTIU_Info_input_from_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
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
  /* input_from_TIU_API_Pkg::manageTIU_input::inTIUfromAPI */TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* input_from_TIU_API_Pkg::manageTIU_input::evc_trainData */trainData_T_TIU_Types_Pkg *evc_trainData,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);

extern void manageTIU_input_reset_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);

#endif /* _manageTIU_input_input_from_TIU_API_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTIU_input_input_from_TIU_API_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

