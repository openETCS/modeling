/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DecodeMASection_TA_MA.h"

/* TA_MA::DecodeMASection */
void DecodeMASection_TA_MA(
  /* TA_MA::DecodeMASection::P015_section_in */P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  /* TA_MA::DecodeMASection::MA_section_out */MovementAuthoritySection_t_TrackAtlasTypes *MA_section_out)
{
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
    MA_section_out,
    (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DecodeMASection_TA_MA.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

