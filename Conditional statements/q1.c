//Ticket pricing system
#include<stdio.h>
int main()
{
int age;
printf("Enter the your current age for your tick price: ");
scanf("%d",&age);

if(age>=5 && age<=0){
printf("Free for the children\n");
}
else if(age>=6 && age<=17){
printf("$10 for children\n");
}
else if("age>=18 && age<59"){
printf("$20 for adults\n");
}
else if ("age>=60"){
printf("$15 for senior citizens\n");
}
return 0;
}
