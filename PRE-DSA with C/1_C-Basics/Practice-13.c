#include<stdio.h>

int main(){
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    //Euclid's algorithm to find GCD(Greatest Common Divisor)
    while(b!=0){
        int r = a % b;
        a=b;
        b=r;
    }
    printf("GCD : %d\n", a);
    return 0;
}