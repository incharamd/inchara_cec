#include <stdio.h>

int main() {
    int a=10;
    int *p = &a;
    int **q =&p;  //pointer to pointer

    printf("value of a =%d\n",a);
    printf("value using *p =%d\n",*p);
    printf("value using **q =%d\n",**q);

    return 0;

}
