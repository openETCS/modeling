#include <unistd.h>

// cycle time in us
#define CYCLETIME 10000

#ifdef WINDOWS
#include <Windows.h>
#else
#include <sys/time.h>
#endif

outC_ROOT_Simulation_Testbench_EnvSim outC;


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

    ROOT_Simulation_Testbench_EnvSim(&outC);

#ifdef WINDOWS
    QueryPerformanceCounter(&EndingTime);
    ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
    ElapsedMicroseconds.QuadPart *= 1000000;
    ElapsedMicroseconds.QuadPart /= Frequency.QuadPart;
    usleep( CYCLETIME - ElapsedMicroseconds.QuadPart );
#else
    gettimeofday(&tv,NULL);
    unsigned long elapsed = 1000000 * tv.tv_sec + tv.tv_usec - start;
    usleep( CYCLETIME - elapsed );
#endif
}


int main() {
  ROOT_Simulation_reset_Testbench_EnvSim(&outC);

  while( 1 ) {
    cycle();
  }

  return 0;
}


