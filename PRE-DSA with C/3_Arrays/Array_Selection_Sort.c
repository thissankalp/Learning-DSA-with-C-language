#include<stdio.h>

int main(){
    int arr[5];
    printf("Enter 5 elements for your array : ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    //selection sort
    
    for(int i = 0; i < 5-1; i++){
        int min_index = i;
        for(int j = i + 1; j<5; j++){
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
    printf("Elements sorted :");
    for(int i = 0; i<5; i++){
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