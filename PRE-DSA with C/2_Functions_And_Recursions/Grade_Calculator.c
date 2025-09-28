#include <stdio.h>

int gradecalc(int n){
    if(n>=90){
        return 'A';
    }
    else if (n>=75){
        return 'B';
    }
    else if (n>=50){
        return 'C';
    }
    else if(n>=40){
        return 'D';
    }
    else {
        return 'F';
    }
}

int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    printf("Grade based on your marks : %c\n", gradecalc(marks));
    return 0;
}