///Iterative Method for finding GCD (Greatest Common Divisor)///

// #include<stdio.h>

// int GCD(int a, int b){
//     int gcd = 1;
//     for(int i = 1; i<=a && i<=b; i++){
//         if(a % i == 0 && b % i == 0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }

// int main(){
//     int num1, num2;
//     printf("Enter two numbers:");
//     scanf("%d %d", &num1, &num2);
    
//     int result = GCD(num1, num2);
//     printf("GCD of the given numbers is : %d", result);
//     return 0;
// }


///Euclid's Algorithm method for finding GCD (Greatest Common Divisor)///
#include<stdio.h>

int GCD(int a, int b){
    while(b!=0){
        int r = a % b;
        a=b;
        b=r; 
    }
    return a;
}

int main(){
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    
    int result = GCD(num1, num2);
    printf("GCD of the given numbers is : %d", result);
    return 0;
}

