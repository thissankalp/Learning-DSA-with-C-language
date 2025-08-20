// LeetCode Problem 509 

#include<stdio.h>
#include<stdlib.h>

int fib(int n){
    if (n==1) return 1;
    if (n==0) return 0;

    return fib(n-1) + fib(n-2);
    
}

int main(){
    int n=5;
    int result = fib(n);

    printf("%d", result);
}