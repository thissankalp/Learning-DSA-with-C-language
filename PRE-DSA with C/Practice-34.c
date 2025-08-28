#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1){
        printf("1 ");
        return 1;
    }
    printf("%d * ", n);
    return n * factorial(n-1);
}

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    printf("Factorial Process : \n");
    int result = factorial(num);
    printf("= %d\n", result);
    return 0; 
}

// #include<stdio.h>

// int factorial(int n){
//     if(n == 0 || n == 1){
//     printf("Function base condition hit.");
//     return 1;
//     }
//     return n * factorial(n-1);
// }

// int main(){
//     int num;
//     printf("Enter a number :");
//     scanf("%d", &num);

//     printf("Factorial of %d is %d", num, factorial(num));
//     return 0; 
// }