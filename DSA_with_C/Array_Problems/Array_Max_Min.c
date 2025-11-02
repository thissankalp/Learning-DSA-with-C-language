#include <stdio.h>

int main(){
    int n;
    printf("enter size of your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d element for your array : ", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Maximum Element : %d\n", max);
    printf("Minimun Element : %d", min);
    return 0;
}