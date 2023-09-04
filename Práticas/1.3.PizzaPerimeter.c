#include <stdio.h>
#define PI 3.1416f

int main() {
  
  int r;
  float P = 0;
  
  printf("Insert the pizza radius in cm: ");
  
  if (scanf("%d", &r) != 1 || r <= 0) {
    printf("Invalid values. \n");
    return 1;
  }
  
  P = 2 * r * PI;
  printf("The perimeter is: %.2f cm \n", P);
  return 0;
}