#include<stdio.h>

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int smallestIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        if(smallestIndex != i){
            int temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;
        }
    }
}

int main(){
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for your array : ", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //selection sort
    
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int j = i + 1; j<n; j++){
            if(arr[j] <= arr[min_index]){
            min_index = j;
            }
        }
        
        if(min_index != i){
                int temp = arr[i];
                arr[i] = arr[min_index];
                arr[min_index] = temp;
            }
    }

    printf("Elements sorted : ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


// Selection Sort – How It Works (Step-by-Step)

// Find the smallest (or largest) element in the unsorted part of the array.

// Swap it with the first element of the unsorted part.

// Move the boundary between sorted and unsorted by one position.

// Repeat until the entire array is sorted.

// Example with Array: [29, 10, 14, 37, 13]

// Step 1:
// Find the smallest element → 10
// Swap it with 29 → [10, 29, 14, 37, 13]

// Step 2:
// Now consider [29, 14, 37, 13]
// Find the smallest → 13
// Swap with 29 → [10, 13, 14, 37, 29]

// Step 3:
// Now [14, 37, 29]
// Find smallest → 14
// No swap → [10, 13, 14, 37, 29]

// Step 4:
// Now [37, 29]
// Find smallest → 29
// Swap with 37 → [10, 13, 14, 29, 37]

// Sorted!