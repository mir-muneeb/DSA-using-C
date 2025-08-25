#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("enter size of array: ");
    scanf("%d",&n);                         //we take size of array from user....

// here we declare an array and take its elenents from user...
    int array[n];
    printf("enter the %d elements: ",n);        
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    printf("you have entered the following elements:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);        // this part displays elements we have enterd
         
        fact=fact*array[i];               // factorial operation is performed
    }
    printf("their factorial is :%d\t",fact);

    return 0;
}