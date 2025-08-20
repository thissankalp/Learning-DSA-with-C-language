#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    while(num%2==0){
        printf("Number is not prime.");
    }

    printf("Number is prime.");
    return 0;
}