#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Enter a number :");
    scanf("%d", &num);

    for(int i=1;i<=num;i++){
        sum = sum + i;
    }
    printf("Sum of numbers from 1 to %d = %d\n", num, sum);
    return 0;
}

