#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue_arr[size];
int front = -1, rear = -1;

int enqueue(int data);
void dequeue();
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
    if((rear + 1) % size == front)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    if(rear == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int enqueue( int data){
    if(isfull()){
        printf("\nqueue is full!!");
        //return -1;
    }
    else{
        // ist element
        if(rear== -1){
            front = 0;
        }
        rear = (rear+1) % size;
        queue_arr[rear]=data;
        printf("\n%d is added", queue_arr[rear]);
        
    }
}

void dequeue(){
    if(isempty()){
        printf("\nueue is underflow!!");
        //return -1;
    }
    int result = queue_arr[front];

    //single element
    if(rear == front){
        rear = front = -1;
    }else{
        front = (front+1) % size;
    }
    
    printf("\n%d is removed",result);
}

int peek(){
    if(isempty()){
        printf("\ncannot have peek because queue is empty!!");
        return -1; // Indicate failure
    }else{
        printf("\npeek element is %d",queue_arr[front]);
        return queue_arr[front];
    }
}