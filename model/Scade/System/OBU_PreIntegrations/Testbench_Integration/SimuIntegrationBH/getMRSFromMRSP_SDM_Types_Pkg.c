/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::getMRSFromMRSP */
V_internal_real_Type_SDM_Types_Pkg getMRSFromMRSP_SDM_Types_Pkg(
  /* SDM_Types_Pkg::getMRSFromMRSP::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* SDM_Types_Pkg::getMRSFromMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_Pkg d_max_safe_front)
{
  static kcg_int i1;
  /* SDM_Types_Pkg::getMRSFromMRSP */
  static MRSP_internal_section_T_TargetManagement_types acc;
  static kcg_int i;
  /* SDM_Types_Pkg::searchMRSP::_L91 */
  static MRSP_internal_section_T_TargetManagement_types _L91_2;
  /* SDM_Types_Pkg::searchMRSP::_L90 */
  static L_internal_real_Type_SDM_Types_Pkg _L90_2;
  /* SDM_Types_Pkg::searchMRSP::_L89 */
  static kcg_bool _L89_2;
  /* SDM_Types_Pkg::searchMRSP::_L88 */
  static kcg_bool _L88_2;
  /* SDM_Types_Pkg::searchMRSP::_L74 */
  static L_internal_real_Type_SDM_Types_Pkg _L74_2;
  /* SDM_Types_Pkg::searchMRSP::_L84 */
  static MRSP_internal_section_T_TargetManagement_types _L84_2;
  /* SDM_Types_Pkg::searchMRSP::_L77 */
  static kcg_bool _L77_2;
  /* SDM_Types_Pkg::searchMRSP::_L40 */
  static MRSP_internal_section_T_TargetManagement_types _L40_2;
  /* SDM_Types_Pkg::searchMRSP::_L8 */
  static MRSP_internal_section_T_TargetManagement_types _L8_2;
  /* SDM_Types_Pkg::getMRSFromMRSP::_L1 */
  static MRSP_internal_T_TargetManagement_types _L1;
  /* SDM_Types_Pkg::getMRSFromMRSP::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_Types_Pkg::getMRSFromMRSP::_L5 */
  static MRSP_internal_section_T_TargetManagement_types _L5;
  /* SDM_Types_Pkg::getMRSFromMRSP::_L6 */
  static array_real_110 _L6;
  /* SDM_Types_Pkg::getMRSFromMRSP::_L8 */
  static MRSP_internal_section_T_TargetManagement_types _L8;
  /* SDM_Types_Pkg::getMRSFromMRSP::_L9 */
  static V_internal_real_Type_SDM_Types_Pkg _L9;
  /* SDM_Types_Pkg::getMRSFromMRSP::V_MRSP */
  static V_internal_real_Type_SDM_Types_Pkg V_MRSP;
  
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L1, MRSP);
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L5, &_L1[0]);
  _L4 = d_max_safe_front;
  /* pow */ for (i1 = 0; i1 < 110; i1++) {
    _L6[i1] = _L4;
  }
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L8, &_L5);
  for (i = 0; i < 110; i++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&acc, &_L8);
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L8_2, &acc);
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L40_2, &_L1[i]);
    _L88_2 = _L40_2.valid;
    _L90_2 = _L40_2.Loc_Abs;
    _L74_2 = _L6[i];
    _L77_2 = _L90_2 <= _L74_2;
    _L89_2 = _L88_2 & _L77_2;
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L91_2, &_L1[i]);
    /* 1 */ if (_L89_2) {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L84_2, &_L91_2);
    }
    else {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L84_2, &_L8_2);
    }
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L8, &_L84_2);
  }
  _L9 = _L8.MRS;
  V_MRSP = _L9;
  return V_MRSP;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMRSFromMRSP_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

