#include <stdio.h>

int main (){

    int arr[5];
    printf("Enter 5 elements for your array :");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    //for finding largest element in the array
    int max = arr[0];
    for(int i = 1; i<5 ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    //for finding smallest element in the array
    int min = arr[0];
    for(int i = 1; i<5; i++){
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }

    //Single loop for checking both minimum and maximum 
    // int min = arr[0];
    // int max = arr[0];
    // for(int i = 1; i<5 ; i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    //     if (arr[i]<min)
    //     {
    //         min = arr[i];
    //     }
    // }
    
    printf("The largest element in your array is : %d \n", max);
    printf("The smallest element in your array is : %d \n", min);
    return 0;
}