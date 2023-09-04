#include <stdio.h>

int main() {
  
  int h = 0, b = 0;
  float a = 0;
  
  printf("Insert the triangle's height in cm: \n");
  if (scanf("%d", &h) != 1 || h <= 0) {
    printf("Invalid value. \n");
      return 1;
  };
  
  printf("Insert the triangle's base in cm: \n");
  if (scanf("%d", &b) != 1 || b <= 0) {
    printf("Invalid value. \n");
    return 1;
  };
  
  a = h * b; 
  a = a / 2;
  printf("The triangle's area is: %.2f cm²\n", a);

  return 0;
}