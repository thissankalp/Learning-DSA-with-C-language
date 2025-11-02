#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements for your array : ", n);
    for(int i = 0;i<n; i++){
        scanf("%d", &arr[i]);
    }

    int freq[n+1];
    for(int i=0; i<=n; i++){
        freq[i]=0;
    }
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<=n;i++){
        if(freq[i]==1){
            printf("%d ocurred in the whole array only once hence it is a unique element.\n", i);
        }
    }
    return 0;
}
