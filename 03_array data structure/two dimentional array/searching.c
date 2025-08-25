#include<stdio.h>
int main(){
    int array[3][3],target,flag=0;

    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nenter element:");
            scanf("%d",&array[i][j]);
        }
    }

    printf("enter target: \n");
    scanf("%d",&target);


    printf("orginal matrix is: \n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(array[i][j]==target){
                printf(" element\t index\n %d \t = \t %d,%d \n",array[i][j],i,j);
            }
        }
    }





}