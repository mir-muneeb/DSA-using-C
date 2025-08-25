#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue_arr[size];

int rear = -1;

void enqueue(int data);
int dequeue();
int peek();


int main(){
    enqueue(3);
    enqueue(9);
    enqueue(13);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    
    
    peek();
    dequeue();
    dequeue();

    enqueue(11);
    enqueue(12);

    peek();
}



int isfull(){
    if(rear == size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    if( rear == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int peek(){
    if(isempty()){
        printf("\nqueue is empty, cannot have peek value");
    }
    else{
        
        printf("\npeek value is %d",queue_arr[0]);
        
    }
}



void enqueue(int data){
    if (isfull())
    {
       printf("\nqueue is overflow");
       return ; // Indicate failure
    }
    else{
    
        rear++;
        queue_arr[rear]=data;
        printf("\n%d is added ",queue_arr[rear]);
    }
}


int dequeue(){
    if(isempty()){
        printf("\n queue is underflow");
        return -1; // Indicate failure
        
    }
    else{
        int front = queue_arr[0];
        for(int i=0;i<=rear;i++){       // it shifts all elements to front 'means on 0 index'
            queue_arr[i]=queue_arr[i+1];
        }
        rear--;
        
        printf("\n%d is removed",front);
    }
}
