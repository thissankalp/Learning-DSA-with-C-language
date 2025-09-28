#include<stdio.h>
int main(){
    int n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for an array : \n", n);
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(int i= 0; i<5; i++){
    printf("Array element at %d is %d\n", i, arr[i]);
    }

    return 0;
}