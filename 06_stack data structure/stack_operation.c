#include<stdio.h>
#define size 5

int stack_arr[size];
int top = -1;
void push(int data);
int pop();
int peek();


int main(){
    push(4);
    push(5);
    push(6);
    push(8);
    push(11);
    push(99);

    peek();

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    peek();
}
int isfull(){
   if(top == size-1){
       return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
    

// this function returns top most element in a stack
int peek(){
    if (isempty()) {
        printf("\nStack is empty. Cannot peek.\n");
    } else {
        printf("\nPeek element is: %d\n", stack_arr[top]);
    }
}


void push(int data){
    if (isfull()) 
    {
       printf("stack is full");
       
    }
    else{
        //top++;
        stack_arr[++top]=data;
        printf("\n%d is pushed\n",stack_arr[top]);
    }
}

int pop(){
    int value;
    if (isempty()){
        printf("\nstack is empty");    
    }
    else{
        value=stack_arr[top--]; 
       // top--;
        printf("\n%d is poped",value);
    }
}

