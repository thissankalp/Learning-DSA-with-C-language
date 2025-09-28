#include<stdio.h>
int Multi(int n){
    printf("Multiplication Table of %d : \n", n);
    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    Multi(num);
    return 0;
}