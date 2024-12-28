#include<stdio.h>

int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age >= 18){
        printf("you are adult,you can vote");
    }
    else if(age <18 && age >=12 ){
        printf("you are below 18, you can't vote !");
    }
    else{
        printf("you are a child..😍");
    }
}