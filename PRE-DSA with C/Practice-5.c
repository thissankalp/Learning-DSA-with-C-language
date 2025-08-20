#include<stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    if(num%2==0 && num>0){
        printf("Your number is positive and even.");
    }
    else if(num%2!=0 && num>0){
        printf("Your number is positive and odd.");
    }
    else if(num%2==0 && num < 0){
        printf("your number is negative and even.");
    }
    else if(num%2!=0 && num < 0){
        printf("your number is negative and odd.");
    }
    else{
        printf("your number is 0.");
    }

    return 0;
}