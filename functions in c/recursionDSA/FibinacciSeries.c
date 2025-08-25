#include<stdio.h>
//Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones.

int fibonacci(int n);

int main(){
    int n=6; 
    printf("fibonacci of number %d is %d",n,fibonacci(n));
}

int fibonacci(int n){
    //base case
    if(n ==0){
        return 0;
    }
    if(n ==1){
        return 1;
    }

    //recursive relation
    int fib=fibonacci(n-1) + fibonacci(n-2);
    return fib;
}