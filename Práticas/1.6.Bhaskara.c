#include <stdio.h>
#include <math.h>

int main(void) {
  
  int a, b, c;
  float bhas, disc;
  
  printf("Insert the values for a, b and c:\n");
  
  if (scanf("%d %d %d", &a, &b, &c) !=3){
    printf("Invalid values. \n");
    return 1;
  }
  
  disc = b * b - 4 * a * c;
  bhas = (- b + sqrt(disc)) / (2 * a);
  printf("The value of the discriminant is: %.2f \n", disc);

  if (disc < 0) {
    printf("This quadratic equation does not have real solutions. \n");
    return 0;
  }
  
  printf("The first solution is: %.2f \n" , bhas);
  bhas = (-b - sqrt(disc)) / (2 * a);
    printf("The second solution is: %.2f", bhas);
  return 0;
}