/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:09:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_to_MRSP_to_DMI_TA_Export.h"

void MRSP_to_MRSP_to_DMI_reset_TA_Export(
  outC_MRSP_to_MRSP_to_DMI_TA_Export *outC)
{
}

/* TA_Export::MRSP_to_MRSP_to_DMI */
void MRSP_to_MRSP_to_DMI_TA_Export(
  inC_MRSP_to_MRSP_to_DMI_TA_Export *inC,
  outC_MRSP_to_MRSP_to_DMI_TA_Export *outC)
{
  kcg_int noname;
  
  outC->_L444 = inC->i;
  noname = outC->_L444;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L5, &inC->MRSP_in);
  outC->_L431 = outC->_L5.valid;
  outC->cont = outC->_L431;
  outC->_L432 = !outC->_L431;
  outC->_L420 = outC->_L5.MRS;
  outC->_L429 = 635;
  outC->_L430 = outC->_L420 == outC->_L429;
  outC->_L433 = outC->_L432 | outC->_L430;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(
    &outC->_L434,
    (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  if (outC->_L433) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L435, &outC->_L434);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L435, &outC->_L5);
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->MRSP_to_DMI, &outC->_L435);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_to_MRSP_to_DMI_TA_Export.c
** Generation date: 2015-09-04T14:09:24
*************************************************************$ */

