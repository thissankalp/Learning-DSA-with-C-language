#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){

    int num, result;
    printf("Enter a number :");
    scanf("%d", &num);

    if(num<0){
        printf("Factorial for negative numbers is not defined.");
    }

    else
    {
        result = factorial(num);
        printf("Factorial of %d is %d", num, result);
    }
    return 0;
}