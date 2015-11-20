/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MoveMAAbsolute_TA_Lib_internal_H_
#define _MoveMAAbsolute_TA_Lib_internal_H_

#include "kcg_types.h"
#include "MoveMAAbsolute_Loop_TA_Lib_internal.h"
#include "Move_DP_or_OL_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Lib_internal::MoveMAAbsolute */
extern void MoveMAAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute::ProfileIn */ MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute::ProfileOut */ MovementAuthority_t_TrackAtlasTypes *ProfileOut);

#endif /* _MoveMAAbsolute_TA_Lib_internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MoveMAAbsolute_TA_Lib_internal.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

