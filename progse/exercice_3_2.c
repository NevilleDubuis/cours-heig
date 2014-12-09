#include <stdio.h>
#include <stdlib.h>

int read_seconds();
void clear_buffer();

int main() {
  int seconds;
  int total_seconds;
  int minutes;
  int hours;

  total_seconds = read_seconds();
  seconds = total_seconds;

  hours = seconds / 3600;
  seconds %= 3600;

  minutes = seconds / 60;
  seconds %= 60;

  printf("%ds est egal a %dh %dmn %ds\n", total_seconds, hours, minutes, seconds);
  return  0;
}

// read user entry from keyboard
//
int read_seconds() {
  int seconds;
  int status;

  do {
    printf("entrez un nombre de seconde: ");
    status = scanf("%d", &seconds);
    clear_buffer();
  } while (status < 1);

  return seconds;
}

// Clear stdin buffer
//
void clear_buffer() {
  while (getchar() != '\n');
}
