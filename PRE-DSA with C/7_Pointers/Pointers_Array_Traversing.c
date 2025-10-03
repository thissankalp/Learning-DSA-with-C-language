#include<stdio.h>

int main(){
    int n;
    printf("Enter size of your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements for your array : ", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int *p = arr;

    printf("Elements in your array :\n");
    for(int i = 0; i<n; i++){
        printf("%d\n", *p);
        p++;
    }
}