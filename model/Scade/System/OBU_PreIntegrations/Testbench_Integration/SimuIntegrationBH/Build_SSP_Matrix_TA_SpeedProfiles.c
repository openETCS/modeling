/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_SSP_Matrix_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::Build_SSP_Matrix */
void Build_SSP_Matrix_TA_SpeedProfiles(
  /* TA_SpeedProfiles::Build_SSP_Matrix::ASP */ SSP_cat_t_TA_MRSP *ASP,
  /* TA_SpeedProfiles::Build_SSP_Matrix::LX_SR */ SSP_cat_t_TA_MRSP *LX_SR,
  /* TA_SpeedProfiles::Build_SSP_Matrix::MaxTrainSpeed */ SSP_cat_t_TA_MRSP *MaxTrainSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::ModeRelated */ SSP_cat_t_TA_MRSP *ModeRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::OverrideRelated */ SSP_cat_t_TA_MRSP *OverrideRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::PBD_SR */ SSP_cat_t_TA_MRSP *PBD_SR,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SignalingRelated */ SSP_cat_t_TA_MRSP *SignalingRelated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP */ SSP_cat_t_TA_MRSP *SSP,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_updated */ kcg_bool SSP_updated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::STM_MaxSpeed */ SSP_cat_t_TA_MRSP *STM_MaxSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::STM_SystemSpeed */ SSP_cat_t_TA_MRSP *STM_SystemSpeed,
  /* TA_SpeedProfiles::Build_SSP_Matrix::TSR */ SSP_cat_t_TA_MRSP *TSR,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_matrix_updated */ kcg_bool *SSP_matrix_updated,
  /* TA_SpeedProfiles::Build_SSP_Matrix::SSP_matrix_out */ SSP_matrix_t_TA_MRSP *SSP_matrix_out)
{
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L1 */
  static SSP_cat_t_TA_MRSP _L1;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L2 */
  static SSP_cat_t_TA_MRSP _L2;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L3 */
  static SSP_cat_t_TA_MRSP _L3;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L4 */
  static SSP_cat_t_TA_MRSP _L4;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L5 */
  static SSP_cat_t_TA_MRSP _L5;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L6 */
  static SSP_cat_t_TA_MRSP _L6;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L7 */
  static SSP_cat_t_TA_MRSP _L7;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L8 */
  static SSP_cat_t_TA_MRSP _L8;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L9 */
  static SSP_cat_t_TA_MRSP _L9;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L10 */
  static SSP_cat_t_TA_MRSP _L10;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L11 */
  static SSP_cat_t_TA_MRSP _L11;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L12 */
  static SSP_matrix_t_TA_MRSP _L12;
  /* TA_SpeedProfiles::Build_SSP_Matrix::_L13 */
  static kcg_bool _L13;
  
  kcg_copy_SSP_cat_t_TA_MRSP(&_L1, ASP);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L2, LX_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L3, MaxTrainSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L4, ModeRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L5, OverrideRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L6, PBD_SR);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L7, SignalingRelated);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L8, SSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L9, STM_MaxSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L10, STM_SystemSpeed);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L11, TSR);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[0], &_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[1], &_L2);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[2], &_L3);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[3], &_L4);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[4], &_L5);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[5], &_L6);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[6], &_L7);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[7], &_L8);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[8], &_L9);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[9], &_L10);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L12[10], &_L11);
  kcg_copy_SSP_matrix_t_TA_MRSP(SSP_matrix_out, &_L12);
  _L13 = SSP_updated;
  *SSP_matrix_updated = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_SSP_Matrix_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

