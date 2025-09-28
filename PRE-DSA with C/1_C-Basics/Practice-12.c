#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(num<=1){
        printf("Number is not prime.");
        return 0;
    }
    int isPrime = 1;
    for(int i=2; i * i <=num; i++){
        if(num % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime){
        printf("Number is prime.");
    }
    else{
        printf("Number is not prime.");
    }
    return 0;
}