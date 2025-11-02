#include<stdio.h>
int main(){
    int n;
    printf("Enter size of your array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for your array : ",n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Original Array : \n");
    for(int i = 0; i<n ;i++){
        printf("%d ", arr[i]);
    }

    int start = 0;
    int end = n-1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("\nReversed Array (permanently) : \n");
    for(int i = 0; i<n ;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}