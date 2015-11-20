/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakeBuildUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakeBuildUp */
void brakeBuildUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakeBuildUp::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakeBuildUp::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::brakeBuildUp::T_b */ t_Brake_t_SDMModelPkg *T_b)
{
  static kcg_int i1;
  static kcg_int i;
  /* SDMConversionModelPkg::brakeBuildUp::_L1 */
  static P3_NationalValues_T_Packet_Types_Pkg _L1;
  /* SDMConversionModelPkg::brakeBuildUp::_L10 */
  static t_BrakeVt_t_SDMModelPkg _L10;
  /* SDMConversionModelPkg::brakeBuildUp::_L11 */
  static t_BrakeVt_t_SDMModelPkg _L11;
  /* SDMConversionModelPkg::brakeBuildUp::_L14 */
  static t_Brake_t_SDMModelPkg _L14;
  /* SDMConversionModelPkg::brakeBuildUp::_L15 */
  static t_Brake_t_SDMModelPkg _L15;
  /* SDMConversionModelPkg::brakeBuildUp::_L18 */
  static M_NVKTINT _L18;
  /* SDMConversionModelPkg::brakeBuildUp::_L19 */
  static trainData_T_TIU_Types_Pkg _L19;
  /* SDMConversionModelPkg::brakeBuildUp::_L23 */
  static t_BrakeVt_t_SDMModelPkg _L23;
  /* SDMConversionModelPkg::brakeBuildUp::_L22 */
  static t_BrakeVt_t_SDMModelPkg _L22;
  
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L1, NationalValues);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L19, trainData);
  /* 1 */ brakePosition_SDMConversionModelPkg(&_L19, &_L15);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&_L23, &_L15.service);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&_L22, &_L15.emergency);
  _L18 = _L1.m_nvktint;
  /* pow */ for (i1 = 0; i1 < 2; i1++) {
    _L11[i1] = _L18;
  }
  /* 1 */ for (i = 0; i < 2; i++) {
    _L10[i] = _L11[i] * _L22[i];
  }
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&_L14.emergency, &_L10);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&_L14.service, &_L23);
  kcg_copy_t_Brake_t_SDMModelPkg(T_b, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakeBuildUp_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

