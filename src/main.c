//--------------------------------------------------------------------------
// Main


extern int printf(const char* fmt, ...);
extern int sync_printf(const char* fmt, ...);


int main(int argc, char** argv);
int main(int argc, char** argv)
{
  // single-threaded programs override this function.
  sync_printf("Hello, World from MAIN ! .. core %d \n", argc);

  return 1;
}
