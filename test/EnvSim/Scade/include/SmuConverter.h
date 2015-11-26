#ifndef _SMUCONVERTER_H_
#define _SMUCONVERTER_H_

#ifdef __cplusplus
extern "C" {
#endif

/* String management */

#define SIMSTRING_INIT_SIZE     512
typedef void* (*SIM_PFN_ALLOCMEM)(size_t nobj, size_t size);
typedef void  (*SIM_PFN_FREEMEM)    (void* obj);

typedef struct {
    SIM_PFN_ALLOCMEM m_pfnAllocMem;
    SIM_PFN_FREEMEM m_pfnFreeMem;

    char* m_pszBase;         /* data area */
    unsigned m_nLength;      /* current string length */
    unsigned m_nSize;        /* current buffer size */
} SimString;

extern void SimStringAlloc(SimString* pString);
extern void SimStringAllocEx(SimString* pString, SIM_PFN_ALLOCMEM pfnAllocMem, SIM_PFN_FREEMEM pfnFreeMem);
extern void SimStringReset(SimString* pString);
extern int SimStringAppend(const char* str, void* pStr);
extern const char* SimStringGet(SimString* pString);
extern void SimStringFree(SimString* pString);

/* StringList management */

#define SIMSTRINGLIST_INIT_SIZE 32

typedef struct {
    SIM_PFN_ALLOCMEM m_pfnAllocMem;
    SIM_PFN_FREEMEM m_pfnFreeMem;

    char** m_pData;          /* data area */
    unsigned m_nCount;       /* current nb of elements in the list */
    unsigned m_nSize;        /* current allocated size */
} SimStringList;

extern void SimStringListAlloc(SimStringList* pList);
extern void SimStringListAllocEx(SimStringList* pList, SIM_PFN_ALLOCMEM pfnAllocMem, SIM_PFN_FREEMEM pfnFreeMem);
extern void SimStringListReset(SimStringList* pList);
extern int SimStringListAppend(const char* str, void* pList);
extern const char** SimStringListGetData(SimStringList* pList);
extern unsigned SimStringListGetCount(SimStringList* pList);
extern void SimStringListFree(SimStringList* pString);

#ifdef __cplusplus
}
#endif

#endif  /* _SMUCONVERTER_H_*/

