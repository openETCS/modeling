//     Project: openETCS libenvsim
//      Module: scade / scade_dmi.c
// Description: Implementation of the init and cycle functions for the remote EVC<->DMI SCADE operators
//
// History:
// - 06.10.15, J. Kastner: initial version

#ifdef WITH_SCADE
#include "RemoteDMI_EnvSim.h"
#include "scade_common.h"
#include "../logging.h"

void es_remote_dmi_init(outC_RemoteDMI_EnvSim *out) {
  es_log_init(NULL);

  LOG_INFO(scade_dmi,"Initializing RemoteDMI operator");
  es_scade_load_config();

  es_Interp *interp = es_get_interp();
}
#endif
