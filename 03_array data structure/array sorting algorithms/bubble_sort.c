//Bubble Sort
//Approach: Repeatedly compares adjacent elements and swaps them if they are in the wrong order.

#include<stdio.h>
int main(){
    int array[5]={4,9,3,5,2};
    int n=5;

    printf("orginal array is :\n");
    for(int i=0;i<5;i++){
       printf("%d\t",array[i]);
    }


    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
                
    }

    printf("\nsorted array is :\n");
    for(int i=0;i<5;i++){
       printf("%d\t",array[i]);
    }

    return 0;
}

/*
Time Complexity:
Best: 𝑂(𝑛) (already sorted)
Worst: 𝑂(𝑛2) 
Average: O(n2)

Space Complexity: O(1) (in-place)
Use Case: Simple but inefficient for large datasets.

*/