#include<stdio.h>

int main(){

    int arr[5];
    int n=5;
    printf("\n=-=-=-= Welcome to interpolation Search =-=-=-=\n");
    printf("Enter 5 elements for your array :");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter element to find in the array :");
    scanf("%d", &target);

    int low = 0;
    int high = n-1;
    int foundindex = -1;

    while(low <= high){
        int pos = low +(target - arr[low]) * (high - low) / (arr[high] - arr[low]);
        if(arr[pos] == target){
            foundindex = pos;
            break;
        }
        if(arr[pos] < target){
            low = pos + 1;
        }
        high = pos - 1;
    }

    printf("Entered element %d found at index %d.", target, foundindex);
    return 0;
}