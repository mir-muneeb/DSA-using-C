//Insertion Sort
//Approach: Builds a sorted portion by picking each element and inserting it into the correct position.

#include<stdio.h>
int main(){
    int array[5]={4,9,3,5,2};

    printf("orginal array is :\n");
    for(int i=0;i<5;i++){
       printf("%d\t",array[i]);
    }


    for(int i=1;i<5;i++){
        int current=array[i];

        int p=i-1;
        while (p>=0 && array[p]>current)
        {
            array[p+1]=array[p];
            p--;
        }
    array[p+1]=current;          
    }

    printf("\nsorted array is :\n");
    for(int i=0;i<5;i++){
       printf("%d\t",array[i]);
    }

    return 0;
}

/*
Time Complexity:
Best: O(n) (already sorted)
Worst: O(n2)
Average: O(n2)

Space Complexity: O(1)
Use Case: Efficient for small datasets or nearly sorted arrays.
*/