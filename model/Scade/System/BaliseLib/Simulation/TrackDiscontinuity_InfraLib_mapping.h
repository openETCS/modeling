#ifndef TRACKDISCONTINUITY_INFRALIB_SCSIM_MAPPING
#define TRACKDISCONTINUITY_INFRALIB_SCSIM_MAPPING

#include "SmuTypes.h"
#include "TrackDiscontinuity_InfraLib_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "TrackDiscontinuity_InfraLib.h"
void _SCSIM_Mapping_TrackDiscontinuity_InfraLib();

void* _SCSIM_Get_TrackDiscontinuity_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

#include "TrackDiscontinuity_CalcTr_InfraLib.h"
void _SCSIM_Mapping_TrackDiscontinuity_CalcTr_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*));
void* _SCSIM_Get_TrackDiscontinuity_CalcTr_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_kcg_true(void*);

#endif /*TRACKDISCONTINUITY_INFRALIB_SCSIM_MAPPING */
