
//Example 1:print numbers 1 to 10
#include<stdio.h>
int main() {
    for(int i=1; i<=10; i++) {
        printf("%d \n",i);
    }

    //Example 2:print even numbers
    for(int i=2; i<=20; i+=2) {
        printf("%d \n",i);
    }

    //Example 3: Calculate sum of first 5 numbers
    
    int sum=0;
    for(int i=1; i<=5; i++) {
        sum+=i;
    }
    printf("sum= %d\n",sum);
    return 0;

}