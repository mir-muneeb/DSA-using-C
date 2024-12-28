#include<stdio.h>
#include<conio.h>
// this code take even numbers from user until user will not enter odd number;
int main(){
    int n;

   do{
    printf("enter n: ");
    scanf("%d",&n);
    printf("%d\n",n);
    
    // here check if no is odd break the loop;
    if(n % 2 != 0){
        break;
    }
   } while (1);// here one means the condition will always true, its a infinite loop

   printf("you have entered odd number !");

   return 0;
   
}