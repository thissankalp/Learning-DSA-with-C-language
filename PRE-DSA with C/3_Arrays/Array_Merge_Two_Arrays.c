#include<stdio.h>

int main(){
    int n;
    printf("Enter size of an array 1: ");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter %d elements for your array 1 : ", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    int m;
    printf("Enter size of an array 2: ");
    scanf("%d", &m);
    int arr2[m];

    printf("Enter %d elements for your array 2 : ", m);
    for(int i = 0; i<m; i++){
        scanf("%d", &arr2[i]);
    }

    int merged[n+m];
    int k = 0;

    for(int i = 0; i<n; i++){
        merged[k++] = arr1[i];
    }

    for(int i = 0; i<m; i++){
        merged[k++] = arr2[i];
    }

    for(int i = 0; i<n+m-1; i++){
        for(int j = 0; j<n+m-1-i; j++){
            if(merged[j]>merged[j+1]){
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }

    printf("Merged array 1 and 2 and sorted them in ascending order : \n");
    for(int i = 0; i<n+m; i++){
        printf("%d ", merged[i]);
    }
}