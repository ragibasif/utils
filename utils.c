#include "utils.h"
#include <stdbool.h>/* true, false, bool */
#include <stdio.h> /*Includes the standard I/O library for functions like `printf`.*/
#include <stdlib.h> /*Includes the standard library for functions like `malloc`, `free`, and `realloc`.*/
#include <string.h> /*Includes the string manipulation library for functions like `memcpy`.*/

static void utils_log_wrapper(const char *message, const char *file,
                              const unsigned int line, const char *function) {

  printf("(%s%s%s:%u:%s%s) %s\n", UTILS_ANSI_MAGENTA, UTILS_ANSI_BOLD, file,
         line, function, UTILS_ANSI_RESET, message);
}

int main(int argc, char **argv) {

  if (argc < 2) {
    printf("argc: %d argv[0]: %s\n", argc, argv[0]);
  } else {
    int i;
    for (i = 0; i < argc; i++) {
      printf("argc: %d argv[%d]: %s\n", argc, i, argv[i]);
    }
  }

  int *p = (int *)malloc(5 + sizeof(int));
  printf("%p\n", (void *)p);
  free(p);
  UTILS_LOG("hello");

  return 0;
}
