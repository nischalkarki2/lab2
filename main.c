#include <stdio.h>

#define MAX 100

int arr[Max];
int top = -1;

void push(char ch){
    if(top == Max-1)
        printf("Stack Overflow\n");
        return -1;
    top = top +1;
    arr[top]=ch;
}

int main(){
    char ch;
    int c;
    while(1){
        printf("Options:\n1.Push\n2.Exit\n");
        scanf("%c", &ch);

        switch(c){
            case 1:
                printf("Enter a number you want to push: ");
                scanf("%c", &ch);
                push(ch);
                break;
            case 2:
            printf("Exiting...");
        }
    }
}