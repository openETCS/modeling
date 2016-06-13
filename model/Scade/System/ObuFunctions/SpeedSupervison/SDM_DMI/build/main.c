//     Project: openETCS
//      Module: Standalone testbench / simulation (main.c)
// Description: Simple wrapper for the SCADE Testbench_EnvSim root node.
//              NOTE: the actual operator to be used can be define via the comman line switch -DROOTNODE
//                    when calling make. ROOT_CONTEXT, ROOT_CYCLE, and ROOT_RESET are set accordingly by
//                    the Makefile. The cycle duration is also defined by the Makefile; use -DTCYCLE=...
//                    to change it (value in microseconds).
//
// History:
// - 24.10.15, J. Kastner: initial version
// - 27.10.15, J. Kastner: introduce macro def's ROOT_CONTEXT, ROOT_CYCLE, ROOT_RESET
#include <unistd.h>

#ifdef WINDOWS
#include <Windows.h>
#else
#include <sys/time.h>
#endif

ROOT_CONTEXT outC;

void cycle() {
#ifdef WINDOWS
  LARGE_INTEGER StartingTime, EndingTime, ElapsedMicroseconds;
  LARGE_INTEGER Frequency;

  QueryPerformanceFrequency(&Frequency);
  QueryPerformanceCounter(&StartingTime);
#else
  struct timeval tv;
  gettimeofday(&tv,NULL);
  unsigned long start = 1000000 * tv.tv_sec + tv.tv_usec;
#endif

  ROOT_CYCLE(&outC);

#ifdef WINDOWS
  QueryPerformanceCounter(&EndingTime);
  ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
  ElapsedMicroseconds.QuadPart *= 1000000;
  ElapsedMicroseconds.QuadPart /= Frequency.QuadPart;
  usleep( TCYCLE - ElapsedMicroseconds.QuadPart );
#else
  gettimeofday(&tv,NULL);
  unsigned long elapsed = 1000000 * tv.tv_sec + tv.tv_usec - start;
  usleep( TCYCLE - elapsed );
#endif
}


int main() {
  ROOT_RESET(&outC);

  while( 1 ) {
    cycle();
  }

  return 0;
}


