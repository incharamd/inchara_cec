// keep taking input until user enters a prime number
#include<stdio.h>

int main() {
    int n,i,isprime;
    do {
        printf("enter number:");
        scanf("%d",&n);
       
        isprime=1; //assume prime 
        for(i=2; i+i <=n;i++){
            if(n% i==0) {
                isprime =0;
                break;

            }
        }
    } while (isprime==0); //stop when prime is found
    printf("prime number detected :%d\n",n);
    return 0;
}
