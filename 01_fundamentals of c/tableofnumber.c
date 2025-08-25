#include<stdio.h>
int main(){
    int n,mult=0;
    printf("enter a number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=10; i++){

        mult = n * i;

        printf("%d * %d = %d\n",n,i,mult);
    }

}-