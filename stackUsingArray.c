//
// Created by National Cyber City on 9/5/2022.
//
// stack DS using C program
//WinHtut

#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#define MAX 10

int count=0;
struct stack{

    int data[MAX]; // array // linkedlist
    int top;

};
typedef struct stack st;


void emptyStack(st *s){
    s->top=-1;
}
int full(st *s){

    if(s->top == MAX-1 ){
        return 1;
    }else{
        return 0;
    }
}
void push(st *s , int item){// 5
    if(full(s)){
        printf("Stack is FuLL!");

    } else{
        s->top++;
        s->data[s->top]= item;
    }

    count++;
}

void stackdisplay(st *s){

    printf("Display is stack:");

    for(int i=0 ; i<count ; i++){

        printf(" %d ",s->data[i]);
    }
}

int isEmpty(st *s){
    if(s->top == -1)
        return 1;
    else
        return 0;
}
void pop(st *s){

    if(isEmpty(s)){
        printf("Our Stack is empty:");
    }else{
        printf(" Pop items = %d",s->data[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}

int main(){

    st *s =(st*)malloc(sizeof (st));
    emptyStack(s);

    push(s , 101);
    push(s , 102);
    push(s , 103);
    push(s , 104);
    push(s , 105);

    stackdisplay(s);

    printf("\n POP>: \n");

    pop(s);
    pop(s);
    pop(s);

    return 0;
}
