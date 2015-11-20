/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_loop_TA_MA.h"

/* TA_MA::Get_EOA_loop */
void Get_EOA_loop_TA_MA(
  /* TA_MA::Get_EOA_loop::i */ kcg_int i,
  /* TA_MA::Get_EOA_loop::acc */ L_internal_Type_Obu_BasicTypes_Pkg acc,
  /* TA_MA::Get_EOA_loop::MA_sections */ MovementAuthoritySectionlist_t_TrackAtlasTypes *MA_sections,
  /* TA_MA::Get_EOA_loop::cont */ kcg_bool *cont,
  /* TA_MA::Get_EOA_loop::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg *currentEOA)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  /* TA_MA::Get_EOA_loop::_L1 */
  static kcg_int _L1;
  /* TA_MA::Get_EOA_loop::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TA_MA::Get_EOA_loop::_L3 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L3;
  /* TA_MA::Get_EOA_loop::_L34 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L34;
  /* TA_MA::Get_EOA_loop::_L35 */
  static kcg_bool _L35;
  /* TA_MA::Get_EOA_loop::_L37 */
  static kcg_bool _L37;
  /* TA_MA::Get_EOA_loop::_L38 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* TA_MA::Get_EOA_loop::_L39 */
  static kcg_bool _L39;
  /* TA_MA::Get_EOA_loop::_L40 */
  static kcg_bool _L40;
  /* TA_MA::Get_EOA_loop::_L41 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L41;
  /* TA_MA::Get_EOA_loop::_L42 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L42;
  
  _L1 = i;
  _L2 = acc;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L3, MA_sections);
  if ((0 <= _L1) & (_L1 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L34, &_L3[_L1]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L34,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA);
  }
  _L35 = _L34.valid;
  _L37 = _L34.q_endsection;
  _L40 = _L35 & _L37;
  _L39 = !_L40;
  *cont = _L39;
  _L38 = _L34.l_section;
  _L42 = DEFAULT_loc_TA_MA;
  /* 1 */ if (_L40) {
    _L41 = _L38;
  }
  else {
    _L41 = _L42;
  }
  *currentEOA = _L41;
  noname = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Get_EOA_loop_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

