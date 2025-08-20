#include<stdio.h>

int main(){
    float celcius;
    float fahreinheit;

    printf("Enter your temperature in celcius :");
    scanf("%f", &celcius);

    fahreinheit = (9.0/5.0 * celcius) + 32;

    printf("Temperature in fahreinheit is : %f", fahreinheit);

}