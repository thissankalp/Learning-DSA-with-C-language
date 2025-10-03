#include<stdio.h>

void insertionSort(int arr[], int n){
    // Start from index 1 because a single element (index 0) is considered already "sorted"
    for(int i = 1; i < n; i++){

        int curr = arr[i];   // Store the current element to be inserted
        int prev = i - 1;    // Index of the previous element

        // Shift larger elements one position ahead to make space for curr
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];   // Move element right
            prev--;                      // Move left to check previous element
        }

        // Insert curr into the correct position
        arr[prev + 1] = curr;
    }
}

int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements for the your array :", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array using Insertion Sort: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}