#include<stdio.h>

int main() {
    int a=10;    // normal variable
    int *p;      //pointer variable declaration

    p=&a;        //store address of 'a' in pointer 'p'

    printf("value of a = %d\n",a);     //10
    printf("adress of a =%d\n",&a);    //some address
    printf("pointer p stores =%p\n",p);  //same as &a
    printf("value pointed by p =%d\n",*p);  //10

    return 0;
}