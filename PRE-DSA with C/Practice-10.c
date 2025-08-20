#include<stdio.h>

int main(){
    int num, sign=1;
    printf("Enter a number:");
    scanf("%d", &num);

    if(num<0){
        sign = -1;
        num = -num;
    }

    int rev = 0;
    while(num>0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    rev = rev * sign;
    printf("Reversed Number: %d", rev);

    return 0;
}