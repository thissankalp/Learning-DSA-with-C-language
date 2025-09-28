#include<stdio.h>

int main(){
    
    int arr[5];
    printf("-----Welcome to binary search-----");
    printf("Enter 5 elements in sorted manner for your array ((ex:10, 20, 30, 40, 50)): ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter element to find in the array : ");
    scanf("%d", &target);


    int low = 0;
    int high = 4;
    int found = 0;

    while(low <= high){
        int m = (low + high)/2;
        if(target == arr[m]){
            printf("%d element is at %d index.",target, m);
            found = 1;
            break;
        }

        else if(target < arr[m]){
            high = m-1;
        }

        else{
            low = m+1;
        }
    }  

    if(!found){
        printf("Entered element not found in the array !");
    }
    return 0;
}