#include<stdio.h>

int countup(int n, int limit){
    if(n>limit){
        printf("Function base condition hit.");
        return 0;
    }
    printf("%d\n", n);
    return countup(n+1, limit);
}

int main(){
    int num;
    printf("Enter a number you want to print upto : ");
    scanf("%d", &num);

    countup(1, num);
}

//Here in the main function the value of 1 is stored into n in the countup function and the value of num is stored inside the limit in the countup function.  