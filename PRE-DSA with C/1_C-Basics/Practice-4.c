#include <stdio.h>

int main(){
    // int a = 3;
    // int b = 5;
    int c;
    printf("Enter a number :");
    scanf("%d", &c);

    // if(c%a==0 && c%b==0)
    if(c%3==0 && c%5==0){
        printf("%d is divisible by 3 and 5.", c);
    }

    else{
        printf("%d is not divisible by 3 and 5.", c);
    }
    return 0;
}