#include <stdio.h>
#include <math.h>


int main() {
  
  float angle, sin_angle, angle_rad, PI = 3.1415, height, distance;
  
  printf("Insert the angle of the plane:\n► ");
  
  if (scanf("%f", &angle) != 1 || angle > 45 || angle < 0) {
    printf("Please insert a positive angle equal or under 45°. \n");
    return 1;
  }
  
  printf("Insert the distance traveled by the plane: \n► ");
  
  if (scanf("%f)", &distance) != 1 || distance < 0){
    printf("Invalid distance. \n");
    return 1;    
  };  
    
  angle_rad = angle * PI/180;   //convert angle to radians
  
  sin_angle = sin(angle_rad); 
  
  height = sin_angle * distance;  

  printf("After traveling %.2f m, the place achieved a height of: %.2fm. \n", distance, height);
  return 0;
}