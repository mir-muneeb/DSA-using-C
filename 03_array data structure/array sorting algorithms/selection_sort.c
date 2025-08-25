
//Selection Sort
//Approach: Selects the smallest (or largest) element and places it in its correct position.

#include<stdio.h>
int main(){
    int n=10;
    int array[10]={8,54,8,7,5,10,1,9,4,3};

    printf("orginal array is:\n");
    for(int i=0;i<10;i++){
        printf("%d\t",array[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    printf("\nsorted array is in desending order:\n");
    for(int i=0;i<10;i++){
        printf("%d\t",array[i]);
    }
    return 0;

}
/*

Time Complexity:
Best: O(n2)
Worst: O(n2)
Average: O(n2)

Space Complexity: O(1)
Use Case: Simple but not efficient for large datasets.
*/