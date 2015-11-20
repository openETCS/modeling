/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locationOfReferenceLRBG_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::locationOfReferenceLRBG */
void locationOfReferenceLRBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::LRBG */NID_LRBG LRBG,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::position */L_internal_Type_Obu_BasicTypes_Pkg *position,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::passed */kcg_bool *passed)
{
  static L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L14 */
  static NID_BG _L14;
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L13 */
  static NID_C _L13;
  
  *passed = kcg_true;
  /* 1 */ Decode_NID_LRBG_TM(LRBG, &_L13, &_L14);
  if ((_L13 == (*trainPosition).LRBG.nid_c) & (_L14 ==
      (*trainPosition).LRBG.nid_bg)) {
    tmp = (*trainPosition).LRBG.location.nominal;
  }
  else {
    tmp = (*trainPosition).estimatedFrontEndPosition;
  }
  *position = tmp + (*trainProperties).d_baliseAntenna_2_frontend.nominal;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** locationOfReferenceLRBG_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

