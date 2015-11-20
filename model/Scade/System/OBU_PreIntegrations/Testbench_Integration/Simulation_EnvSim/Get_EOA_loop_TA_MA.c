/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_loop_TA_MA.h"

/* TA_MA::Get_EOA_loop */
void Get_EOA_loop_TA_MA(
  /* TA_MA::Get_EOA_loop::i */kcg_int i,
  /* TA_MA::Get_EOA_loop::acc */L_internal_Type_Obu_BasicTypes_Pkg acc,
  /* TA_MA::Get_EOA_loop::MA_sections */MovementAuthoritySectionlist_t_TrackAtlasTypes *MA_sections,
  /* TA_MA::Get_EOA_loop::cont */kcg_bool *cont,
  /* TA_MA::Get_EOA_loop::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg *currentEOA)
{
  /* TA_MA::Get_EOA_loop::_L34 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L34;
  /* TA_MA::Get_EOA_loop::_L40 */
  static kcg_bool _L40;
  
  if ((0 <= i) & (i < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L34,
      &(*MA_sections)[i]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L34,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA);
  }
  _L40 = _L34.valid & _L34.q_endsection;
  if (_L40) {
    *currentEOA = _L34.l_section;
  }
  else {
    *currentEOA = DEFAULT_loc_TA_MA;
  }
  *cont = !_L40;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Get_EOA_loop_TA_MA.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

