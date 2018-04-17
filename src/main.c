//--------------------------------------------------------------------------
// Main

extern int printf(const char* fmt, ...);


int main(int argc, char** argv);
int main(int argc, char** argv)
{
  // single-threaded programs override this function.
  printf("Hello, World from MAIN ! \n");
  return 999;
}
