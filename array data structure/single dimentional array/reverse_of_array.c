#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    
    for(int i=0;i<5;i++){
        printf("%d\t",array[i]);
    }

    printf("\nthis is reverse of an array you have entered..\n ");
    for(int i=4; i>=0;i--){
        printf("%d\t",array[i]);
    }
}