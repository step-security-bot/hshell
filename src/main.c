#define COLORS

#include "hshell/headers/cli.h"
#include "hshell/headers/escape.h"
#include "hshell/headers/meta.h"
#include "hshell/headers/prompt.h"

/*
▄▄          ▄▄▄▄    ▄▄                 ▄▄▄▄   ▄▄▄▄
██        ▄█▀▀▀▀█   ██                 ▀▀██   ▀▀██
██▄████▄  ██▄       ██▄████▄   ▄████▄    ██     ██
██▀   ██   ▀████▄   ██▀   ██  ██▄▄▄▄██   ██     ██
██    ██       ▀██  ██    ██  ██▀▀▀▀▀▀   ██     ██
██    ██  █▄▄▄▄▄█▀  ██    ██  ▀██▄▄▄▄█   ██▄▄▄  ██▄▄▄
▀▀    ▀▀   ▀▀▀▀▀    ▀▀    ▀▀    ▀▀▀▀▀     ▀▀▀▀   ▀▀▀▀
*/

int init_shell(void) {
  char *username = get_username();
  printf("Hello, %s%s%s! and welcome to..\n", GREEN, username, CLEAR);
  printf(CYAN);
  puts("▄▄          ▄▄▄▄    ▄▄                 ▄▄▄▄   ▄▄▄▄");
  puts("██        ▄█▀▀▀▀█   ██                 ▀▀██   ▀▀██");
  puts("██▄████▄  ██▄       ██▄████▄   ▄████▄    ██     ██");
  puts("██▀   ██   ▀████▄   ██▀   ██  ██▄▄▄▄██   ██     ██");
  puts("██    ██       ▀██  ██    ██  ██▀▀▀▀▀▀   ██     ██");
  puts("██    ██  █▄▄▄▄▄█▀  ██    ██  ▀██▄▄▄▄█   ██▄▄▄  ██▄▄▄");
  puts("▀▀    ▀▀   ▀▀▀▀▀    ▀▀    ▀▀    ▀▀▀▀▀     ▀▀▀▀   ▀▀▀▀");
  printf(CLEAR);
  printf(RED ">%s a homemade command shell, in %sC\n" CLEAR, CLEAR, BLUE);
  printf("Made with %s❤%s by %s\n", RED, CLEAR, __AUTHOR__);
  free(username);
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    return process_args(argv);
  }

  init_shell();
  init_prompt();
  return 0;
}
