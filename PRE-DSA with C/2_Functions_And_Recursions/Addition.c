#include<stdio.h>

// int add(int a, int b){
//     int c= a + b;
//     printf("Addition of two numbers : %d", c);
//     return c;
// }

// int main(){
//     add(34, 43);
//     return 0;
// }

int add(int a, int b){
    return a + b;
}

int main(){
    int result = add(32, 43);
    printf("Addition of two numbers : %d\n", result);
    return 0;
}