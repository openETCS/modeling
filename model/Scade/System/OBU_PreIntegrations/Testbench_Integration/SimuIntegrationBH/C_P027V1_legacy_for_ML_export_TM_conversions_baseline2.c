/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export */
void C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_in */ P027V1_OBU_T_TM_baseline2 *P027_in,
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_legacy_out */ P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *P027_legacy_out)
{
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L1 */
  static P027V1_OBU_T_TM_baseline2 _L1;
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L2 */
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg _L2;
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L3 */
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg _L3;
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L4 */
  static kcg_bool _L4;
  
  kcg_copy_P027V1_OBU_T_TM_baseline2(&_L1, P027_in);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &_L2,
    (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
      &DEFAULT_P027V1_legacy_TM_baseline2);
  _L4 = _L1.valid;
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(&_L3, &_L2);
  if (kcg_true) {
    _L3.valid = _L4;
  }
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    P027_legacy_out,
    &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

