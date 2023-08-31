#include <stdio.h>



int main() {
  
  float A1, A2, Av;
  
  printf("Insert your A1 grade: \n");
  if (scanf("%f", &A1) != 1 || A1 < 0 || A1 > 10 ) {
    printf("Invalid grade. \n");
    return 1;
  };
  printf("Insert your A2 grade: \n");
  if (scanf("%f", &A2) != 1 || A2 < 0 ||A2 > 10) {
    printf("Invalid grade. \n");
    return 1;
  };

  Av = 0.4 * A1 + 0.6 * A2;
  printf("Your average score is: %.2f.\n", Av);
  return 0;
}