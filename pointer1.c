#include<stdio.h>

int main() {
    int x=5;
    int *ptr =&x;

    *ptr = 20;   //modifies value at address of x
    printf("x=%d\n",x); //output:20
    return 0;
}