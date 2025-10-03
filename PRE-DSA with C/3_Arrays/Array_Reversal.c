#include<stdio.h>

int main(){
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d Elements for your array : ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array in reversed ordered : \n");
    for(int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}

