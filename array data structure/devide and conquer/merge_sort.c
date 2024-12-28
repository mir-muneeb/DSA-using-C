#include<stdio.h>
void mergesort(int array[],int start, int end);
void merge(int array[],int start,int end);

int main(){
    int n=10;
    int array[10]={7,4,8,67,33,85,93,20,11,10};
    int start=0, end=n-1;

    printf("orginal array is \n");
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }

    mergesort(array,start,end);

    printf("\nsorted array is \n");
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }

}
void mergesort(int array[],int start, int end){

    //base case single element is already sorted
    if(start >= end){
        return;
    }
    int mid= start+(end-start)/2; // this optimized method of (start+end)/2 to calculate mid;

    // this recursive call calculate mid of ist half untill mid,start & end points same element;
    mergesort(array,start,mid); // left side

    // this recursive call calculate mid of 2nd half untill mid,start & end points same element;
    mergesort(array,mid+1,end); //  right side


    merge(array,start,end);//this call goes to another function which merge these sorted havles;
}

//NOTE this is not recursion funcrion;
void merge(int array[],int start,int end){

    int mid=start+(end-start)/2;

    int len1=mid-start+1; //calculate length of new array of ist part
    int len2=end-mid;  //calculate length of new array of 2nd part

    //create two new arrays which has length of len1 & len2;
    int first[len1];          // Dynamically allocate temporary arrays,but we need to free it at last
    int second[len2];         // int* first = (int*)malloc(len1 * sizeof(int));
                               // int* second = (int*)malloc(len2 * sizeof(int)); 

    // copy vales from main array to two sub arrays

    int mainArr_1half = start;
    for(int i=0;i<len1;i++){   // vales copy from start to mid, (means first half);
        first[i]=array[mainArr_1half++];
                 // array[start + i]
    }

    int mainArr_2half = mid+1;
    for(int i=0;i<len2;i++){   // vales copy from mid+1 to end, (means second half);
        second[i]=array[mainArr_2half++];
                   // array[mid + 1 + i]
    }

    //merge 2 sorted arrays

    int index1 =0, index2 =0;
    int mainArrindex=start;

    while (index1<len1 && index2<len2)
    {
        if (first[index1] < second[index2])
        {
            array[mainArrindex++] = first[index1++];
        }
        else{
            array[mainArrindex++] = second[index2++];
        }
        
    }

     // Copy remaining elements from first array (if any)
    while (index1 < len1) {
        array[mainArrindex++] = first[index1++];
    }

    // Copy remaining elements from second array (if any)
    while (index2 < len2) {
        array[mainArrindex++] = second[index2++];
    }

    /* Free the dynamically allocated memory,if we don't free, it can cause memory leak
    free(first);
    free(second);
    */

}