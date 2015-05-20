#ifndef TRACKDISCONTINUITY_CALCTR_INFRALIB_SCSIM_MAPPING
#define TRACKDISCONTINUITY_CALCTR_INFRALIB_SCSIM_MAPPING

#include "SmuTypes.h"
#include "TrackDiscontinuity_CalcTr_InfraLib_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "TrackDiscontinuity_CalcTr_InfraLib.h"
void _SCSIM_Mapping_TrackDiscontinuity_CalcTr_InfraLib();

void* _SCSIM_Get_TrackDiscontinuity_CalcTr_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);


#endif /*TRACKDISCONTINUITY_CALCTR_INFRALIB_SCSIM_MAPPING */
