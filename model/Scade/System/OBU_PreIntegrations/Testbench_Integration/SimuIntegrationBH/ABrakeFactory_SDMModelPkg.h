/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ABrakeFactory_SDMModelPkg_H_
#define _ABrakeFactory_SDMModelPkg_H_

#include "kcg_types.h"
#include "LimitToReducedAdhesion_SDMModelPkg.h"
#include "brakeBuildUp_SDMConversionModelPkg.h"
#include "A_brake_safe_SDMConversionModelPkg.h"
#include "brakePercentToABrake_SDMConversionModelPkg.h"
#include "InflateABrakeSafe_SDMConversionModelPkg.h"
#include "InflateABrakeService_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMModelPkg::ABrakeFactory */
extern void ABrakeFactory_SDMModelPkg(
  /* SDMModelPkg::ABrakeFactory::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::ABrakeFactory::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMModelPkg::ABrakeFactory::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* SDMModelPkg::ABrakeFactory::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::ABrakeFactory::aBrakeService */ ASafe_T_CalcBrakingCurves_types *aBrakeService);

#endif /* _ABrakeFactory_SDMModelPkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ABrakeFactory_SDMModelPkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

