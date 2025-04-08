// ATM withdrawal system
#include<stdio.h>
int main()
{
int total_amt,with_drawal,balance;
balance=total_amt - with_drawal;
printf("Enter the Total amount: ");
scanf("%d",&total_amt);
printf("Enter the withdrawal amount: ");
scanf("%d",&with_drawal);

if(with_drawal>=balance)
printf("Invalid funds !");
else if(with_drawal % 100 != 0)
printf("Enter a valid amount !");
else
printf("Transaction successfull ! ");
return 0;
}
