#include<stdio.h>

int percentage(int ca,int it, int c,int java);
int main(){
    int ca=98;
    int it=87;
    int c=77;
    int java=87;
    printf("total percentage is %d",percentage(ca,it,c,java));

}
int percentage(int ca,int it, int c,int java){

    int total=(ca+it+c+java)/4 ;
    return total;

}