/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
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
  /* TA_Export::MRSP_to_MRSP_to_DMI::i */kcg_int i,
  /* TA_Export::MRSP_to_MRSP_to_DMI::MRSP_in */MRSP_section_t_TrackAtlasTypes *MRSP_in,
  outC_MRSP_to_MRSP_to_DMI_TA_Export *outC)
{
  kcg_int noname;
  
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L5, MRSP_in);
  outC->_L429 = 635;
  outC->_L420 = outC->_L5.MRS;
  outC->_L430 = outC->_L429 == outC->_L420;
  outC->_L447 = 0;
  if (outC->_L430) {
    outC->_L446 = outC->_L447;
  }
  else {
    outC->_L446 = outC->_L420;
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L448, &outC->_L5);
  if (kcg_true) {
    outC->_L448.MRS = outC->_L446;
  }
  outC->_L444 = i;
  noname = outC->_L444;
  outC->_L431 = outC->_L5.valid;
  outC->cont = outC->_L431;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->MRSP_to_DMI, &outC->_L448);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_to_MRSP_to_DMI_TA_Export.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

