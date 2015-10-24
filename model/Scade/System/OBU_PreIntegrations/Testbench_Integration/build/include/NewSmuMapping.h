#ifndef _SMU_MAPPING_H_
#define _SMU_MAPPING_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "stdlib.h"

#include "NewSmuTypes.h"

typedef int (*PFNISACTIVE)(void* pHandle);

enum EntryKind_t {
    MAP_SENSOR,

    MAP_ROOT,
    MAP_INSTANCE,
    MAP_EXPANDED,

    MAP_INPUT,
    MAP_OUTPUT,
    MAP_LOCAL,
    MAP_PROBE,
    MAP_ASSUME,
    MAP_GUARANTEE,
    MAP_SIGNAL,

    MAP_WHEN,
    MAP_MATCH,
    MAP_ACTION,
    MAP_IF,

    MAP_AUTOMATON,
    MAP_STATE,
    MAP_FORK,
    MAP_STRONG_TRANSITION,
    MAP_WEAK_TRANSITION,

    MAP_FIELD,
    MAP_ARRAY,

    MAP_ANY
};
typedef enum EntryKind_t EntryKind;

struct MappingIterator_t {
    const char* kind;
    size_t scadeSize;
    size_t targetSize;
    const struct MappingIterator_t* parent;
};
typedef struct MappingIterator_t MappingIterator;

struct MappingScope_t;

struct MappingEntry_t {
    EntryKind nKind;
    const char* name;
    const struct MappingIterator_t* iterator;
    size_t size;
    size_t offset;
    const SimTypeUtils* pTypeUtils;
    const struct MappingEntry_t* pClockEntry;
    PFNISACTIVE pfnIsActive;
    const struct MappingScope_t* pScope;
    int bVisible;
    size_t nIndex;
};
typedef struct MappingEntry_t MappingEntry;

struct MappingScope_t {
    const char* name;
    const MappingEntry* entries;
    size_t nbOfEntries;
};
typedef struct MappingScope_t MappingScope;

struct Iterator_t;

int GetObservableFromPath(const char* pPath, const MappingScope* pTop,
    void** pRetHandle, const MappingEntry** pRetMappingEntry,
    void** pRetClockHandle, int (**pRetIsActiveFct)(void*), const MappingEntry** pRetClockMappingEntry,
    void** pRetParentHandle, const MappingEntry** pRetParentMappingEntry, int bAcceptSize0Entry/*=FALSE*/);

int GetObservableFromHandle(void* pHandle, size_t nSize, const MappingScope* pTop,
    const MappingEntry** pRetMappingEntry,
    void** pRetClockHandle, int (**pRetIsActiveFct)(void*), const MappingEntry** pRetClockMappingEntry,
    PFNSTRAPPEND pfnStrAppend, void *pData,
    void** pRetParentHandle, const MappingEntry** pRetParentMappingEntry);

int GetVariableRawValue(const char* pPath, const MappingScope* pTop, PFNSTRAPPEND pfnStrAppend, void *pData);

int ListAllObservables(const MappingScope* pScope, int bInFork,
    PFNSTRAPPEND pfnStrAppend,
    char* (*pfnGetPtr)(void *pData),
    void (*pfnSetPtr)(char* ptr, void *pData),
    void (*pfnFlush)(),
    void *pData);

const MappingEntry* FindEntry(const MappingScope* pScope,
                               const char* pPath, size_t nTokenLen);

extern const MappingScope* pTop;

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMU_MAPPING_H_ */

