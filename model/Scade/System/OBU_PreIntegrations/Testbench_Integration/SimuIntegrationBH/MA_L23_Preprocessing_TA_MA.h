/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MA_L23_Preprocessing_TA_MA_H_
#define _MA_L23_Preprocessing_TA_MA_H_

#include "kcg_types.h"
#include "MA_Convert_P15_to_DistanceProfile_TA_MA.h"
#include "MoveMAAbsolute_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA::MA_L23_Preprocessing */
extern void MA_L23_Preprocessing_TA_MA(
  /* TA_MA::MA_L23_Preprocessing::p15 */ P015_OBU_T_TM *p15,
  /* TA_MA::MA_L23_Preprocessing::reset */ kcg_bool reset,
  /* TA_MA::MA_L23_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_MA::MA_L23_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::MA_L23_Preprocessing::MA */ MovementAuthority_t_TrackAtlasTypes *MA);

#endif /* _MA_L23_Preprocessing_TA_MA_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MA_L23_Preprocessing_TA_MA.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

