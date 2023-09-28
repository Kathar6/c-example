#include "cs50.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int iterations;
  printf("Type the quantity of iterations: ");
  scanf("%i", &iterations);

  if (iterations <= 0) {
    return printf("The iterations must be greater than 0\n");
  }

  /* for (int i = 0; i < iterations; i++) { */
  /*   printf("meow\n"); */
  /* } */

  /* int i = 0; */
  /**/
  /* while (i < iterations) { */
  /*   printf("meow\n"); */
  /*   i++; */
  /* } */
}
