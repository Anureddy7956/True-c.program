// Employee Bonus Calculation
#include<stdio.h>
int main()
{
int n;
float bonus;
float salary =100000.00;
float total_salary;
printf("Enter the no.of years the employee worked: ");
scanf("%d",&n);

if (n>=5){
bonus=salary * 0.1;
}
else if (n<5 && n>=3){
 bonus=salary * 0.05;
 }
else{
printf("No Bonus :(");
}
total_salary= salary + bonus;
printf("total salary with bonus = %f",total_salary);
return 0;
}

