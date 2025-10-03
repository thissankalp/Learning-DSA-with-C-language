#include <stdio.h>

int main(){
    int x;
    int *p;

    p = &x;
    *p = 25;

    printf("Value of x : %d\n", x);
    return 0;
}