#include<stdio.h>
int main(){
    int array[3][3];
    int zero=0,nz=0;

// take elements from user;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter elements: ");
            scanf("%d",&array[i][j]);
        }
    }
    
    printf("original matrix ix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }

// count zeros and non-zero's elements
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(array[i][j]==0){
                zero++;
            }else{
                nz++;
            }
        }
    }

/*
NOTE:- IMPORTANT STEPs READ IT CAREFULLY;

STEP 1:- checking it is sparse or not with the help of comparison b/w zero and non-zero's elements;
if condition is true (means its sparse) then create a sparse matrix who's rows size is (non-zero's elements),
because we store non-zero elements in this matrix and columns size is 3 for index i,j & values(which are nz ele);

STEP 2:- again we run two nested loops inside this if condition which are access the elements from entered matrix,
then again check if (element != 0) means (array[i][j] != 0) if condition true,

Step(a):- then  put "i"(row index) of element into sparse[r][0]=i; 
where "r" is initially 0,that means sparse[0][0]=i;

Step(b):- then put "j"(column index) of element into sparse[r][1]=j;
where 'r' is still 0,that means sparse[0][1]=j;

Step(c):- then put that element which is on "i,j" index, into sparse[r][2]=array[i][j]; 
where 'r' is still 0,that means sparse[0][2]=array[i][j];

   then r++ ; 'r' is actually row index of sparse matrix, next itiration of inner loop 'r' will be 1;
                                                        that means sparse[1][0]=i;
                                                                   sparse[1][1]=j;
                                                                   sparse[1][2]=array[i][j];
Step(d):-
After complete the traversing of entered matrix and puting all non-zero elements and its index into sparse matrix;
then PRINT sparse matrix inside that if block which compares zero and non-zero's elements at STEP 1;

STEP 2:- else print "not a sparse matrix";
   
*/
    if(zero>nz){       
        int sparse[nz][3],r=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(array[i][j] !=0){
                    sparse[r][0]=i;
                    sparse[r][1]=j;
                    sparse[r][2]=array[i][j];

                    r++;
                }
            }
        }

        printf("sparse matrix is \n");
        for(int i=0;i<nz;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",sparse[i][j]);
        }
        printf("\n");
        }

    }else{
        printf("not a sparse matrix:");
    }

   
    return 0;
    

}
