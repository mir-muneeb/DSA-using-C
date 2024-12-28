#include<stdio.h>
int fact(int n);

int main(){
    printf("factorial of n is %d",fact(5));
} 

int fact(int n){
    
    //base case
    if(n==0){
        return 1;
    }

    //recursive relation
    int Tfact=fact(n-1);           //int factorial = n + fact(n-1);
    int factorial=Tfact * n;         //return factorial;
    return factorial;
}