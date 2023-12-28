#include "header.h"

void InitStack(Stack* s, int size)
{   
    s -> data = (int*)malloc(size*sizeof(int));
    s -> top = -1;
    s -> max = size;
}

int EmptyStack(Stack* s)
{
    if(s -> top == -1){
        printf("Stack is empty\n");
        return 1;
    }
    else {
        return 0;
    }
}

int FullStack(Stack* s)
{
    if(s -> top == s -> max - 1){   
        printf("Stack is full\n");
        return 1;
    }
    else{
        return 0;
    }
}

void Push(Stack* s, int data)
{
    if(FullStack(s)){
        return;
    }
    else{
        s -> top++;
        s -> data[s->top] = data;
    }
}

int Pop(Stack* s)
{
    if(EmptyStack(s)){
        exit(1);
    }
    else{
        return s->data[s->top--];
    }
}

void PrintStack(Stack* s)
{
    for(int i=0; i<=s->top; ++i){
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

void FreeStack(Stack* s)
{
    free(s->data);
}