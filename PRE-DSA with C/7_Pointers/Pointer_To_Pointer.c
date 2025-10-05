#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x : %d\n", x);
    printf("Value of x using *p : %d\n", *p);
    printf("Value of x using **pp : %d\n", **pp);

    printf("Address of x : %p\n", &x);
    printf("Address stored in *p : %p\n", p);
    printf("Address stored in **pp : %p\n", pp);

    return 0;
}

// A pointer to pointer is a variable that stores the address of 
// another pointer instead of directly pointing to a regular variable.