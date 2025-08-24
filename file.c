#include <stdio.h>

void completed(int repeat) {
  FILE * pomodoro = fopen("ptimer.txt", "a");
  fprintf(pomodoro, "\n%d repeat(s) done, good job!\n", repeat);
  fclose(pomodoro);
  }
