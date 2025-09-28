#include <stdio.h>
int main(){
    int a, b, choice;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);

    printf("Choose an operation from the following list and enter the number of the operation :\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("Addition : %d\n", a + b);
        break;
        case 2:
        printf("Subtraction : %d\n", a - b);
        break;
        case 3:
        printf("Multiplication : %d\n", a * b);
        break;
        case 4:
        if(b!=0){
        printf("Division : %d\n", a / b);
        }
        else{
            printf("Division cannot be performed as denominator is 0.");
        }
        break;
        case 5:
        if(b!=0){
        printf("Modulus : %d\n", a % b);
        }
        else{
            printf("Modulus cannot be performed as denominator is 0.");
        }
        break;
        
    }
    return 0;
}