#include<stdio.h>
#define SIZE 5
int q[SIZE],f=-1,r=-1;
void en(int v){if(r<SIZE-1){if(f==-1)f=0;q[++r]=v;}}
int de(){return (f==-1||f>r)?-1:q[f++];}
int main() {
    en(101);en(102);en(103);
    printf("now playing video Id:%d\n",de());
}