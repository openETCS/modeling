/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addNewSection_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::addNewSection */
void addNewSection_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::addNewSection::newGradientSection */ Gradient_real_t_SDM_GradientAcceleration_types newGradientSection,
  /* SDM_GradientAcceleration_Pkg::addNewSection::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::addNewSection::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::addNewSection::modifiedProfile */ GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *modifiedProfile)
{
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L3 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L3;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L2 */
  static ACC_SDM_GradientAcceleration_Pkg _L2;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L1 */
  static kcg_int _L1;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L4 */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types _L4;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L5 */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types _L5;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L6 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L6;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L7 */
  static kcg_bool _L7;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L8 */
  static L_internal_real_Type_SDM_Types_Pkg _L8;
  /* SDM_GradientAcceleration_Pkg::addNewSection::_L9 */
  static ACC_SDM_GradientAcceleration_Pkg _L9;
  
  _L3 = newGradientSection;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L2, Accu);
  _L1 = index;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &_L5,
    &_L2.compensatedGradientProfile);
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L9, Accu);
  _L8 = _L9.frontPos;
  _L7 = kcg_true;
  _L6.location = _L8;
  _L6.gradient = _L3;
  _L6.valid = _L7;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &_L4,
    &_L5);
  if ((0 <= _L1) & (_L1 < 100)) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L4[_L1],
      &_L6);
  }
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    modifiedProfile,
    &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addNewSection_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

