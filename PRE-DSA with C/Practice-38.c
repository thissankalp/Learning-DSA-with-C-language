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

    return 0;
}