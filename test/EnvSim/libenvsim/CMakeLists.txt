cmake_minimum_required(VERSION 3.3)
project(libenvsim VERSION 0.1 LANGUAGES C)


set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include_directories(../Scade/Simulation/ ../Scade/include ../Scade/ ${JIMTCL})

set(SOURCE_FILES
  src/utils.c src/utils.h
  src/logging.c src/logging.h
  src/trackmsg.c src/trackmsg.h
  src/tcl/interp.c src/tcl/interp.h
  src/tcl/envsimInt.c src/tcl/envsimInt.h
  src/tcl/track.c src/tcl/track.h
  src/scade/ScriptedTrack_EnvSim.c src/scade/ScriptedTrack_EnvSim.h src/scade/scade_track.c
  src/scade/DMIAdapter_EnvSim.c src/scade/DMIAdapter_EnvSim.h
)

add_library(envsim STATIC ${SOURCE_FILES})

IF(WIN32 OR CYGWIN OR MINGW OR MSYS)
  add_definitions(-DWINDOWS)
ENDIF(WIN32 OR CYGWIN OR MINGW OR MSYS)


IF(WITH_TCL_EXTENSION)
  add_definitions(-DWITH_TCL_EXTENSION -DUSE_TCL_STUBS -DUSE_TK_STUBS)
  add_library(envsimext SHARED ${SOURCE_FILES})
  IF(TCLSTUB)
    target_link_libraries(envsimext ${TCLSTUB})
  ELSE(TCLSTUB)
    target_link_libraries(envsimext tclstub8.5)
  ENDIF(TCLSTUB)
  set_target_properties(envsimext PROPERTIES PREFIX "" OUTPUT_NAME envsim)
ENDIF(WITH_TCL_EXTENSION)


IF(ENABLE_SCADE)
  add_definitions(-DWITH_JIM -DWITH_SCADE)
  link_directories(${JIMTCL})
  target_link_libraries(envsim jim)
ENDIF(ENABLE_SCADE)


IF(ENABLE_TESTS)
  #add_executable(main test.c)
  #target_link_libraries(main envsim)
    add_subdirectory(test/unit)
ENDIF(ENABLE_TESTS)