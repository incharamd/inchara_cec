#include<stdio.h>
int main() {
    int arr[] ={4, 2, 8, 6, 9, 5, 98, 99};
    int max=arr[0];
    for(int i=1; i<8; i++)
        if(arr[i] > max)
        max=arr[i];
    printf("maximum =%d\n",max);
    return 0;    
}