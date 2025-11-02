#include<stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int enqueue(int value){
    if(rear == MAX -1){
        printf("Queue Overflow !");
        return 0;
    }

    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear]=value;
    return 1;
}

int dequeue(){
    if(front == -1 || front > rear){
        printf("queue Underflow !");
        return -1;
    }
    int removedValue = queue[front];
    front++;
    if(front > rear){
        front = rear = -1;
    }
    return removedValue;
}

int peek(){
    if(front == -1 || front > rear){
        printf("queue is empty !");
        return -1;
    }
    return queue[front];
}

int isEmpty(){
    return (front == -1);
}

int isFull(){
    return (rear == MAX-1);
}

void display(){
    if(front == -1 || front>rear){
        printf("queue is empty !");
        return;
    }
    printf("Queue (front -> rear) :");
    for(int i= front; i<=rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){

    display();
    return 0;
}