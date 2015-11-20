/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */
#ifndef _AGradient_SDM_GradientAcceleration_Pkg_H_
#define _AGradient_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "CalcA_Gradient_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_gradient_t_SDM_GradientAcceleration_types /* SDM_GradientAcceleration_Pkg::AGradient::A_gradient */ A_gradient;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_AGradient_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::AGradient */
extern void AGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::AGradient::TrainLocations */TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile_updated */kcg_bool GradientProfile_updated,
  /* SDM_GradientAcceleration_Pkg::AGradient::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::AGradient::targetCollection */TargetCollection_T_TargetManagement_types *targetCollection,
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC);

extern void AGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC);

#endif /* _AGradient_SDM_GradientAcceleration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** AGradient_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */

