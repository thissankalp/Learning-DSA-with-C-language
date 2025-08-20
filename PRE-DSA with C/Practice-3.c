#include<stdio.h>
int main(){
    int a, b, c, d, e, f, g;

    printf("Enter a number :");
    scanf("%d", &a);
    printf("Enter another number :");
    scanf("%d", &b);

    c = a + b;
    d = a - b;
    e = a * b;

    printf("---Results---\n");
    printf("Addition : %d\n", c);
    printf("Subtraction : %d\n", d);
    printf("Multiplication : %d\n", e);
    
    if(b != 0){
    f = a / b;
    g = a % b;
    printf("Divsion : %d\n", f);
    printf("Modulus : %d\n", g);
    }
    else{
        printf("Division and Modulus is not possible as denominator is 0.");
    }
    return 0;
}