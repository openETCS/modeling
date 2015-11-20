/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_limit_to_EOA_TA_Export.h"

/* TA_Export::MRSP_limit_to_EOA */
void MRSP_limit_to_EOA_TA_Export(
  /* TA_Export::MRSP_limit_to_EOA::i */kcg_int i,
  /* TA_Export::MRSP_limit_to_EOA::MRSP */MRSP_Profile_t_TrackAtlasTypes *MRSP,
  /* TA_Export::MRSP_limit_to_EOA::EoA */L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::MRSP_limit_to_EOA::cont */kcg_bool *cont,
  /* TA_Export::MRSP_limit_to_EOA::limited */MRSP_section_t_TrackAtlasTypes *limited)
{
  static MRSP_section_t_TrackAtlasTypes tmp;
  /* TA_Export::MRSP_limit_to_EOA::MRSP_section0 */
  static MRSP_section_t_TrackAtlasTypes MRSP_section0;
  
  *cont = kcg_true;
  if ((0 <= i) & (i < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&tmp, &(*MRSP)[i]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &tmp,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  if (tmp.Loc_Abs > EoA) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&MRSP_section0, &tmp);
    MRSP_section0.Loc_Abs = EoA;
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&MRSP_section0, &tmp);
  }
  if ((0 <= i - 1) & (i - 1 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&tmp, &(*MRSP)[i - 1]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &tmp,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  if (tmp.Loc_Abs == END_OF_SSP_encoding_TA_Export) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      limited,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(limited, &MRSP_section0);
    if ((EoA == MRSP_section0.Loc_Abs) | (END_OF_SSP_TA_Export ==
        MRSP_section0.MRS)) {
      (*limited).MRS = END_OF_SSP_encoding_TA_Export;
    }
    else {
      (*limited).MRS = MRSP_section0.MRS;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_limit_to_EOA_TA_Export.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

