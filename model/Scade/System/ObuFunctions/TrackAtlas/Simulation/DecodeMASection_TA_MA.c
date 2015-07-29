/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DecodeMASection_TA_MA.h"

void DecodeMASection_reset_TA_MA(outC_DecodeMASection_TA_MA *outC)
{
}

/* TA_MA::DecodeMASection */
void DecodeMASection_TA_MA(
  /* TA_MA::DecodeMASection::P015_section_in */P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  outC_DecodeMASection_TA_MA *outC)
{
  P015_OBU_sectionlist_enum_T_TM noname;
  
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
    &outC->_L2,
    (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L1, P015_section_in);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&noname, &outC->_L1);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
    &outC->MA_section_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DecodeMASection_TA_MA.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

