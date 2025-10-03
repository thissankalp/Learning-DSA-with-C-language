#include<stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a, b;
    printf("Enter value for A : ");
    scanf("%d", &a);
    printf("Enter value for B : ");
    scanf("%d", &b);

    printf("Value of A before swapping : %d\n Value of B before swapping : %d", a, b);
    printf(" \n");
    swap(&a, &b);
    printf("Value of A after swapping : %d\n Value of B after swapping : %d", a, b);
    return 0;
}