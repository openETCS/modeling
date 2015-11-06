cmake_minimum_required(VERSION 3.3)
project(libenvsim VERSION 0.2 LANGUAGES C)


set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include_directories(../Scade/Simulation/ ../Scade/include ../Scade/ ${JIMTCL})

set(COMMON_SOURCE_FILES
  src/utils.c src/utils.h
  src/logging.c src/logging.h
  src/trackmsg.c src/trackmsg.h
  src/tcp.h src/tcp.c src/msgids.h
  src/stcp.h src/stcp.c
  src/rcontrol.h src/rcontrol.c
  src/tcl/track.c src/tcl/track.h
  src/tcl/pkts.c src/tcl/pkts.h
)

set(LIBENVSIM_SOURCE_FILES ${COMMON_SOURCE_FILES}
  src/tcl/interp.c src/tcl/interp.h
  src/scade/scade_common.c src/scade/scade_common.h
  src/scade/ScriptedTrack_EnvSim.c src/scade/ScriptedTrack_EnvSim.h src/scade/scade_track.c
  src/scade/RemoteDMI_EnvSim.c src/scade/RemoteDMI_EnvSim.h
  src/scade/RemoteDMIBus_EnvSim.c src/scade/RemoteDMIBus_EnvSim.h
  src/scade/RemoteEVC_EnvSim.c src/scade/RemoteEVC_EnvSim.h
  src/scade/RemoteEVCBus_EnvSim.c src/scade/RemoteEVCBus_EnvSim.h
  src/scade/RemoteGUI_EnvSim.c src/scade/RemoteGUI_EnvSim.h
  src/scade/ProbeTracksideInput_EnvSim.c src/scade/ProbeTracksideInput_EnvSim.h
  src/scade/ProbeSDM_EnvSim.c src/scade/ProbeSDM_EnvSim.h
  src/scade/scade_remote.c src/scade/scade_probe.c
)

set(EXTENVSIM_SOURCE_FILES ${COMMON_SOURCE_FILES}
  src/tcl/envsimInt.c src/tcl/envsimInt.h
)

FILE(WRITE ${CMAKE_CURRENT_BINARY_DIR}/version.h
    "#define PROJECT_VERSION \"${PROJECT_VERSION}\"\n
     #define PROJECT_BUILD  __DATE__ \" \" __TIME__\n
    "
)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(envsim STATIC ${LIBENVSIM_SOURCE_FILES})

add_definitions(-D__USE_UNIX98)

IF(WITH_TCL_EXTENSION)
  add_definitions(-DWITH_TCL_EXTENSION -DUSE_TCL_STUBS -DUSE_TK_STUBS)
  add_library(envsimext SHARED ${EXTENVSIM_SOURCE_FILES})
  IF(TCLSTUB)
    target_link_libraries(envsimext ${TCLSTUB})
  ELSE(TCLSTUB)
    target_link_libraries(envsimext tclstub8.5)
  ENDIF(TCLSTUB)
  set_target_properties(envsimext PROPERTIES PREFIX "" OUTPUT_NAME envsim)
ENDIF(WITH_TCL_EXTENSION)


IF(WIN32 OR CYGWIN OR MINGW OR MSYS)
  add_definitions(-DWINDOWS)
  target_link_libraries(envsim ws2_e32)
  IF(WITH_TCL_EXTENSION)
    target_link_libraries(envsimext ws2_32)
  ENDIF(WITH_TCL_EXTENSION)
ENDIF(WIN32 OR CYGWIN OR MINGW OR MSYS)


IF(ENABLE_SCADE)
  target_compile_definitions(envsim PUBLIC -DWITH_JIM -DWITH_SCADE)
  link_directories(${JIMTCL})
  target_link_libraries(envsim jim)
ENDIF(ENABLE_SCADE)


IF(ENABLE_TESTS)
  #add_executable(main test.c)
  #target_link_libraries(main envsim)
    add_subdirectory(test/unit)
ENDIF(ENABLE_TESTS)

