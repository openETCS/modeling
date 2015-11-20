/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_reduction_TA_Export.h"

/* TA_Export::MRSP_reduction */
void MRSP_reduction_TA_Export(
  /* TA_Export::MRSP_reduction::i */kcg_int i,
  /* TA_Export::MRSP_reduction::acc */MRSP_reduction_acc_TA_Export *acc,
  /* TA_Export::MRSP_reduction::MRSP */MRSP_Profile_t_TrackAtlasTypes *MRSP,
  /* TA_Export::MRSP_reduction::cont */kcg_bool *cont,
  /* TA_Export::MRSP_reduction::reduced */MRSP_reduction_acc_TA_Export *reduced)
{
  static MRSP_section_t_TrackAtlasTypes tmp;
  /* TA_Export::MRSP_reduction::_L19 */
  static MRSP_section_t_TrackAtlasTypes _L19;
  
  if ((0 <= i) & (i < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L19, &(*MRSP)[i]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &_L19,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  *cont = _L19.valid;
  if ((0 <= i - 1) & (i - 1 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&tmp, &(*MRSP)[i - 1]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &tmp,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  if (_L19.MRS == tmp.MRS) {
    (*reduced).write_index = (*acc).write_index;
  }
  else {
    (*reduced).write_index = (*acc).write_index + 1;
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&(*reduced).MRSP, &(*acc).MRSP);
  if ((0 <= (*acc).write_index) & ((*acc).write_index < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &(*reduced).MRSP[(*acc).write_index],
      &_L19);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_reduction_TA_Export.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

