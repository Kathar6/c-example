#include "cs50.h"
#include <stdio.h>

int main(void) {
  // string is a custom datatype imported in cs50lib
  string answer = get_string("What's your name? ");
  printf("hello, %s\n", answer);
}
