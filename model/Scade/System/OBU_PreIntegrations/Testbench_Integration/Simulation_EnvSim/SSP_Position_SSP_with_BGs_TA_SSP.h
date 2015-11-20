/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _SSP_Position_SSP_with_BGs_TA_SSP_H_
#define _SSP_Position_SSP_with_BGs_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP.h"
#include "SSP_Normalize_Profile_TA_SSP.h"
#include "SSP_Truncate_at_BG_TA_SSP.h"
#include "SSP_Correct_StartSection_TA_SSP.h"

/* =====================  no input structure  ====================== */


/* TA_SSP::SSP_Position_SSP_with_BGs */
extern void SSP_Position_SSP_with_BGs_TA_SSP(
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Position_SSP_with_BGs::LastProfile */StaticSpeedProfile_t_TrackAtlasTypes *LastProfile,
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileOut */StaticSpeedProfile_t_TrackAtlasTypes *ProfileOut,
  /* TA_SSP::SSP_Position_SSP_with_BGs::available */kcg_bool *available,
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileLoopOut */StaticSpeedProfile_t_TrackAtlasTypes *ProfileLoopOut);

#endif /* _SSP_Position_SSP_with_BGs_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Position_SSP_with_BGs_TA_SSP.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

