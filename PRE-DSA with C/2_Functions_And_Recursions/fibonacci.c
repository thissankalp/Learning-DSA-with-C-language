#include<stdio.h>

int fibonacci(int n){
    int a=0, b=1;
    printf("Fibonacci series : %d %d", a, b);
    for(int i = 3; i<=n; i++){
        int c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    printf(" \n");
    return 0;
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}