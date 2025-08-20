#include <stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    if(num < 0){
        num = -num;
    }

    if(num == 0){
        printf("Number has 1 digit.\n");
        return 0;
    }

    int count = 0;
    while(num>0){
        num = num/10;
        count++;
    }

    printf("The number has %d digits.\n", count);
    return 0;
}