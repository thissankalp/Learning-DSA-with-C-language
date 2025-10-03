#include<stdio.h>

int main(){

    int x = 10;
    int *p = &x;

    printf("Value of x : %d\n", x);
    printf("Address of x : %p\n", &x);
    printf("Pointer p stores address : %p\n", p);
    printf("Value at address stored at p : %d\n", *p);
    return 0;
}

//A pointer is simply a variable that stores the address of another variable.
