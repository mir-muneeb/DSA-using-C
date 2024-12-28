#include<stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);

    while (i<=n)
    {
        sum+=i;     //sum=sum+i
        i++;
    }
    printf("sum of N numbers is %d",sum);
    return 0;
}