#include<stdio.h>

int main (){

    int arr[5];
    printf("-----Welcome to linear search-----");
    printf("Enter 5 elements for your array :");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    int search,found=0;
    printf("Enter an element to search in the array : ");
    scanf("%d", &search);


    for(int i = 0; i<5; i++){
        if(arr[i] == search){
            printf("\nElement %d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Entered element not found in the array.");
    }
    return 0;
}