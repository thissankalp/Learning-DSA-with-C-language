#include<stdio.h>

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}

int main(){
    printf("-----Welcome to bubble sorting of array-----");
    int n;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter 5 elements for the array :" );
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

// for(int i = 0; i<n-1; i++){
//     for(int j = 0; j<n-i-1; j++){
//         if(arr[j]>arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
//     }
// }

printf("Array sorted by bubble sort :\n");
for(int i = 0; i<n; i++){
    printf("%d ", arr[i]);
}

return 0;
}

// Bubble Sort – How It Works (Step-by-Step)

// Compare adjacent elements and swap them if they are in the wrong order.

// After each pass, the largest element "bubbles up" to its correct position.

// Repeat the process for all remaining elements until the array is sorted.

// Example with Array: [29, 10, 14, 37, 13]

// Step 1:
// Compare pairs:
// (29,10) → swap → [10, 29, 14, 37, 13]
// (29,14) → swap → [10, 14, 29, 37, 13]
// (29,37) → no swap → [10, 14, 29, 37, 13]
// (37,13) → swap → [10, 14, 29, 13, 37]

// Step 2:
// Compare until 4th element (since last is sorted):
// (10,14) → no swap → [10, 14, 29, 13, 37]
// (14,29) → no swap → [10, 14, 29, 13, 37]
// (29,13) → swap → [10, 14, 13, 29, 37]

// Step 3:
// Compare until 3rd element:
// (10,14) → no swap → [10, 14, 13, 29, 37]
// (14,13) → swap → [10, 13, 14, 29, 37]

// Step 4:
// Compare until 2nd element:
// (10,13) → no swap → [10, 13, 14, 29, 37]

// Sorted!