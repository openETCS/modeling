/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Kv_intConstructor_SDMConversionModelPkg_H_
#define _Kv_intConstructor_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"
#include "Kv_intSetIterator_SDMConversionModelPkg.h"
#include "Kv_intIterator_SDMConversionModelPkg.h"
#include "Kv_intVectorMapper_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMConversionModelPkg::Kv_intConstructor */
extern void Kv_intConstructor_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intConstructor::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::Kv_intConstructor::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::Kv_intConstructor::A_ebmax */ A_internal_Type_Obu_BasicTypes_Pkg A_ebmax,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_em */ av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intConstructor::A_brake_safe */ av_MergedMap_t_SDMConversionModelPkg *A_brake_safe);

#endif /* _Kv_intConstructor_SDMConversionModelPkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intConstructor_SDMConversionModelPkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

