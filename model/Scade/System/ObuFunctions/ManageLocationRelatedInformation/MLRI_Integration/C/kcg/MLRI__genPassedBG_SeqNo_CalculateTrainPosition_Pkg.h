/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_
#define _MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "MLRI__indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::seqNo */ seqNo;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
extern void MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */kcg_bool reset,
  MLRI__outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);

extern void MLRI__genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);

#endif /* _MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

