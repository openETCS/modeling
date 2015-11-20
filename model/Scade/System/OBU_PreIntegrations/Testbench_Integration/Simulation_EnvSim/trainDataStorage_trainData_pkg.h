/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _trainDataStorage_trainData_pkg_H_
#define _trainDataStorage_trainData_pkg_H_

#include "kcg_types.h"
#include "storeDriverInput_trainData_pkg.h"
#include "storeTIUData_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* trainData_pkg::trainDataStorage::actualTrainData */ actualTrainData;
  trainDataStatus_T_trainData_Types_pkg /* trainData_pkg::trainDataStorage::updatedStatus */ updatedStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_trainDataStorage_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::trainDataStorage */
extern void trainDataStorage_trainData_pkg(
  /* trainData_pkg::trainDataStorage::reset */kcg_bool reset,
  /* trainData_pkg::trainDataStorage::trainDatafromTIU */trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainDataStorage::trainDatafromDriver */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainDataStorage::trainDataAckfromDriver */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainDataStorage::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::trainDataStorage::eventsForTrainData */trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  outC_trainDataStorage_trainData_pkg *outC);

extern void trainDataStorage_reset_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC);

#endif /* _trainDataStorage_trainData_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** trainDataStorage_trainData_pkg.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

