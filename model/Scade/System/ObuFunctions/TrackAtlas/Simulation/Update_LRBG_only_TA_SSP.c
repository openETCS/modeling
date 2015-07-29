/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_only_TA_SSP.h"

void Update_LRBG_only_reset_TA_SSP(outC_Update_LRBG_only_TA_SSP *outC)
{
  /* 1 */ MoveSPSectionsToNewLRBGafter_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_SSP::Update_LRBG_only */
void Update_LRBG_only_TA_SSP(
  /* TA_SSP::Update_LRBG_only::SP_in */SSP_cat_t_TA_MRSP *SP_in,
  /* TA_SSP::Update_LRBG_only::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  outC_Update_LRBG_only_TA_SSP *outC)
{
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L2,
    TrainPosition_in);
  outC->_L34 = outC->_L2.LRBG.location.nominal;
  outC->_L35 = outC->_L2.prvLRBG.location.nominal;
  outC->_L36 = outC->_L34 - outC->_L35;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L1, SP_in);
  /* 1 */
  MoveSPSectionsToNewLRBGafter_TA_Lib_internal(
    &outC->_L1,
    outC->_L36,
    &outC->Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L3, &outC->Context_1.ProfileOut);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->new_profile_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_only_TA_SSP.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

