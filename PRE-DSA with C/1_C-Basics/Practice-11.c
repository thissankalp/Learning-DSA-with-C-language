#include <stdio.h>

int main() {
    int num;
    printf("Enter how many Fibonacci series numbers to print: ");
    scanf("%d", &num);

    int a = 0, b = 1;

    if (num <= 0) {
        printf("Enter a positive number.\n");
    }
    else if (num == 1) {
        printf("Fibonacci series: %d\n", a);
    }
    else {
        printf("Fibonacci series: %d %d", a, b);
        for (int i = 3; i <= num; i++) {
            int c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}
