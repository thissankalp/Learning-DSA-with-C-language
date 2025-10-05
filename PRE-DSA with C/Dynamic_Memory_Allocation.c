#include <stdio.h>   
#include <stdlib.h>  // for malloc() and free()

int main() {
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);   

    // Dynamic memory allocation using malloc
    // malloc() allocates a block of memory of given size in BYTES
    // Here we allocate space for 'n' integers
    int *arr = (int*) malloc(n * sizeof(int));

    // IMPORTANT: malloc returns a void* (generic pointer).
    // We cast it to (int*) because we are storing integers.

    // Always check if malloc failed (if it returns NULL)
    if (arr == NULL) {  
        printf("MEMORY ALLOCATION FAILED!\n");
        return 1;   // exit program with error code
    }

    // Take array input from user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);   
    }

    printf("\nElements of Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    // Free allocated memory
    free(arr);
    // IMPORTANT: Always free dynamically allocated memory
    // to avoid "memory leaks" (unused memory that stays reserved).
    // After free(arr), the memory is returned to the system.

    return 0;
}


// Dynamic Memory Allocation in C
// 1. 📌 What is Dynamic Memory Allocation (DMA)?

// Normally when you declare arrays like int arr[10];, the size is fixed at compile-time (static memory).

// But sometimes, you don’t know the size of data in advance (e.g., user enters it).

// Dynamic memory allocation lets you request memory at runtime from the heap (a special memory area managed by the OS).

// 👉 Heap memory remains allocated until you explicitly free() it, unlike stack memory which is auto-managed.

// 🔹 Functions for Dynamic Memory Allocation

// C provides 4 functions (in <stdlib.h>):

// 1. malloc() → Memory Allocation
// ptr = (int*) malloc(n * sizeof(int));


// Allocates a block of memory of size n * sizeof(int) bytes.

// Returns a void* pointer (generic pointer) to the first byte.

// Does not initialize memory (contains garbage values).

// If allocation fails → returns NULL.

// ✅ Example:

// int *arr = (int*) malloc(5 * sizeof(int)); 


// Allocates memory for 5 integers.

// 2. calloc() → Contiguous Allocation
// ptr = (int*) calloc(n, sizeof(int));


// Similar to malloc, but:

// Takes two arguments: number of elements, and size of each element.

// Initializes all allocated memory to zero.

// Returns NULL if fails.

// ✅ Example:

// int *arr = (int*) calloc(5, sizeof(int));


// Allocates memory for 5 integers and initializes all to 0.

// 3. realloc() → Re-allocation
// ptr = realloc(ptr, new_size);


// Used to resize an already allocated block.

// Useful if you want to expand or shrink memory without losing existing data.

// If not enough space, it moves to a new block and copies old data.

// If fails, returns NULL.

// ✅ Example:
// arr = realloc(arr, 10 * sizeof(int));


// Changes memory to hold 10 integers (instead of 5).

// 4. free() → Free Memory
// free(ptr);


// Releases memory back to the system.

// Very important! Forgetting free() → causes memory leak.

// After freeing, set pointer to NULL to avoid dangling pointer problems.