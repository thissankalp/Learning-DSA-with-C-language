#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i<5; i++){
        printf("Array element at %d is %d.\n", i, arr[i]);
    }
    return 0;
}