#include "utils.h"

void utils_log_wrapper(const char *message, const char *file,
                       const unsigned int line, const char *function) {

  printf("[%s%s%s%s:", UTILS_ANSI_RED, UTILS_ANSI_BOLD, file, UTILS_ANSI_RESET);
  printf("%s%s%u%s:", UTILS_ANSI_GREEN, UTILS_ANSI_BOLD, line,
         UTILS_ANSI_RESET);
  printf("%s%s%s%s] ", UTILS_ANSI_YELLOW, UTILS_ANSI_BOLD, function,
         UTILS_ANSI_RESET);
  printf("%s%s%s%s\n", UTILS_ANSI_MAGENTA, UTILS_ANSI_BOLD, message,
         UTILS_ANSI_RESET);
}

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  int *p = (int *)malloc(5 + sizeof(int));
  printf("%p\n", (void *)p);
  free(p);
  utils_log_wrapper("utils_log_wrapper", __FILE__, __LINE__, __func__);
  UTILS_LOG("UTILS_LOG");

  return 0;
}
