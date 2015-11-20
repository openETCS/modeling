/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _LimitToReducedAdhesion_SDMModelPkg_H_
#define _LimitToReducedAdhesion_SDMModelPkg_H_

#include "kcg_types.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMModelPkg::LimitToReducedAdhesion */
extern void LimitToReducedAdhesion_SDMModelPkg(
  /* SDMModelPkg::LimitToReducedAdhesion::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::LimitToReducedAdhesion::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::LimitToReducedAdhesion::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMModelPkg::LimitToReducedAdhesion::A_brake_safe_reduced */ ASafe_T_CalcBrakingCurves_types *A_brake_safe_reduced);

#endif /* _LimitToReducedAdhesion_SDMModelPkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LimitToReducedAdhesion_SDMModelPkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

