#include <stdio.h>
#include <stdlib.h>

/* Main Function
 *   Purpose: Controls program, prints Hello, World!
 *   Input: Command-Line arguments
 *   Output: Returns Exit Status
 */
int main(int argc, char **argv) {
  printf("Hello, world!\n");
  int x = 5;
  char str[] = "abc";
  char c = 'z';
  float pi = 3.14;

  printf("\t%d %s %f %s %c\n", x, str, pi, "WOW", c);
  return EXIT_SUCCESS;
}