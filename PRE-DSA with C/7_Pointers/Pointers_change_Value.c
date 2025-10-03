#include<Stdio.h>

void change(int *p){
    *p = 100;
}

int main(){
    int x = 10;
    change(&x);

    printf("Value of x : %d\n", x);
    return 0;
}