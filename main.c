#include <ctype.h>
#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(void) {

  int work = 25 * 60;
  int rest = 5 * 60;
  int repeat;
  char input;

  system("clear");
  printf(ANSI_COLOR_BLUE"PTIMER"ANSI_COLOR_RESET"\n");
  printf("Start pomodoro? y/n\n");
  scanf(" %c", &input);
  input = tolower(input);
  if (input == 'y') {
    printf("How many repeats?\n");
    scanf("%d", &repeat);

    if (repeat < 1) {
      printf(ANSI_COLOR_RED"Invalid amount of repeats."ANSI_COLOR_RESET"\n");
      return 1;
    }
    printf(ANSI_COLOR_RED"Starting working now..."ANSI_COLOR_RESET"\n");
    for (int x = 0; x < repeat; x++) {
    sleep(work);
    for (int y = 0; y < 3; y++) {
      system("paplay /usr/share/sounds/freedesktop/stereo/complete.oga 2>/dev/null"); // This works on my machine but it may not work on others, might change.
    }
    printf(ANSI_COLOR_GREEN"Starting break now..."ANSI_COLOR_RESET"\n");
    sleep(rest);
    completed(repeat); // Record how many repeats the user has completed.
    }
  }
  
  if (input == 'n') {
    return 0;
  }
  else {
    return 1;
  }
}
