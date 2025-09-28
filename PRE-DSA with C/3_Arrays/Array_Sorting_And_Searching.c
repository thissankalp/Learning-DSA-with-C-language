#include<Stdio.h>
int main(){
    int n;
    printf("Enter the size of your array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for your array : ", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int sorted = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            sorted = 0;
            break;
        }
    }

    if(!sorted){
        printf("array is not sorted. Sorting Now.....\n");
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    else{
        printf("Array is already sorted !\n");
    }

    printf("Sorted Array : ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    int target;
    printf("Enter element to search in the array : ");
    scanf("%d", &target);

    int low = 0;
    int high = n-1;
    int foundindex = -1;

    while(low <= high){
        int m=(low + high)/2;
        if(arr[m] == target){
            foundindex = m;
            break;
        }
        else if(arr[m] < target){
            low  = m + 1;
        }
        else{
            high = m - 1;
        }
    }

    if( foundindex != -1){ 
    printf("Element %d found at %d index.", target, foundindex);
    }

    else{
        printf("Element %d is not in the array.", target);
    }
    return 0;
}