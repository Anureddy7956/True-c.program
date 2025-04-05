//Shopping Discount System
#include<stdio.h>
int main(){
 float amount;
 float discount=0.0;
 float final_amount;
 
 printf("Enter the total amount spent: $");
 scanf("%f", &amount);
  
  if(amount>=500){
  discount=amount*0.2;
  }
  else if (amount>=100 && amount<=500){
  discount = amount*0.1;
  }
  else{
  discount = 0;
  }
  final_amount=amount-discount;
  printf("Discount applied is $ %2f\n",discount);
  printf("Final amount is $ %.2f\n",final_amount);
  return 0;
 
}
