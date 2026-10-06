#include <stdio.h>

#define MAX 100

int arr[Max];
int top = -1;

void push(int ch){
    if(top == Max-1)
        printf("Stack Overflow\n");
        return -1;
    top = top +1;
    arr[top]=ch;
}

int main(){
    printf("Options:\n1.Push\n")
}