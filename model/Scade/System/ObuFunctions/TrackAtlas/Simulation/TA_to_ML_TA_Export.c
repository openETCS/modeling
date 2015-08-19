/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TA_to_ML_TA_Export.h"

void TA_to_ML_reset_TA_Export(outC_TA_to_ML_TA_Export *outC)
{
}

/* TA_Export::TA_to_ML */
void TA_to_ML_TA_Export(outC_TA_to_ML_TA_Export *outC)
{
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L1,
    (DataForModeAndLevel_t_TrackAtlasTypes *) &DEFAULT_to_ML_TA_Export);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->to_ML, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TA_to_ML_TA_Export.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

