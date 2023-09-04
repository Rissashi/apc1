#include <stdio.h>


int main() {
  float initial_price, final_price, icms = 0.17, cof = 0.076, pispas = 0.0165;

  printf("Insert the base price for the product: \n$");
  if(scanf("%f", &initial_price) != 1 || initial_price <= 0){
    printf("Invalid price. \n");
    return 1;    
  };
  final_price = (1 + icms + cof + pispas) * initial_price;
  printf("The final price is: $%.2f. \n", final_price);
  
  return 0;
}