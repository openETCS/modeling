/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _CalcBrakeCmd_SDM_Commands_Pkg_H_
#define _CalcBrakeCmd_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Brake_command_T_TIU_Types_Pkg /* SDM_Commands_Pkg::CalcBrakeCmd::brakeCmd */ brakeCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SDM_Commands_Pkg::CalcBrakeCmd::trigEB */ trigEB;
  kcg_bool /* SDM_Commands_Pkg::CalcBrakeCmd::trigSB */ trigSB;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CalcBrakeCmd_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcBrakeCmd */
extern void CalcBrakeCmd_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcBrakeCmd::in_sdmCmd */SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcBrakeCmd::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcBrakeCmd::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Commands_Pkg::CalcBrakeCmd::TrainData_int */trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC);

extern void CalcBrakeCmd_reset_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC);

#endif /* _CalcBrakeCmd_SDM_Commands_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcBrakeCmd_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

