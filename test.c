#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

  int i;
  for (i = 0; i < 20; i++) {
    srand(time(0));
    srand(time(0));
    srand(time(0));
    srand(time(0));
    srand(time(0));
    char randomletter = '!' + (random() % 94);
    printf("%c", randomletter);
    srand(time(0));
  }
}
