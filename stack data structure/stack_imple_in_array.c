#include<stdio.h>
#define size 5

int stack_arr[size];
int top = -1;
void push_element(int data);
int pop_element();

int main(){
    //push_element(4);
   // push_element(5);
    //push_element(6);
    //push_element(8);
    pop_element();
    
}
void push_element(int data){
    if (top == size-1)
    {
        printf("stack is full");
        return;
    }else{
        top++;
        stack_arr[top]=data;
        printf("%d is pushed\n",stack_arr[top]);
    }
}
int pop_element(){
    int value;
    if (top == -1)
    {
        printf("stack is empty");
    }
    value=stack_arr[top]; 
    top--;
    printf("\n%d is poped",value);
}

