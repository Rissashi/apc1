#include <stdio.h>

int main(void) {
  int x, th, h, t, u;
  
  printf("Insert a number:\n");
  
  if(scanf("%d", &x) != 1) {
    printf("Not a number.\n");
    return 1;
  }
  
  if (x >= 10000 || x <= -10000) {
    printf("Please insert a different number.");
    return 0;
  }
  
  th = x / 1000;
  h = (x - th * 1000) / 100;
  t = (x - th * 1000 - h * 100) / 10;
  u = (x - th * 1000 - h * 100 - t * 10);

  printf("The number consists of %d thousands, %d hundreds, %d tens and %d units.\n", th, h, t, u);
  return 0;
}