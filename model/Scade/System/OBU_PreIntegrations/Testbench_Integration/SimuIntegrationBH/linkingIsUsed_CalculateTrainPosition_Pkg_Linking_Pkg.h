/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::linkingIsUsed */ linkingIsUsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L7 */ _L7;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L6 */ _L6;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L11 */ _L11;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L10 */ _L10;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L9 */ _L9;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
extern void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */ kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

