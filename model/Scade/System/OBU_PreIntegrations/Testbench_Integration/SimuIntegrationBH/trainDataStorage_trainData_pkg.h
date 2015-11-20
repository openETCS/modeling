/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _trainDataStorage_trainData_pkg_H_
#define _trainDataStorage_trainData_pkg_H_

#include "kcg_types.h"
#include "storeDriverInput_trainData_pkg.h"
#include "storeTIUData_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* trainData_pkg::trainDataStorage::actualTrainData */ actualTrainData;
  trainDataStatus_T_trainData_Types_pkg /* trainData_pkg::trainDataStorage::updatedStatus */ updatedStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  trainData_T_TIU_Types_Pkg /* trainData_pkg::trainDataStorage::trainData */ trainData;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_trainDataStorage_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::trainDataStorage */
extern void trainDataStorage_trainData_pkg(
  /* trainData_pkg::trainDataStorage::reset */ kcg_bool reset,
  /* trainData_pkg::trainDataStorage::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainDataStorage::trainDatafromDriver */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainDataStorage::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainDataStorage::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::trainDataStorage::eventsForTrainData */ trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  outC_trainDataStorage_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void trainDataStorage_reset_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void trainDataStorage_init_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _trainDataStorage_trainData_pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** trainDataStorage_trainData_pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

