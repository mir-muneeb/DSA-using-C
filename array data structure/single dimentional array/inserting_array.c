// DEFINITION:- insertion means adding one or more elements in an existing array;
// NOTE:- insertion is possible only when array has capacity to hold more elements;
// LOGIC:- we use Right shift to insert new element in an array, accepting of inserting at last position; 
         
#include<stdio.h>
int main(){
    int array[10]={0,1,2,3,4,5,6,7,8};
    int pos=5, new_val=99;
    //NOTE :- position starts from 1 and index starts from 0;               

    printf("original array is:\n");
    for(int i=0;i<10;i++){
       printf("%d\t",array[i]);
    }

    // Shift elements to the right
    for(int i=8; i>= pos-1; i--){  // Start from last element 8 to pos-1
        array[i+1] = array[i];
    }

    // Insert the new value
    array[pos-1]=new_val;

    printf("\nupdated array is :\n");
    for(int i=0;i<10;i++){           // Print the updated array (size 10)
       printf("%d\t",array[i]);
    }

    return 0;
}