#include <stdio.h>

int main(void) {
  long x, y;
  printf("Type the first number: ");
  scanf("%li", &x);

  printf("Type the first number: ");
  scanf("%li", &y);

  double z = (double)x / (double)y;
  printf("%.20f\n", z);
}
