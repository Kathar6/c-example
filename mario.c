#include <stdio.h>

int main(void) {
  int limit = 3;

  printf("Type the size of the square: ");
  scanf("%i", &limit);

  for (int i = 0; i < limit; i++) {
    for (int j = 0; j < limit; j++) {
      printf("#");
    }
    printf("\n");
  }
}
