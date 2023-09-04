#include <stdio.h>


int main() {

  int totalseconds, hours, minutes, seconds, days;
  
  printf("Enter the number of seconds: ");
  
  if (scanf("%d", &totalseconds) != 1 || totalseconds < 0) {
    printf("Invalid time. \n");
    return 1;
  }
  
  hours = totalseconds / 3600;
  
  days = hours / 24;
  
  hours = hours % 24;
  
  totalseconds = totalseconds % 3600;
  
  minutes = totalseconds / 60;
  
  seconds = totalseconds % 60;
  
  printf("Converted time: %d days, %d hours, %d minutes and %d seconds.\n", days, hours, minutes, seconds);
  return 0;
}