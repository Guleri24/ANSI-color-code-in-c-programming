#include <stdio.h>
int main()
{
  printf("\033[0;31mHello to all, \033[0m");

  printf("\033[0;35m");
  printf("\nThis project helps us to use ANSI color codes in C programs.");
  printf("\033[0m");

  printf("\033[1;36m");
  printf("\n\nfollow these steps :\nFirstly you must know about the color codes:");
  printf("\033[0m");

  // Red 
  printf("\033[0;31m");
  printf("\n\nred [0;31m");
  printf("\033[0m");

  // Bold Red
  printf("\033[1;31m");
  printf("\nbold red [1;31m");
  printf("\033[0m");

  // Green
  printf("\033[0;32m");
  printf("\ngreen [0;32m");
  printf("\033[0m");

  // Bold Green
  printf("\033[1;32m");
  printf("\nbold green [1;32m");
  printf("\033[0m");

  // Yellow
  printf("\033[0;33m");
  printf("\nyellow [0;33m");
  printf("\033[0m");

  // Bold Yellow
  printf("\033[1;33m");
  printf("\nbold yellow [1;33m");
  printf("\033[0m");

  // Blue
  printf("\033[0;34m");
  printf("\nblue [0,34m");
  printf("\033[0m");

  // Bold Blue
  printf("\033[1;34m");
  printf("\nbold blue [1;34m");
  printf("\033[0m");

  // Magenta
  printf("\033[0;35m");
  printf("\nmagenta [0;35m");
  printf("\033[0m");

  // Bold Magenta
  printf("\033[1;35m");
  printf("\nbold magenta [1;35m");
  printf("\033[0m");

  // Cyan
  printf("\033[0;36m");
  printf("\ncyan [0;36m");
  printf("\033[0m");

  // Bold Cyan
  printf("\033[1;36m");
  printf("\nbold cyan [1;36m");
  printf("\033[0m");

  // Ending Code
  printf("\nreset or to end the change in color [0m");

  printf("\033[0;34m");
  printf("\nBy using this colour coding scheme you can make your code look good");
  printf("\033[0m");

  printf("\033[1;32m");
  printf("\nthank you ");
  printf("\033[0m");
}
