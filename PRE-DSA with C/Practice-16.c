// #include <stdio.h>

// int main() {
//     int a, b, c, d;
//     int choice;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     c = a + b;
//     printf("The addition of given two numbers: %d\n", c);

//     do {
//         printf("\nDo you want to add more numbers? (1 = Yes, 0 = No): ");
//         scanf("%d", &choice);

//         if (choice == 1) {
//             printf("Enter another number to add: ");
//             scanf("%d", &d);
//             c = c + d;
//             printf("Updated sum: %d\n", c);
//         } else if (choice == 0) {
//             printf("You exited the sum program. Final Sum = %d\n", c);
//         } else {
//             printf("Invalid choice! Please enter 1 or 0.\n");
//         }

//     } while (choice != 0);

//     return 0;
// }


#include<stdio.h>

int main(){

    int num, sum = 0;

    printf("Enter numbers to keep adding and enter 0 to exit the program :");
    scanf("%d", &num);

    while (num !=0)
    {
        sum += num;
        scanf("%d", &num);
    }

    printf("Final Sum : %d\n", sum);
    
}