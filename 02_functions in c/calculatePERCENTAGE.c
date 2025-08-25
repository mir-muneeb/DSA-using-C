#include<stdio.h>

int percentage(int c,int py, int js,int java, int ca);
int main(){
    int c=60;
    int py=70;
    int js=61;
    int java=62;
    int ca=61;
    printf("total percentage is %d",percentage(c,py,js,java,ca));

}
int percentage(int c,int py, int js,int java, int ca){

    int total=(c+py+js+java+ca)/5;
    return total;

}