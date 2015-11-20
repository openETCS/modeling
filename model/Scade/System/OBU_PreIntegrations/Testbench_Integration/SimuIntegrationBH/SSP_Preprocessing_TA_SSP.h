/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SSP_Preprocessing_TA_SSP_H_
#define _SSP_Preprocessing_TA_SSP_H_

#include "kcg_types.h"
#include "MoveSSPSectionsAbsolute_TA_Lib_internal.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_SSP::SSP_Preprocessing */
extern void SSP_Preprocessing_TA_SSP(
  /* TA_SSP::SSP_Preprocessing::p27v1 */ P027V1_OBU_T_TM_baseline2 *p27v1,
  /* TA_SSP::SSP_Preprocessing::reset */ kcg_bool reset,
  /* TA_SSP::SSP_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_SSP::SSP_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::SSP */ StaticSpeedProfile_t_TrackAtlasTypes *SSP);

#endif /* _SSP_Preprocessing_TA_SSP_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Preprocessing_TA_SSP.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

