#include<stdio.h>

int main() {
    int arr[] ={1, 4, 5, 6, 2, 3};
    int sum =7;
    int size =6;

    printf("paris with sum %d\n",sum);


    for (int i = 0; i <size -1;i++)
        for(int j=i + 1; j<size; j++) {
            if (arr[i] +arr[j] ==sum) {
                printf("(%d,%d)\n",arr[i],arr[j]);

            }

        }
   return 0; 
}