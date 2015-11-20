/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_
#define _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::seqNo */ seqNo;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
extern void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);

extern void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);

#endif /* _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

