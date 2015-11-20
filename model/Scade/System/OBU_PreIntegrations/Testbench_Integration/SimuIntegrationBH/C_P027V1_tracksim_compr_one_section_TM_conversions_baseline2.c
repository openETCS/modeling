/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section */
void C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::i */ kcg_int i1,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_from_track */ P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::meta_first_section_in */ kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::q_dir */ Q_DIR q_dir,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_compressed */ CompressedPacketData_T_Common_Types_Pkg *P027V1_sections_compressed)
{
  static kcg_int i;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::p_size */
  static kcg_int p_size;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L456 */
  static kcg_int _L456;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L455 */
  static kcg_int _L455;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L454 */
  static MetadataElement_T_Common_Types_Pkg _L454;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L449 */
  static kcg_int _L449;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L450 */
  static kcg_int _L450;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L451 */
  static kcg_int _L451;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L452 */
  static kcg_int _L452;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L453 */
  static P027V1_trackside_qdifflist_T_TM_baseline2 _L453;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L448 */
  static array_int_432 _L448;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L447 */
  static P027V1_section_int_T_TM_baseline2 _L447;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L446 */
  static kcg_int _L446;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L445 */
  static kcg_int _L445;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L444 */
  static array_int_4 _L444;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L443 */
  static kcg_int _L443;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L442 */
  static CompressedPacketData_T_Common_Types_Pkg _L442;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L440 */
  static kcg_int _L440;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L439 */
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 _L439;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L438 */
  static kcg_bool _L438;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L437 */
  static array_int_68 _L437;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L435 */
  static kcg_int _L435;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L434 */
  static kcg_int _L434;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L433 */
  static kcg_int _L433;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L457 */
  static Q_DIR _L457;
  
  _L433 = i1;
  _L435 = meta_first_section_in;
  _L456 = _L433 + _L435;
  _L457 = q_dir;
  _L438 = kcg_true;
  _L445 = 0;
  kcg_copy_P027V1_section_int_T_TM_baseline2(
    &_L447,
    P027V1_sections_from_track);
  _L452 = _L447.N_ITER;
  _L434 = /* 2 */ T_DeterminePacketSizeInt_TM_lib_internal(_L452, 4, 2);
  p_size = _L434;
  _L455 = p_size;
  _L440 = 1;
  _L443 = _L455 - _L440;
  _L454.nid_packet = _L456;
  _L454.q_dir = _L457;
  _L454.valid = _L438;
  _L454.startAddress = _L445;
  _L454.endAddress = _L443;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(Header, &_L454);
  _L449 = _L447.D_STATIC;
  _L450 = _L447.V_STATIC;
  _L451 = _L447.Q_FRONT;
  _L444[0] = _L449;
  _L444[1] = _L450;
  _L444[2] = _L451;
  _L444[3] = _L452;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &_L453,
    &_L447.SECTIONS_q_diff);
  /* 2 */ C_P027_flatten_sections_qdiff_TM_lib_internal(&_L453, &_L439);
  kcg_copy_array_int_4(&_L437[0], &_L444);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&_L437[4], &_L439);
  _L446 = 0;
  /* pow */ for (i = 0; i < 432; i++) {
    _L448[i] = _L446;
  }
  kcg_copy_array_int_68(&_L442[0], &_L437);
  kcg_copy_array_int_432(&_L442[68], &_L448);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    P027V1_sections_compressed,
    &_L442);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

