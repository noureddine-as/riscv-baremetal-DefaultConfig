//--------------------------------------------------------------------------
// Main

char text[] = "Vafgehpgvba frgf jnag gb or serr!";

// Don't use the stack, because sp isn't set up.
volatile int wait = 1;

int main(int argc, char** argv);
int main(int argc, char** argv)
{
    while (wait)
        ;

    // Doesn't actually go on the stack, because there are lots of GPRs.
    int i = 0;
    while (text[i]) {
        char lower = text[i] | 32;
        if (lower >= 'a' && lower <= 'm')
            text[i] += 13;
        else if (lower > 'm' && lower <= 'z')
            text[i] -= 13;
        i++;
    }

    while (!wait)
        ;

    return 0;
}



//__thread unsigned executing_hartid;
//unsigned n_harts = 0;

/*
extern int printf(const char* fmt, ...);


int main(int argc, char** argv);
int main(int argc, char** argv)
{
  // single-threaded programs override this function.
  printf("Hello, World from MAIN !\n");
  return 999;
}*/
