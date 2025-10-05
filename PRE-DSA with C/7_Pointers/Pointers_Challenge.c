#include <stdio.h>

void modification(int **pp){
    **pp = 25;
}

int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;
    
    modification(pp);

    printf("Value of x : %d\n", x);
    printf("Value of *p : %d\n", *p);
    printf("Value of **pp : %d\n", **pp);

}