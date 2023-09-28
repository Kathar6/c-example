#include "cs50.h"
#include <stdio.h>

int main(void) {
  char character;
  printf("Do you agree?");
  scanf("%c", &character);

  if (character == 'y' || character == 'Y') {
    printf("Agreed\n");
  } else if (character == 'n' || character == 'N') {
    printf("Not agreed\n");
  } else {
    printf("Option not valid\n");
  }
}
