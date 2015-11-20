/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:02
*************************************************************$ */
#ifndef _DataBusFactory_RBC_DataBus_Pkg_H_
#define _DataBusFactory_RBC_DataBus_Pkg_H_

#include "kcg_types.h"
#include "Clock__Limit_RBC_Time_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_DataBus_Pkg::DataBusFactory::outDataBus */ outDataBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int times;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_DataBusFactory_RBC_DataBus_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_DataBus_Pkg::DataBusFactory */
extern void DataBusFactory_RBC_DataBus_Pkg(
  /* RBC_DataBus_Pkg::DataBusFactory::initConfig */DynamicConfig_T *initConfig,
  /* RBC_DataBus_Pkg::DataBusFactory::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_DataBusFactory_RBC_DataBus_Pkg *outC);

extern void DataBusFactory_reset_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC);

#endif /* _DataBusFactory_RBC_DataBus_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DataBusFactory_RBC_DataBus_Pkg.h
** Generation date: 2015-11-20T19:47:02
*************************************************************$ */

