/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindLastSSPSection_LOOP_TA_MRSP.h"

/* TA_MRSP::MRSP_FindLastSSPSection_LOOP */
void MRSP_FindLastSSPSection_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::Init */SSP_Mark_ValidSSPsection_TA_MRSP *Init,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::SSP_Reverse_In */SSP_section_t_TA_MRSP *SSP_Reverse_In,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::cont */kcg_bool *cont,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::i_out */SSP_Mark_ValidSSPsection_TA_MRSP *i_out)
{
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::_L16 */ kcg_bool _L16;
  
  (*i_out).Index = i;
  _L16 = (int_ZERO_TA_MRSP < (*SSP_Reverse_In).target) |
    (((*SSP_Reverse_In).target == int_ZERO_TA_MRSP) & ((*SSP_Reverse_In).speed >
        int_ZERO_TA_MRSP) & (i == DIM_maxSSP_individual_sections_TA_MRSP - 1));
  (*i_out).Found = _L16;
  *cont = !_L16;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindLastSSPSection_LOOP_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

