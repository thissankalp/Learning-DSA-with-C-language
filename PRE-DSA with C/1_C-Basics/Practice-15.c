#include <stdio.h>
int main() {
    int a, b, choice;   
    char cont;

    do{
        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);

        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Addition: %d\n", a + b);
                break;
            case 2:
                printf("Subtraction: %d\n", a - b);
                break;
            case 3:
                printf("Multiplication: %d\n", a * b);
                break;
            case 4:
                if(b != 0)
                    printf("Division: %d\n", a / b);
                else
                    printf("Error: Division by zero!\n");
                break;
            case 5:
                if(b != 0)
                    printf("Modulus: %d\n", a % b);
                else
                    printf("Error: Modulus by zero!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

        printf("Do you want to countinue? (y/n):");
        scanf(" %c", &cont);

        if (cont == 'N' || cont == 'n'){
            printf("You Exited the Program.");
        }
    }while(cont == 'Y' || cont == 'y');

    return 0;
}
