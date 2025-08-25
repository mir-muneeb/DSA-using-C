#include<stdio.h>
#include<math.h>

void sqr(int n,int pow);
int main(){
    sqr(2,5);

}
void sqr(int n,int pow){
   
    float value=0;
    value=n*pow;
    
    printf("square of %d is %f",n,value);
    
}