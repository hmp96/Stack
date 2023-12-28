#ifndef __HEADER_H__
#define __HEADER_H__

#include<stdio.h>
#include<stdlib.h>

typedef struct _stack{
    int top; //맨위의 인덱스
    int max; //스택의 최대 크기
    int *data;
} Stack;

void InitStack(Stack* s, int size);
int EmptyStack(Stack* s);
int FullStack(Stack* s);
void Push(Stack* s, int data);
int Pop(Stack* s);
void PrintStack(Stack* s);
void FreeStack(Stack* s);

#endif