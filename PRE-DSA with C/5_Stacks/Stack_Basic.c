#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int push(int value){
    if(MAX == -1){
        printf("Stack Overflow !");
        return 0;
    }

    top++;
    stack[top] = value;
    return 1;
}

int pop(){
    if(top == -1){
        printf("Stack Underflow !");
        return -1;
    }
    int poppedvalue = stack[top];
    top--;
    return poppedvalue;
}

int peek(){
    if(top == -1){
        printf("Stack Underflow");
        return -1;
    }
    return stack[top];
}

void display(){
    if(top == -1){
        printf("Stack Underflow !");
        return;
    }
    printf("Stack elements (top to bottom): \n");
    for(int i = top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);

    display();

    pop();

    printf("Stack after popping !");

    display();

}