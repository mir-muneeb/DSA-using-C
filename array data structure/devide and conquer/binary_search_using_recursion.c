#include<stdio.h>
int rec_bs(int array[],int target,int start,int end);

int main(){
    int array[13]={2,4,5,6,7,9,12,17,20,33,43,64};
    int n=13, target=5;
    int start=0;
    int end=n-1;

    int answer=rec_bs(array,target,start,end);
    printf("element is present at index: %d",answer);
}

int rec_bs(int array[],int target,int start,int end){
    

    if(start <= end){      //base case  
        int mid=(start+end)/2;    // add and devision is going based on index,not on value

        if(target > array[mid]){
            return rec_bs(array,target,mid+1,end);
        }
        else if (target < array[mid])
        {
           return rec_bs(array,target,start,mid-1);
        }
        else
        {
            return mid; // which is my answer
        }
        
    }
    return -1; //which is not vallid index;
    
}