/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _SoM_NTC_SN_SoMProcedure_Pkg_H_
#define _SoM_NTC_SN_SoMProcedure_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SoMProcedure_Pkg::SoM_NTC_SN::start_ack_to_TIU */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_Level_NTC_and_Mode_SN /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */ Level_NTC_and_Mode_SN_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SoM_NTC_SN_SoMProcedure_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SoMProcedure_Pkg::SoM_NTC_SN */
extern void SoM_NTC_SN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_NTC_SN::Status_Mode_Change_from_Level_and_Mode_Management */T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC);

extern void SoM_NTC_SN_reset_SoMProcedure_Pkg(
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC);

#endif /* _SoM_NTC_SN_SoMProcedure_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SoM_NTC_SN_SoMProcedure_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

