#include<stdio.h>

int main(){
    int arr[5];
    int n = 5;
    printf("Enter 5 elements for the array :" );
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }


for(int i = 0; i<n-1; i++){
    for(int j = 0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
printf("Array sorted by bubble sort :\n");
for(int i = 0; i<n; i++){
    printf("%d ", arr[i]);
}
return 0;
}