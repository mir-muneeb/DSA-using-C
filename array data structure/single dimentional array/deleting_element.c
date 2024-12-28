#include<stdio.h>
int main(){
    
    int size=10,target=34;
    int array[]={87,55,76,34,5,6,34,8,9,10};;
    
    printf("original array is:\n");
    for(int i=0;i<size;i++){
       printf("%d\t",array[i]);
    }

    // Left shift performed on elements
    int i;
    for(i=0;i<size;i++){
        if(array[i]==target){    //Searching for the target element

         //if element is present in an array ;
         //then left shift is performed from last element to target element which ist found;
            for(int j=i;j<size-1;j++){  
                array[j]=array[j+1];
            }
             
            size--;  // Reduce the size of the array
            i--;     // Stay at the same index to check for duplicate targets consecutively.
        }
    }

    //Print the array only up to the updated size (size), not the original size (10).
    printf("\nupdated array is:\n");
    for(int i=0;i<size;i++){     
       printf("%d\t",array[i]);
    }

    return 0;

}
/*
Time Complexity
Outer Loop: Runs 𝑂(𝑛) where n is the size of the array.
Inner Loop: Shifts all elements after the target index. In the worst case, this happens for all elements:𝑂(𝑛).
Total Complexity: 𝑂(𝑛^2) in the worst case, if multiple targets are present.
For a single occurrence of target, the complexity is O(n).
*/