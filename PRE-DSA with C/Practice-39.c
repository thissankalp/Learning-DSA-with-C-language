#include<stdio.h>
int main(){
    int arr[5];

    printf("Enter 5 elementys for an array : ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(int i= 0; i<5; i++){
    printf("Array element at %d is %d\n", i, arr[i]);
    }

    int sum = 0;
    for(int i = 0; i<5; i++){
        sum += arr[i];
    }

    printf("Sum of all the entered elements in the array : %d", sum);

    return 0;
}