/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calc_Distance_from_LRBG_TA_Gradient.h"

void Calc_Distance_from_LRBG_reset_TA_Gradient(
  outC_Calc_Distance_from_LRBG_TA_Gradient *outC)
{
  /* 1 */ Trunc_GP_at_BG_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Gradient::Calc_Distance_from_LRBG */
void Calc_Distance_from_LRBG_TA_Gradient(
  inC_Calc_Distance_from_LRBG_TA_Gradient *inC,
  outC_Calc_Distance_from_LRBG_TA_Gradient *outC)
{
  outC->_L4 = kcg_true;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, &inC->ProfileIn);
  outC->_L2 = inC->pos_LRBG;
  /* 1 */
  Trunc_GP_at_BG_TA_Lib_internal(
    &outC->_L1,
    outC->_L2,
    outC->_L4,
    &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L3,
    &outC->Context_1.ProfileOut);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileLoopOut, &outC->_L1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Calc_Distance_from_LRBG_TA_Gradient.c
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */

