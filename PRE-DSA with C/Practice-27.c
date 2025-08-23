#include<stdio.h>

int isPrime(int n) {
    for(int i = 2; i<=n; i++){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("%d is prime.", num);
    }

    else{
        printf("%d is not prime.", num);
    }
    return 0;
}