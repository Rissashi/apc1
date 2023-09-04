#include <stdio.h>

int main(void) {
  double gb, b;
  
  printf("Insert the number of GBs: \n");
  
  if (scanf("%lf", &gb) != 1 || gb < 0){
    printf("Invalid input. \n");
    return 1;
  };
  
  b = gb * 1024 * 1024 * 1024;
  
  printf("The number of bytes is: %.0lf.\n", b);
  
  return 0;
}