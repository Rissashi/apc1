#include <stdio.h>

int main() {
  
  int years, months, days, total_days;
  
  printf("Insert the age in years, months, and days respectively:\n");
  
  if(scanf("%d %d %d", &years, &months, &days) != 3 || years < 0 || months < 0 || days < 0) {
    printf("Invalid values. \n");
    return 1;
  }
  
  years = years * 365;
  months = months * 30;
  total_days = years + months + days;

  printf("The total amount is %d days. \n", total_days);
  
  return 0;
}