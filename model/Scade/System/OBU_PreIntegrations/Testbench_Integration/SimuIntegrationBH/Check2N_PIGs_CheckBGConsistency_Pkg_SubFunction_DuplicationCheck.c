/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs */
kcg_bool Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_1 */ N_PIG n_pig_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_1 */ M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_2 */ N_PIG n_pig_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_2 */ M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L1 */
  static N_PIG _L1;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L2 */
  static N_PIG _L2;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L5 */
  static kcg_int _L5;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L7 */
  static kcg_bool _L7;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L16 */
  static kcg_bool _L16;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L17 */
  static kcg_bool _L17;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L18 */
  static M_DUP _L18;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L19 */
  static M_DUP _L19;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L21 */
  static M_DUP _L21;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L20 */
  static M_DUP _L20;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L22 */
  static kcg_bool _L22;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L24 */
  static M_DUP _L24;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L23 */
  static M_DUP _L23;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L27 */
  static kcg_bool _L27;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L26 */
  static kcg_bool _L26;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L25 */
  static kcg_bool _L25;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L29 */
  static M_DUP _L29;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L28 */
  static M_DUP _L28;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L31 */
  static M_DUP _L31;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L30 */
  static M_DUP _L30;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L33 */
  static M_DUP _L33;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L32 */
  static M_DUP _L32;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L34 */
  static kcg_bool _L34;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L35 */
  static kcg_bool _L35;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L36 */
  static kcg_bool _L36;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L37 */
  static kcg_bool _L37;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L38 */
  static kcg_bool _L38;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L39 */
  static kcg_bool _L39;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L40 */
  static kcg_bool _L40;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L41 */
  static kcg_bool _L41;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L42 */
  static kcg_bool _L42;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L43 */
  static kcg_bool _L43;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L44 */
  static kcg_bool _L44;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L45 */
  static kcg_bool _L45;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::valid */
  static kcg_bool valid;
  
  _L1 = n_pig_1;
  _L2 = n_pig_2;
  _L3 = /* 1 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L1);
  _L4 = /* 2 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L2);
  _L5 = _L4 - _L3;
  _L18 = m_dup_1;
  _L19 = m_dup_2;
  _L34 = crcCheck_1;
  _L35 = crcCheck_2;
  _L15 = /* 1 */
    Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      _L18,
      _L19,
      _L34,
      _L35);
  _L20 = m_dup_1;
  _L21 = m_dup_2;
  _L36 = crcCheck_1;
  _L37 = crcCheck_2;
  _L17 = /* 1 */
    Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      _L20,
      _L21,
      _L36,
      _L37);
  _L23 = m_dup_1;
  _L24 = m_dup_2;
  _L38 = crcCheck_1;
  _L39 = crcCheck_2;
  _L22 = /* 1 */
    Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      _L23,
      _L24,
      _L38,
      _L39);
  _L29 = m_dup_2;
  _L28 = m_dup_1;
  _L40 = crcCheck_2;
  _L41 = crcCheck_1;
  _L25 = /* 2 */
    Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      _L29,
      _L28,
      _L40,
      _L41);
  _L30 = m_dup_2;
  _L31 = m_dup_1;
  _L42 = crcCheck_2;
  _L43 = crcCheck_1;
  _L26 = /* 2 */
    Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      _L30,
      _L31,
      _L42,
      _L43);
  _L32 = m_dup_2;
  _L33 = m_dup_1;
  _L44 = crcCheck_2;
  _L45 = crcCheck_1;
  _L27 = /* 2 */
    Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      _L32,
      _L33,
      _L44,
      _L45);
  _L16 = kcg_false;
  switch (_L5) {
    case 1 :
      _L7 = _L15;
      break;
    case 2 :
      _L7 = _L17;
      break;
    case 3 :
      _L7 = _L22;
      break;
    case -1 :
      _L7 = _L25;
      break;
    case -2 :
      _L7 = _L26;
      break;
    case -3 :
      _L7 = _L27;
      break;
    
    default :
      _L7 = _L16;
  }
  valid = _L7;
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

