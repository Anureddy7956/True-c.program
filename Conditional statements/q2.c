//Login System in C
#include<stdio.h>
#include<string.h>
int main(){
   char user_name[50];
   char password[50];
   
  printf("Enter the user name: ");
  scanf("%s", user_name);
  printf("Enter the password: ");
  scanf("%s", password);
  
   if (strcmp(user_name,"admin") ==0 && strcmp(password,"password123") ==0){
   printf("Login successful\n");
   }
   else{
   printf("Invalid credentials\n");
   }
 return 0;
}
