#include<stdio.h>

int *twoSum(int* num, int numSize, int target, int * returnSize){
    *returnSize = 2;
    int * result = (int*)malloc(2*sizeof(int));

    if(!result){
        *returnSize = 0;
        return NULL;
    }
    for(int i = 0; i<numSize; i++){
        for(int j= i+1; j<numSize; j++){
            if(num[i]+num[j]==target){
                result[0]=i;
                result[1]=j;
            return result;
            }
        }
    }
    *returnSize = 0;
    free(result);
    return NULL;
}

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
}
