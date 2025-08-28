#include<stdio.h>

int countup(int n){
    if(n>5){
        printf("Function base condition hit.");
        return 0;
    }
    printf("%d\n", n);
    return countup(n+1);
}

int main(){
    countup(1);
    return 0;
}

// A recursion is like a loop, but instead of repeating with for or while, the function calls itself.

// If there is no base condition, the function keeps calling itself endlessly → leading to infinite recursion (and crash).

// The base condition is the "stop signal" that prevents the function from going on forever.

// Each recursive call reduces (or simplifies) the problem until the base condition is met.