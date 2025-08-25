// An array is a collection of similar data types stored at contiguous memory location.

// How to declare an array 
//  Data type.....array name...[size] 

// How to initialize an array
// 1:- int arrayN[5] = {1,2,3,4,5};
// 2:- int arrayN[] = {1,2,3,4,5};

/*#include<stdio.h>
int main(){
    int array[6]={1,2,3,4,5,6};
    for(int i = 0; i < 6; i++)
    {
       printf("%d",array[i]);
    }
    return 0;
}*/
 // 3:- take array from user at run time.
 
#include<stdio.h>
int main(){
    int n;
    printf("enter sixe of array: ");
    scanf("%d",&n);

    int array[n];
    printf("enter the %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    printf("you have entered the following elements:\n");
    for(int i=0;i<n;i++){
        printf("%d at indices of %d\n",array[i],i);
    }

    return 0;
}