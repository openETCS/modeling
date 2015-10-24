#include <unistd.h>

outC_ROOT_Simulation_Testbench_EnvSim outC;

int main() {
  ROOT_Simulation_reset_Testbench_EnvSim(&outC);
  while( 1 ) {
    ROOT_Simulation_Testbench_EnvSim(&outC);
    usleep( 10000 );
  }
  return 0;
}
