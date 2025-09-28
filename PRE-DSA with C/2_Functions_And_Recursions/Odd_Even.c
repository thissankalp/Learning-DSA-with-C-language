//#include<stdio.h>
// void EvenOrOdd(int n){
//     if(n%2==0){
//         printf("%d is a Even number.", n);
//     }
//     else{
//         printf("%d is a Odd number.", n);
//     }
// }

// int main(){
//     int num;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     EvenOrOdd(num);
// }

#include<stdio.h>
int EvenOrOdd(int n){
    return (n % 2 == 0);
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(EvenOrOdd(num)){
        printf("%d is a Even number.", num);
    }
    else{
        printf("%d is a Odd number.", num);
    }
    return 0;
}