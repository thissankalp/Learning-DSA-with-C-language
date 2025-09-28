#include<stdio.h>

// int maxNum(int a, int b){
//     if(a>b){
//         printf("%d is bigger than %d.", a, b);
//     }

//     else{
//         printf("%d is bigger than %d.", b, a);
// }
// return 0;
// }

// int main(){
//     int x, y;
//     printf("Enter a number:");
//     scanf("%d", &x);

//     printf("Enter another number:");
//     scanf("%d", &y);

//     maxNum(x,y);
//     return 0;
// }

int maxNum(int a, int b){
    if(a>b){
        return a;
    }

    else{
        return b;
    }
}

int main(){
    int x, y, result;

    printf("Enter a number:");
    scanf("%d", &x);

    printf("Enter another number:");
    scanf("%d", &y);

    result = maxNum(x,y);

    printf("The greatest number between %d and %d is %d",x,y,result);
    return 0;
}