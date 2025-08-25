#include<stdio.h>
int main(){
    int n=6;                 //size of an array;
    printf("original array is \n");
    int array[]={3,4,5,7,3,5};
    for(int i=0;i<6;i++){
        printf("%d\t",array[i]);
    }

    int start=0, end=n-1;     //declaer array starting and ending points...

    // Reverse the array using two-pointer approach
    while (start<end)
    {
        int temp;
        temp=array[start];
        array[start]=array[end];
        array[end]=temp; 
        
        start++;
        end--;
    }

    printf("\nreversed array is \n");
    for(int i=0;i<6;i++){
        printf("%d\t",array[i]);
    }
    
}