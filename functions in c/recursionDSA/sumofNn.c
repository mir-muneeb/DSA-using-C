#include<stdio.h>
int sum(int n);

int main(){
    printf("sum of n is %d",sum(4));
}

int sum(int n){
    
    //base case
    if(n==1){
        return 1;
    }

    //recursive relation
    int Tsum=sum(n-1);           //int totalsum = n + sum(n-1);
    int Fsum=Tsum+n;          //return totalsum;
    return Fsum;
}