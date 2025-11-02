#include <stdio.h>
int main(){
    int n;
    printf("Enter size of your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements for your array : ", n);
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Normal Array : \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("Reversed Array : \n");
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}