//--------------------------------------------------------------------------
// Main
//#include "pthread_lib.h"

//__thread unsigned executing_hartid;
//unsigned n_harts = 0;

extern int printf(const char* fmt, ...);


int main(int argc, char** argv);
int main(int argc, char** argv)
{
  // single-threaded programs override this function.
  printf("Hello, World from MAIN !\n");
  return 999;
}
