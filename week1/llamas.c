#include <stdio.h>

int getStartingLlamas(void) {
  int starting;

  printf("Type starting number of current_llamas: ");
  scanf("%i", &starting);

  return starting;
}

int getGoalLlamas(void) {
  int goal;

  printf("Type goal number of current_llamas: ");
  scanf("%i", &goal);

  return goal;
}

int main(void) {
  int current_llamas = getStartingLlamas();
  int goal = getGoalLlamas();

  int years = 0;

  while (current_llamas != goal) {
    // Born new current_llamas
    int llamas_born = current_llamas / 3;
    // The current_llamas will pass away
    int llamas_pass = current_llamas / 4;
    current_llamas += (llamas_born - llamas_pass);

    printf("current_llamas_born: %i, llamas_pass: %i, total_llamas: %i\n",
           llamas_born, llamas_pass, current_llamas);
    years++;
  }

  printf("Years taked: %i\n", years);
}
