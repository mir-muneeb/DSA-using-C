#include<stdio.h>
int binarysearch(int array[],int target,int n);

int main(){
    int array[10]={2,4,5,6,7,9,12,17,20,33};
    int n=10, target=20;

    int answer=binarysearch(array,target,n);
    printf("element is present at index: %d",answer);
}

int binarysearch(int array[],int target,int n){
    int start=0,end=n-1;

    while (start <= end){
        int mid=(start+end)/2;    // add and devision is going based on index,not on value

        if(target > array[mid]){
            start=mid+1;
        }
        else if (target < array[mid])
        {
            end=mid-1;
        }
        else
        {
            return mid; // which is my answer
        }
        
    }
    return -1; //which is not vallid index;
    
}