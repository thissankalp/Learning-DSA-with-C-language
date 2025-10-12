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


// Insertion Sort – How It Works (Step-by-Step)

// Start from the second element.
// Compare it with elements before it and insert it into the correct position.
// Continue this for each element until the entire array is sorted.

// Example with Array: [29, 10, 14, 37, 13]

// Step 1:
// Take the 2nd element → 10
// Compare with 29 → 10 < 29 → insert before 29
// Array: [10, 29, 14, 37, 13]

// Step 2:
// Take the 3rd element → 14
// Compare with 29 → 14 < 29 → move 29 right
// Compare with 10 → 14 > 10 → insert after 10
// Array: [10, 14, 29, 37, 13]

// Step 3:
// Take the 4th element → 37
// Compare with 29 → 37 > 29 → no movement needed
// Array: [10, 14, 29, 37, 13]

// Step 4:
// Take the 5th element → 13

// Compare with 37 → 13 < 37 → move 37 right
// Array: [10, 14, 29, 37, 37]

// Compare with 29 → 13 < 29 → move 29 right
// Array: [10, 14, 29, 29, 37]

// Compare with 14 → 13 < 14 → move 14 right
// Array: [10, 14, 14, 29, 37]

// Compare with 10 → 13 > 10 → insert after 10
// Array: [10, 13, 14, 29, 37]

// Sorted!