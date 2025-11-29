#include<stdio.h>
#include<stdlib.h>
int *stack,top=-1,cap=2;
void push(int v){if(top==cap-1){cap*=2;stack=realloc(stack,cap*sizeof(int));}stack[++top]=v;}
int pop(){return (top==-1)?-1:stack[top==-1];}
int main() {
    stack=malloc(cap*sizeof(int));
    push(11);push(22);push(33);
    printf("back to video id :%d\n",pop());
}