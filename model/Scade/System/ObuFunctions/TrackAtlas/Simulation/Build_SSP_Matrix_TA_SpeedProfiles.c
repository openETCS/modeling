/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_SSP_Matrix_TA_SpeedProfiles.h"

void Build_SSP_Matrix_reset_TA_SpeedProfiles(
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC)
{
}

/* TA_SpeedProfiles::Build_SSP_Matrix */
void Build_SSP_Matrix_TA_SpeedProfiles(
  /* TA_SpeedProfiles::Build_SSP_Matrix::ASP */SSP_cat_t_TA_MRSP *ASP,
  /* TA_SpeedProfiles::Build_SSP_Matrix::LX_SR */SSP_cat_t_TA_MRSP *LX_SR,
  /* TA_SpeedProfiles::Build_SSP_Matrix::MaxTrainSpeed */SSP_cat_t_TA_MRSP *MaxTrainSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::ModeRelated */SSP_cat_t_TA_MRSP *ModeRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::OverrideRelated */SSP_cat_t_TA_MRSP *OverrideRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::PBD_SR */SSP_cat_t_TA_MRSP *PBD_SR,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SignalingRelated */SSP_cat_t_TA_MRSP *SignalingRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP */SSP_cat_t_TA_MRSP *SSP,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_updated */kcg_bool SSP_updated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::STM_MaxSpeed */SSP_cat_t_TA_MRSP *STM_MaxSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::STM_SystemSpeed */SSP_cat_t_TA_MRSP *STM_SystemSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::TSR */SSP_cat_t_TA_MRSP *TSR,
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC)
{
  outC->_L13 = SSP_updated;
  outC->SSP_matrix_updated = outC->_L13;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L1, ASP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L2, LX_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L3, MaxTrainSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L4, ModeRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L5, OverrideRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L6, PBD_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L7, SignalingRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L8, SSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L9, STM_MaxSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L10, STM_SystemSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L11, TSR);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[0], &outC->_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[1], &outC->_L2);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[2], &outC->_L3);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[3], &outC->_L4);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[4], &outC->_L5);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[5], &outC->_L6);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[6], &outC->_L7);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[7], &outC->_L8);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[8], &outC->_L9);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[9], &outC->_L10);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L12[10], &outC->_L11);
  kcg_copy_SSP_matrix_t_TA_MRSP(&outC->SSP_matrix_out, &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_SSP_Matrix_TA_SpeedProfiles.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

