/*
 * libimpl.c: conversion functions used by the simulator
 *
 * Copyright(c) 2003-2015 Esterel Technologies
 *
 *
 */


#include "libimpl.h"
#include "libimpl_simu.h"
#include "macro_libimpl_utils.h"

#ifdef SIM

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <stdio.h>
#include <errno.h>

#include "NewSmuTypes.h"

#if !defined _MSC_VER && !defined __GNUC__
#define LONG_LONG_MIN LLONG_MIN
#define LONG_LONG_MAX LLONG_MAX
#endif

/*
 * Main Get conv Info
 */

int MainGetConvInfo(SimConvType nTo, SimConvType nFrom) 
{ 
    int bTo, bFrom;
    bTo = (nTo) == SptString || (nTo) == SptLong || (nTo) == SptNone; 
    bFrom = (nFrom) == SptString || (nFrom) == SptNone; 
    return bTo && bFrom; 
} 

static int uint8GetConvInfo(SimConvType nTo, SimConvType nFrom)
{
    return MainGetConvInfo(nTo, nFrom);
}

static int int8GetConvInfo(SimConvType nTo, SimConvType nFrom)
{
    return MainGetConvInfo(nTo, nFrom);
}

static int uint16GetConvInfo(SimConvType nTo, SimConvType nFrom)
{
    return MainGetConvInfo(nTo, nFrom);
}

static int int16GetConvInfo(SimConvType nTo, SimConvType nFrom)
{
    return MainGetConvInfo(nTo, nFrom);
}

/* Unsigned long does not fit into long , only double can accept proper conversion */
static int uint32GetConvInfo(SimConvType nTo, SimConvType nFrom) {
    int bTo, bFrom;
    bTo = (nTo) == SptString || (nTo) == SptDouble || (nTo) == SptNone; 
    bFrom = (nFrom) == SptString || (nFrom) == SptNone; 
    return bTo && bFrom; 
}

static int int32GetConvInfo(SimConvType nTo, SimConvType nFrom)
{
    return MainGetConvInfo(nTo, nFrom);
}

/***********************************************************************************/
/* Print and get fonctions for different extern types of libimpl library */
/***********************************************************************************/

/* uint8 */
static const void* uint8ToType(SimConvType nTo, const void* pT)
{
    switch (nTo) {
    case SptString:
	{
	    static char szValue[32];
	    static char* pszValue = szValue;
	    uint8 cValue = *(const uint8*) pT;
            /* we want to show integers and not characters */
            int nValue = cValue;
	    sprintf(szValue, "%hu", nValue);
	    return &pszValue;
        }
	break;
    case SptLong:
	{
	    static long nValue;
	    nValue = (long)*(const uint8*) pT;
	    return &nValue;
	}
	break;
    case SptNone:
	{
	    static uint8 cValue;  
	    cValue = *(const uint8*) pT;
	    return &cValue;
	}
	break;
    default:
	return NULL;
    }
    return NULL;
}

static int uint8FromType(SimConvType nFrom, const void* pType, void* pT)
{
    switch (nFrom) {
    case SptString:
	{
	    uint8 cValue;
            char* p = NULL;
	    int nValue = strtol(*(const char**) pType, &p, 10);
	    if (nValue < Min_uint8 || nValue > Max_uint8) 
	    	/* overflow */
		return 0; 
            if (*p)
		/* trailing characters */
		return 0;
	    cValue = nValue;
            *(uint8*) pT = cValue;

	}
	break;
    case SptNone:
	{
	    *(uint8*) pT = *(const uint8*) pType;
	}
	break;
    default:
	return 0;
    }
    /* value successfully compiled */
    return 1;
}

static int uint8Compare(int* result, const void* pValue1, const void* pValue2)
{
    int nRet=0;
    static uint8 nValue1, nValue2;
    nValue1 = *(const uint8*) pValue1;
    nValue2 = *(const uint8*) pValue2;
    if (nValue1 < nValue2) {
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_LT;
        nRet = -1;
    } else if (nValue1 == nValue2) {
        *result |= SIM_CMP_RES_EQ;
        nRet = 0;
    } else { /* (nValue1 > nValue2) */
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_GT;
        nRet = 1;
    }
    return nRet;
}

static struct SimTypeVTable simuint8VTable = {
    Scv65,
    uint8GetConvInfo,
    uint8ToType,
    uint8FromType,
    uint8Compare,
    NULL, /*no comparison with tolerance*/
};

struct SimTypeVTable* pSimuint8VTable = &simuint8VTable;

/* int8 */
static const void* int8ToType(SimConvType nTo, const void* pT)
{
    switch (nTo) {
    case SptString:
	{
	    static char szValue[32];
	    static char* pszValue = szValue;
	    int8 cValue = *(const int8*) pT;
            /* we want to show integers and not characters */
            int nValue = cValue;
	    sprintf(szValue, "%hd", nValue);
	    return &pszValue;
	}
	break;
    case SptLong:
	{
	    static long nValue;
	    nValue = (long)*(const int8*) pT;
	    return &nValue;
	}
	break;
    case SptNone:
	{
	    static int8 cValue;  
	    cValue = *(const int8*) pT;
	    return &cValue;
	}
	break;
    default:
	return NULL;
    }
    return NULL;
}

static int int8FromType(SimConvType nFrom, const void* pType, void* pT)
{
    switch (nFrom) {
    case SptString:
	{
	    int8 cValue;
            char* p = NULL;
	    int nValue = strtol(*(const char**) pType, &p, 10);
	    if (nValue < Min_int8 || nValue > Max_int8) 
	    	/* overflow */
		return 0; 
            if (*p)
		/* trailing characters */
		return 0;
	    cValue = nValue;
            *(int8*) pT = cValue;

	}
	break;
    case SptNone:
	{
	    *(int8*) pT = *(const int8*) pType;
	}
	break;
    default:
	return 0;
    }
    /* value successfully compiled */
    return 1;
}

static int int8Compare(int* result, const void* pValue1, const void* pValue2)
{
    int nRet=0;
    static int8 nValue1, nValue2;
    nValue1 = *(const int8*) pValue1;
    nValue2 = *(const int8*) pValue2;
    if (nValue1 < nValue2) {
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_LT;
        nRet = -1;
    } else if (nValue1 == nValue2) {
        *result |= SIM_CMP_RES_EQ;
        nRet = 0;
    } else { /* (nValue1 > nValue2) */
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_GT;
        nRet = 1;
    }
    return nRet;
}

static struct SimTypeVTable simint8VTable = {
    Scv65,
    int8GetConvInfo,
    int8ToType,
    int8FromType,
    int8Compare,
    NULL, /*no comparison with tolerance*/
};

struct SimTypeVTable* pSimint8VTable = &simint8VTable;

/* uint16 */
static const void* uint16ToType(SimConvType nTo, const void* pT)
{
    switch (nTo) {
    case SptString:
	{
	    static char szValue[32];
	    static char* pszValue = szValue;
	    sprintf(szValue, "%hu", *(const uint16*) pT);
	    return &pszValue;
	}
	break;
    case SptLong:
	{
	    static long nValue;
	    nValue = (long)*(const uint16*) pT;
	    return &nValue;
	}
	break;
    case SptNone:
	{
	    static uint16 nValue;
	    nValue = *(const uint16*) pT;
	    return &nValue;
	}
	break;
    default:
	return NULL;
    }
    return NULL;
}

static int uint16FromType(SimConvType nFrom, const void* pType, void* pT)
{
    switch (nFrom) {
    case SptString:
	{
            char* p = NULL;
	    int nValue = strtol(*(const char**) pType, &p, 10);
	    if (nValue < Min_uint16 || nValue > Max_uint16)
		/* overflow */
		return 0; 
            if (*p)
		/* trailing characters */
		return 0;
	    *(uint16*) pT = (uint16) nValue;
	}
	break;	
    case SptNone:
	{
	    *(uint16*) pT = *(const uint16*) pType;
	}
	break;
    default:
	return 0;
    }
    /* value successfully compiled */
    return 1;
}

static int uint16Compare(int* result, const void* pValue1, const void* pValue2)
{
    int nRet=0;
    static uint16 nValue1, nValue2;
    nValue1 = *(const uint16*) pValue1;
    nValue2 = *(const uint16*) pValue2;
    if (nValue1 < nValue2) {
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_LT;
        nRet = -1;
    } else if (nValue1 == nValue2) {
        *result |= SIM_CMP_RES_EQ;
        nRet = 0;
    } else { /* (nValue1 > nValue2) */
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_GT;
        nRet = 1;
    }
    return nRet;
}

static struct SimTypeVTable simuint16VTable = {
    Scv65,
    uint16GetConvInfo,
    uint16ToType,
    uint16FromType,
    uint16Compare,
    NULL, /*no comparison with tolerance*/
};

struct SimTypeVTable* pSimuint16VTable = &simuint16VTable;

/* int16 */
static const void* int16ToType(SimConvType nTo, const void* pT)
{
    switch (nTo) {
    case SptString:
	{
	    static char szValue[32];
	    static char* pszValue = szValue;
	    sprintf(szValue, "%hd", *(const int16*) pT);
	    return &pszValue;
	}
	break;
    case SptLong:
	{
	    static long nValue;
	    nValue = (long)*(const int16*) pT;
	    return &nValue;
	}
	break;
    case SptNone:
	{
	    static int16 nValue;
	    nValue = *(const int16*) pT;
	    return &nValue;
	}
	break;
    default:
	return NULL;
    }
    return NULL;
}

static int int16FromType(SimConvType nFrom, const void* pType, void* pT)
{
    switch (nFrom) {
    case SptString:
	{
	    char* p = NULL;
	    int nValue = strtol(*(const char**) pType, &p, 10);
	    if (nValue < Min_int16 || nValue > Max_int16)
		/* overflow */
		return 0; 
            if (*p)
		/* trailing characters */
		return 0;
	    *(int16*) pT = (int16) nValue;
	}
	break;	
    case SptNone:
	{
	    *(int16*) pT = *(const int16*) pType;
	}
	break;
    default:
	return 0;
    }
    /* value successfully compiled */
    return 1;
}

static int int16Compare(int* result, const void* pValue1, const void* pValue2)
{
    int nRet=0;
    static int16 nValue1, nValue2;
    nValue1 = *(const int16*) pValue1;
    nValue2 = *(const int16*) pValue2;
    if (nValue1 < nValue2) {
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_LT;
        nRet = -1;
    } else if (nValue1 == nValue2) {
        *result |= SIM_CMP_RES_EQ;
        nRet = 0;
    } else { /* (nValue1 > nValue2) */
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_GT;
        nRet = 1;
    }
    return nRet;
}

static struct SimTypeVTable simint16VTable = {
    Scv65,
    int16GetConvInfo,
    int16ToType,
    int16FromType,
    int16Compare,
    NULL, /*no comparison with tolerance*/
};

struct SimTypeVTable* pSimint16VTable = &simint16VTable;

/* uint32 */
static const void* uint32ToType(SimConvType nTo, const void* pT)
{
    switch (nTo) {
    case SptString:
	{
	    static char szValue[32];
	    static char* pszValue = szValue;
	    sprintf(szValue, "%lu", *(const uint32*) pT);
	    return &pszValue;
	}
	break;
    case SptDouble:
	{
	    static double nValue;
	    nValue = (double)*(const uint32*) pT;
	    return &nValue;
	}
	break;
    case SptNone:
	{
	    static uint32 nValue;
	    nValue = *(const uint32*) pT;
	    return &nValue;
	}
	break;
    default:
	return NULL;
    }
    return NULL;
}

static int uint32FromType(SimConvType nFrom, const void* pType, void* pT)
{
    switch (nFrom) {
    case SptString:
	{
	    char* p = NULL;
	    unsigned long ulValue;
	    errno = 0;
            ulValue = strtoul(*(const char**) pType, &p, 10);
	    if (ulValue < Min_uint32 || ulValue > Max_uint32)
		/* overflow */
		return 0;
	    if ((ulValue == 0 || ulValue == ULONG_MAX) && errno == ERANGE)
		/* overflow */
		return 0;
            if (*p)
		/* trailing characters */
		return 0;
	    *(uint32*) pT = (uint32) ulValue;
	}
	break;	
    case SptNone:
	{
	    *(uint32*) pT = *(const uint32*) pType;
	}
	break;
    default:
	return 0;
    }
    /* value successfully compiled */
    return 1;
}

static int uint32Compare(int* result, const void* pValue1, const void* pValue2)
{
    int nRet=0;
    static uint32 nValue1, nValue2;
    nValue1 = *(const uint32*) pValue1;
    nValue2 = *(const uint32*) pValue2;
    if (nValue1 < nValue2) {
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_LT;
        nRet = -1;
    } else if (nValue1 == nValue2) {
        *result |= SIM_CMP_RES_EQ;
        nRet = 0;
    } else { /* (nValue1 > nValue2) */
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_GT;
        nRet = 1;
    }
    return nRet;
}

static struct SimTypeVTable simuint32VTable = {
    Scv65,
    uint32GetConvInfo,
    uint32ToType,
    uint32FromType,
    uint32Compare,
    NULL, /*no comparison with tolerance*/
};

struct SimTypeVTable* pSimuint32VTable = &simuint32VTable;

/* int32 */
static const void* int32ToType(SimConvType nTo, const void* pT)
{
    switch (nTo) {
    case SptString:
	{
	    static char szValue[32];
	    static char* pszValue = szValue;
	    sprintf(szValue, "%ld", *(const int32*) pT);
	    return &pszValue;
	}
	break;
    case SptLong:
	{
	    static long nValue;
	    nValue = (long)*(const int32*) pT;
	    return &nValue;
	}
	break;
    case SptNone:
	{
	    static int32 nValue;
	    nValue = *(const int32*) pT;
	    return &nValue;
	}
	break;
    default:
	return NULL;
    }
    return NULL;
}

static int int32FromType(SimConvType nFrom, const void* pType, void* pT)
{
    switch (nFrom) {
    case SptString:
	{
	    char* p = NULL;
	    long lValue;
	    errno = 0;
	    lValue = strtol(*(const char**) pType, &p, 10);
	    if (lValue < Min_int32 || lValue > Max_int32)
		/* overflow */
		return 0;
	    if ((lValue == LONG_MAX || lValue == LONG_MIN) && errno == ERANGE)
		/* overflow */
		return 0;
            if (*p)
		/* trailing characters */
		return 0;
	    *(int32*) pT = (int32) lValue;
	}
	break;	
    case SptNone:
	{
	    *(int32*) pT = *(const int32*) pType;
	}
	break;
    default:
	return 0;
    }
    /* value successfully compiled */
    return 1;
}

static int int32Compare(int* result, const void* pValue1, const void* pValue2)
{
    int nRet=0;
    static int32 nValue1, nValue2;
    nValue1 = *(const int32*) pValue1;
    nValue2 = *(const int32*) pValue2;
    if (nValue1 < nValue2) {
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_LT;
        nRet = -1;
    } else if (nValue1 == nValue2) {
        *result |= SIM_CMP_RES_EQ;
        nRet = 0;
    } else { /* (nValue1 > nValue2) */
        *result |= SIM_CMP_RES_NEQ;
	*result |= SIM_CMP_RES_GT;
        nRet = 1;
    }
    return nRet;
}

static struct SimTypeVTable simint32VTable = {
    Scv65,
    int32GetConvInfo,
    int32ToType,
    int32FromType,
    int32Compare,
    NULL, /*no comparison with tolerance*/
};

struct SimTypeVTable* pSimint32VTable = &simint32VTable;

#endif

/* initialization functions (KCG 6.4)*/
void uint8_init(uint8 *var)
{
    *var = 0;
}

void uint16_init(uint16 *var) 
	{
    *var = 0;
}

void uint32_init(uint32 *var) 
{
    *var = 0;
}

void int8_init(int8 *var)
{
    *var = 0;
}

void int16_init(int16 *var)
{
    *var = 0;
}

void int32_init(int32 *var)
{
    *var = 0;
}


