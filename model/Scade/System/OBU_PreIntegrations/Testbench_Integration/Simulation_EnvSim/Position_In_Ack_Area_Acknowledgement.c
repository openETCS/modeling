/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Ack_Area_Acknowledgement.h"

/* Acknowledgement::Position_In_Ack_Area */
kcg_bool Position_In_Ack_Area_Acknowledgement(
  /* Acknowledgement::Position_In_Ack_Area::Position */Location_T_Obu_BasicTypes_Pkg Position,
  /* Acknowledgement::Position_In_Ack_Area::D_Area */Location_T_Obu_BasicTypes_Pkg D_Area,
  /* Acknowledgement::Position_In_Ack_Area::L_Ack_Area */Location_T_Obu_BasicTypes_Pkg L_Ack_Area)
{
  /* Acknowledgement::Position_In_Ack_Area::Position_In_Ack_Area */
  static kcg_bool Position_In_Ack_Area;
  
  Position_In_Ack_Area = (Position <= D_Area) & (Position >= D_Area -
      L_Ack_Area);
  return Position_In_Ack_Area;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Position_In_Ack_Area_Acknowledgement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

