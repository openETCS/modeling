/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_SSP_Matrix_TA_SpeedProfiles.h"

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
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_matrix_updated */kcg_bool *SSP_matrix_updated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_matrix_out */SSP_matrix_t_TA_MRSP *SSP_matrix_out)
{
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[0], ASP);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[1], LX_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[2], MaxTrainSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[3], ModeRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[4], OverrideRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[5], PBD_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[6], SignalingRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[7], SSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[8], STM_MaxSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[9], STM_SystemSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&(*SSP_matrix_out)[10], TSR);
  *SSP_matrix_updated = SSP_updated;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_SSP_Matrix_TA_SpeedProfiles.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

