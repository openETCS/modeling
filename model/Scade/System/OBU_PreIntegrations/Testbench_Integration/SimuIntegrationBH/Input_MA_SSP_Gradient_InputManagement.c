/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"

/* InputManagement::Input_MA_SSP_Gradient */
void Input_MA_SSP_Gradient_InputManagement(
  /* InputManagement::Input_MA_SSP_Gradient::Data_From_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* InputManagement::Input_MA_SSP_Gradient::received_L2_L3_MA */ kcg_bool *received_L2_L3_MA,
  /* InputManagement::Input_MA_SSP_Gradient::received_L1_MA */ kcg_bool *received_L1_MA,
  /* InputManagement::Input_MA_SSP_Gradient::MA_SSP_Gradient_Available */ kcg_bool *MA_SSP_Gradient_Available)
{
  /* InputManagement::Input_MA_SSP_Gradient::_L21 */
  static kcg_bool _L21;
  /* InputManagement::Input_MA_SSP_Gradient::_L26 */
  static T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg _L26;
  /* InputManagement::Input_MA_SSP_Gradient::_L22 */
  static kcg_bool _L22;
  /* InputManagement::Input_MA_SSP_Gradient::_L23 */
  static kcg_bool _L23;
  /* InputManagement::Input_MA_SSP_Gradient::_L24 */
  static kcg_bool _L24;
  /* InputManagement::Input_MA_SSP_Gradient::_L25 */
  static kcg_bool _L25;
  /* InputManagement::Input_MA_SSP_Gradient::_L27 */
  static kcg_bool _L27;
  /* InputManagement::Input_MA_SSP_Gradient::_L28 */
  static kcg_bool _L28;
  /* InputManagement::Input_MA_SSP_Gradient::_L29 */
  static kcg_bool _L29;
  /* InputManagement::Input_MA_SSP_Gradient::_L30 */
  static kcg_bool _L30;
  
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &_L26,
    Data_From_Track_MASSPGradient);
  _L23 = _L26.P15_received;
  _L24 = _L26.P21_received;
  _L25 = _L26.P27_received;
  _L27 = _L24 & _L25;
  _L29 = _L23 & _L27;
  *received_L2_L3_MA = _L29;
  _L22 = _L26.P12_received;
  _L30 = _L22 & _L27;
  *received_L1_MA = _L30;
  _L21 = _L22 | _L23;
  _L28 = _L21 & _L27;
  *MA_SSP_Gradient_Available = _L28;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_MA_SSP_Gradient_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

