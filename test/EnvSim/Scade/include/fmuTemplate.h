/* ---------------------------------------------------------------------------*
 * fmuTemplate.h
 * Definitions used in fmiModelFunctions.c and by the includer of this file
 * (c) 2010 QTronic GmbH 
 * ---------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "fmiModelFunctions.h"
#include "NewSmuTypes.h"
#include "SmuConverter.h"


#define not_modelError (modelInstantiated|modelInitialized|modelTerminated)

typedef enum {
    modelInstantiated = 1<<0,
    modelInitialized  = 1<<1,
    modelTerminated   = 1<<2,
    modelError        = 1<<3
} ModelState;

typedef struct {
    fmiString instanceName;
    fmiString GUID;
    fmiCallbackFunctions functions;
    fmiBoolean loggingOn;
    ModelState state;
    fmiReal initTime;
    fmiReal currentTime;
    fmiReal nextTime;
    fmiReal period;
    void       *context;
    SimString   tmpString;
} ModelInstance;


