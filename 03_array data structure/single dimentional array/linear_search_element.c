#include<stdio.h>
int search(int array[],int find);
int main() {
    int n;
    int array[10] = {1, 2, 3, 4, 5, 5, 77, 8, 9, 0};
    printf("enter no which you want to find: ");
    scanf("%d",&n);


    for (int i = 0; i < 10; i++) {
        if (n == array[i]) {
            printf("\n%d is present in an array at %d index ", n,i);
        }
    }
    return 0;
}