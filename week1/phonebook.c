#include "../cs50.h"
#include <stdio.h>

int main(void) {
  string name;
  short age;
  long phone_number;

  name = get_string("Write your name: ");

  printf("Write your age: ");
  scanf("%hi", &age);

  printf("Write your phone number: ");
  scanf("%li", &phone_number);

  printf("Your name is: %s\n", name);
  printf("Your age is: %i\n", age);
  printf("Your phone number is: %li\n", phone_number);
}
