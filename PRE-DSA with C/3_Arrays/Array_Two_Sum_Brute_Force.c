#include<stdio.h>

int main(){
    int n;
    printf("Enter size of your array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements for your array : ");
    for(int i = 0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter target sum you want to find : ");
    scanf("%d", &target);

    int found = 0;
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j < n; j++){
            int curr_sum = arr[i]+arr[j];
            if(curr_sum == target){
                printf("Target sum found !");
                printf("Element in array are : %d %d", i, j);
                printf("%d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
            }
        }
    }

    if(!found){
        printf("Entered Sum not found !");
    }

    return 0;
}
