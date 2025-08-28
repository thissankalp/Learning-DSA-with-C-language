#include<stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n-1);
}

int main(){
    int num;
    printf("Enter a num :");
    scanf("%d", &num);

    int result = sum(num);
    printf("Sum of numbers upto %d = %d", num, result);
    return 0;
}