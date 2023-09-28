#include <stdio.h>

int main(void) {
  int number1, number2;

  printf("Insert the first number: ");
  scanf("%d", &number1);

  printf("Insert the second number: ");
  scanf("%d", &number2);

  if (number1 > number2) {
    printf("The first number (%i) is greater than second number (%i)\n",
           number1, number2);
  } else if (number2 > number1) {
    printf("The second number (%i) is greater than first number (%i)\n",
           number2, number1);
  } else {
    printf("Both numbers are equal\n");
  }
}
